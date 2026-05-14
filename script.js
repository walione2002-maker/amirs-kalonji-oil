// Amir's Kalonji Oil - Futuristic interactions
// Replace this with your real WhatsApp number in international format without +
const WHATSAPP_NUMBER = "923000000000";

const navToggle = document.getElementById("navToggle");
const nav = document.getElementById("nav");
const cartList = document.getElementById("cartList");
const selectedItems = [];

navToggle?.addEventListener("click", () => {
  const open = nav.classList.toggle("open");
  navToggle.setAttribute("aria-expanded", String(open));
});

document.querySelectorAll(".nav a").forEach(link => {
  link.addEventListener("click", () => {
    nav.classList.remove("open");
    navToggle?.setAttribute("aria-expanded", "false");
  });
});

// Cursor glow
const cursorGlow = document.getElementById("cursorGlow");
window.addEventListener("pointermove", event => {
  if (!cursorGlow) return;
  cursorGlow.style.left = event.clientX + "px";
  cursorGlow.style.top = event.clientY + "px";
});

// Reveal on scroll
const observer = new IntersectionObserver(entries => {
  entries.forEach(entry => {
    if (entry.isIntersecting) entry.target.classList.add("visible");
  });
}, { threshold: 0.14 });

document.querySelectorAll(".reveal").forEach(el => observer.observe(el));

// Add to order
function renderCart() {
  if (!cartList) return;
  if (selectedItems.length === 0) {
    cartList.innerHTML = "<li>No items selected yet.</li>";
    return;
  }
  cartList.innerHTML = selectedItems.map(item => `<li>✦ ${item}</li>`).join("");
}

document.querySelectorAll(".add-cart").forEach(button => {
  button.addEventListener("click", () => {
    const product = button.dataset.product;
    selectedItems.push(product);
    renderCart();
    document.getElementById("order")?.scrollIntoView({ behavior: "smooth" });
  });
});

// WhatsApp order form
const orderForm = document.getElementById("orderForm");
orderForm?.addEventListener("submit", event => {
  event.preventDefault();

  const name = document.getElementById("customerName").value.trim();
  const phone = document.getElementById("customerPhone").value.trim();
  const city = document.getElementById("customerCity").value.trim();
  const qty = document.getElementById("customerQty").value.trim();
  const address = document.getElementById("customerAddress").value.trim();
  const message = document.getElementById("customerMessage").value.trim();
  const items = selectedItems.length ? selectedItems.join(", ") : "Please suggest best bottle size";

  const text = `Hello Amir's Kalonji Oil,%0A%0AI want to place an order.%0A%0AName: ${encodeURIComponent(name)}%0APhone: ${encodeURIComponent(phone)}%0ACity: ${encodeURIComponent(city)}%0ASelected Items: ${encodeURIComponent(items)}%0AQuantity: ${encodeURIComponent(qty)}%0AAddress: ${encodeURIComponent(address)}%0AMessage: ${encodeURIComponent(message)}`;

  window.open(`https://wa.me/${WHATSAPP_NUMBER}?text=${text}`, "_blank");
});

// Futuristic particle canvas
const canvas = document.getElementById("particleCanvas");
const ctx = canvas?.getContext("2d");
let particles = [];

function resizeCanvas() {
  if (!canvas) return;
  canvas.width = canvas.offsetWidth * devicePixelRatio;
  canvas.height = canvas.offsetHeight * devicePixelRatio;
  if (ctx) ctx.setTransform(devicePixelRatio, 0, 0, devicePixelRatio, 0, 0);
}

function createParticles() {
  if (!canvas) return;
  const count = Math.min(90, Math.floor(window.innerWidth / 18));
  particles = Array.from({ length: count }, () => ({
    x: Math.random() * canvas.offsetWidth,
    y: Math.random() * canvas.offsetHeight,
    vx: (Math.random() - 0.5) * 0.35,
    vy: (Math.random() - 0.5) * 0.35,
    r: Math.random() * 1.8 + 0.4
  }));
}

function animateParticles() {
  if (!canvas || !ctx) return;
  ctx.clearRect(0, 0, canvas.offsetWidth, canvas.offsetHeight);
  ctx.fillStyle = "rgba(240, 195, 91, 0.58)";
  ctx.strokeStyle = "rgba(124, 255, 155, 0.12)";

  particles.forEach((p, i) => {
    p.x += p.vx;
    p.y += p.vy;
    if (p.x < 0 || p.x > canvas.offsetWidth) p.vx *= -1;
    if (p.y < 0 || p.y > canvas.offsetHeight) p.vy *= -1;

    ctx.beginPath();
    ctx.arc(p.x, p.y, p.r, 0, Math.PI * 2);
    ctx.fill();

    for (let j = i + 1; j < particles.length; j++) {
      const q = particles[j];
      const dx = p.x - q.x;
      const dy = p.y - q.y;
      const dist = Math.sqrt(dx * dx + dy * dy);
      if (dist < 120) {
        ctx.globalAlpha = 1 - dist / 120;
        ctx.beginPath();
        ctx.moveTo(p.x, p.y);
        ctx.lineTo(q.x, q.y);
        ctx.stroke();
        ctx.globalAlpha = 1;
      }
    }
  });

  requestAnimationFrame(animateParticles);
}

window.addEventListener("resize", () => {
  resizeCanvas();
  createParticles();
});

resizeCanvas();
createParticles();
animateParticles();
renderCart();
