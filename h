/* =====================================================
   Amir's Kalonji Oil - Premium Static Website
   Upload to GitHub/Vercel: index.html + style.css only
   ===================================================== */

:root {
  --black: #0d0c08;
  --charcoal: #17140e;
  --olive: #4d5a31;
  --olive-dark: #2f361f;
  --seed: #11100b;
  --gold: #d4a94b;
  --gold-soft: #f7d98c;
  --cream: #fff8e8;
  --sand: #f1dfbd;
  --paper: #ffffff;
  --muted: #746d5f;
  --line: rgba(77, 90, 49, 0.16);
  --shadow: 0 28px 80px rgba(13, 12, 8, 0.16);
  --soft-shadow: 0 16px 44px rgba(13, 12, 8, 0.09);
  --radius-xl: 36px;
  --radius-lg: 26px;
  --radius-md: 18px;
  --max: 1180px;
}

* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

html {
  scroll-behavior: smooth;
}

body {
  min-height: 100vh;
  font-family: Inter, "Segoe UI", Arial, sans-serif;
  color: var(--black);
  background:
    radial-gradient(circle at 10% 8%, rgba(212, 169, 75, 0.18), transparent 28%),
    radial-gradient(circle at 88% 14%, rgba(77, 90, 49, 0.18), transparent 30%),
    linear-gradient(135deg, #fff9ec 0%, #f8edcf 52%, #fff8e8 100%);
  overflow-x: hidden;
}

body::before {
  content: "";
  position: fixed;
  inset: 0;
  pointer-events: none;
  opacity: 0.3;
  background-image:
    radial-gradient(circle, rgba(13, 12, 8, 0.12) 1px, transparent 1.2px);
  background-size: 34px 34px;
  mask-image: linear-gradient(to bottom, black, transparent 76%);
}

a {
  color: inherit;
  text-decoration: none;
}

button,
input,
select,
textarea {
  font: inherit;
}

.container {
  width: min(var(--max), calc(100% - 32px));
  margin: 0 auto;
}

.section {
  position: relative;
  padding: 90px 0;
  scroll-margin-top: 110px;
}

.header {
  position: sticky;
  top: 14px;
  z-index: 100;
  width: min(var(--max), calc(100% - 32px));
  min-height: 78px;
  margin: 14px auto 0;
  padding: 12px 14px;
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 18px;
  border: 1px solid rgba(255, 255, 255, 0.72);
  border-radius: 999px;
  background: rgba(255, 248, 232, 0.76);
  backdrop-filter: blur(22px);
  box-shadow: var(--soft-shadow);
}

.brand {
  display: inline-flex;
  align-items: center;
  gap: 12px;
  min-width: max-content;
}

.brand-icon {
  width: 52px;
  height: 52px;
  display: grid;
  place-items: center;
  color: var(--gold-soft);
  font-weight: 950;
  letter-spacing: -0.04em;
  border-radius: 18px;
  background:
    radial-gradient(circle at 30% 25%, rgba(212, 169, 75, 0.36), transparent 34%),
    linear-gradient(145deg, var(--seed), var(--olive-dark));
  box-shadow: 0 14px 32px rgba(13, 12, 8, 0.22);
}

.brand strong,
.brand small {
  display: block;
}

.brand strong {
  font-size: 1rem;
  line-height: 1.1;
}

.brand small {
  margin-top: 3px;
  color: var(--muted);
  font-size: 0.74rem;
  font-weight: 700;
}

.nav {
  display: flex;
  align-items: center;
  gap: 5px;
  padding: 6px;
  border-radius: 999px;
  background: rgba(255, 255, 255, 0.44);
}

.nav a {
  padding: 10px 14px;
  border-radius: 999px;
  color: var(--olive-dark);
  font-size: 0.92rem;
  font-weight: 850;
  transition: 0.25s ease;
}

.nav a:hover {
  color: var(--gold-soft);
  background: var(--charcoal);
}

.menu-toggle,
.menu-btn {
  display: none;
}

.eyebrow {
  display: inline-flex;
  align-items: center;
  gap: 10px;
  margin-bottom: 14px;
  color: var(--olive);
  font-size: 0.76rem;
  font-weight: 950;
  letter-spacing: 0.16em;
  text-transform: uppercase;
}

.eyebrow::before {
  content: "";
  width: 34px;
  height: 2px;
  background: linear-gradient(90deg, var(--gold), transparent);
}

h1,
h2,
h3 {
  letter-spacing: -0.05em;
  line-height: 1.03;
}

.hero {
  min-height: calc(100vh - 92px);
  display: grid;
  align-items: center;
  padding-top: 70px;
  overflow: hidden;
}

.hero-bg-orb {
  position: absolute;
  border-radius: 50%;
  filter: blur(10px);
  opacity: 0.8;
  pointer-events: none;
}

.orb-one {
  width: 360px;
  height: 360px;
  left: -130px;
  top: 160px;
  background: rgba(212, 169, 75, 0.2);
}

.orb-two {
  width: 460px;
  height: 460px;
  right: -160px;
  bottom: 40px;
  background: rgba(77, 90, 49, 0.16);
}

.hero-grid {
  display: grid;
  grid-template-columns: 1fr 0.82fr;
  align-items: center;
  gap: 42px;
}

.hero-copy h1 {
  max-width: 850px;
  font-size: clamp(3.6rem, 8vw, 7.4rem);
}

.lead {
  max-width: 720px;
  margin-top: 22px;
  color: var(--muted);
  font-size: clamp(1.02rem, 2vw, 1.24rem);
  line-height: 1.85;
}

.hero-actions,
.hero-points,
.contact-cards {
  display: flex;
  align-items: center;
  flex-wrap: wrap;
}

.hero-actions {
  gap: 14px;
  margin-top: 34px;
}

.btn {
  min-height: 52px;
  display: inline-flex;
  align-items: center;
  justify-content: center;
  padding: 14px 22px;
  border: 0;
  border-radius: 999px;
  cursor: pointer;
  font-weight: 950;
  transition: 0.25s ease;
}

.btn:hover {
  transform: translateY(-3px);
}

.btn-primary {
  color: var(--gold-soft);
  background: linear-gradient(145deg, var(--charcoal), var(--olive-dark));
  box-shadow: 0 18px 38px rgba(13, 12, 8, 0.22);
}

.btn-gold {
  color: #2a210c;
  background: linear-gradient(145deg, var(--gold-soft), var(--gold));
  box-shadow: 0 18px 38px rgba(212, 169, 75, 0.26);
}

.btn-soft {
  color: var(--olive-dark);
  background: rgba(255, 255, 255, 0.62);
  border: 1px solid var(--line);
}

.whatsapp {
  color: white;
  background: #1fa855;
  box-shadow: 0 18px 38px rgba(31, 168, 85, 0.24);
}

.hero-points {
  gap: 10px;
  margin-top: 28px;
}

.hero-points span {
  padding: 9px 12px;
  border: 1px solid var(--line);
  border-radius: 999px;
  color: var(--olive-dark);
  background: rgba(255, 255, 255, 0.5);
  font-size: 0.82rem;
  font-weight: 900;
}

.bottle-stage {
  position: relative;
  min-height: 640px;
  display: grid;
  place-items: center;
  border-radius: 52px;
  background:
    radial-gradient(circle at 50% 30%, rgba(247, 217, 140, 0.32), transparent 34%),
    linear-gradient(145deg, rgba(255, 255, 255, 0.72), rgba(255, 255, 255, 0.28));
  border: 1px solid rgba(255, 255, 255, 0.78);
  box-shadow: var(--shadow);
  overflow: hidden;
}

.bottle-stage::before,
.bottle-stage::after {
  content: "";
  position: absolute;
  border-radius: 50%;
  background: var(--seed);
  opacity: 0.07;
}

.bottle-stage::before {
  width: 260px;
  height: 260px;
  left: -80px;
  bottom: -80px;
}

.bottle-stage::after {
  width: 180px;
  height: 180px;
  right: -42px;
  top: 42px;
}

.bottle-wrap {
  position: relative;
  z-index: 2;
  width: 245px;
  height: 500px;
  display: grid;
  justify-items: center;
  align-content: start;
  filter: drop-shadow(0 28px 38px rgba(13, 12, 8, 0.26));
}

.bottle-cap {
  width: 82px;
  height: 52px;
  border-radius: 18px 18px 8px 8px;
  background: linear-gradient(145deg, #1d1a12, #050504);
  order: 1;
}

.bottle-neck {
  width: 70px;
  height: 70px;
  margin-top: 20px;
  border-radius: 18px 18px 4px 4px;
  background: linear-gradient(90deg, rgba(255,255,255,0.42), rgba(247,217,140,0.22), rgba(0,0,0,0.12));
  border: 1px solid rgba(255,255,255,0.42);
  order: 2;
}

.bottle-body {
  position: relative;
  width: 232px;
  height: 360px;
  margin-top: -6px;
  border-radius: 44px 44px 58px 58px;
  background:
    linear-gradient(90deg, rgba(255,255,255,0.35), transparent 16%, rgba(0,0,0,0.18) 82%),
    linear-gradient(to bottom, rgba(247, 217, 140, 0.52), rgba(73, 58, 20, 0.92));
  border: 1px solid rgba(255, 255, 255, 0.52);
  overflow: hidden;
  order: 3;
}

.label {
  position: absolute;
  left: 24px;
  right: 24px;
  bottom: 64px;
  padding: 24px 18px;
  text-align: center;
  border-radius: 28px;
  color: var(--gold-soft);
  background: linear-gradient(145deg, var(--seed), var(--olive-dark));
  border: 1px solid rgba(247, 217, 140, 0.24);
}

.label span {
  display: block;
  letter-spacing: 0.22em;
  font-size: 0.68rem;
  font-weight: 950;
}

.label h2 {
  margin: 8px 0;
  font-size: 1.8rem;
}

.label p {
  color: rgba(247, 217, 140, 0.72);
  font-size: 0.8rem;
  font-weight: 700;
}

.oil-shine {
  position: absolute;
  top: 30px;
  left: 34px;
  width: 34px;
  height: 250px;
  border-radius: 999px;
  background: linear-gradient(to bottom, rgba(255,255,255,0.42), transparent);
  opacity: 0.7;
}

.quality-card {
  position: absolute;
  z-index: 4;
  width: min(240px, 74%);
  padding: 16px;
  border-radius: 22px;
  background: rgba(255, 255, 255, 0.76);
  backdrop-filter: blur(16px);
  border: 1px solid rgba(255, 255, 255, 0.8);
  box-shadow: var(--soft-shadow);
}

.quality-card small,
.quality-card strong {
  display: block;
}

.quality-card small {
  color: var(--muted);
  font-weight: 850;
}

.quality-card strong {
  margin-top: 4px;
  color: var(--olive-dark);
  font-size: 1.08rem;
}

.top-card {
  left: 22px;
  top: 64px;
}

.bottom-card {
  right: 22px;
  bottom: 70px;
}

.intro-strip {
  padding-top: 0;
}

.strip-grid {
  display: grid;
  grid-template-columns: repeat(4, 1fr);
  gap: 14px;
  margin-top: -35px;
  position: relative;
  z-index: 5;
}

.strip-grid article {
  padding: 24px;
  border-radius: 26px;
  background: rgba(255,255,255,0.72);
  border: 1px solid rgba(255,255,255,0.82);
  box-shadow: var(--soft-shadow);
}

.strip-grid strong {
  color: var(--gold);
  font-size: 1.8rem;
}

.strip-grid span {
  display: block;
  margin-top: 8px;
  color: var(--olive-dark);
  font-weight: 900;
}

.section-head {
  max-width: 760px;
  margin: 0 auto 44px;
  text-align: center;
}

.left-head {
  margin-left: 0;
  text-align: left;
}

.section-head h2,
.purity-copy h2,
.order-copy h2,
.testimonial-grid h2 {
  font-size: clamp(2.4rem, 5vw, 4.8rem);
}

.section-head p,
.purity-copy > p,
.order-copy > p {
  margin-top: 16px;
  color: var(--muted);
  font-size: 1.04rem;
  line-height: 1.8;
}

.product-grid {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  gap: 18px;
}

.product-card,
.bundle-card,
.quote-card,
.order-form {
  border: 1px solid rgba(255,255,255,0.82);
  background: rgba(255,255,255,0.72);
  box-shadow: var(--soft-shadow);
  border-radius: var(--radius-xl);
}

.product-card {
  padding: 18px;
  overflow: hidden;
  transition: 0.3s ease;
}

.product-card:hover {
  transform: translateY(-8px);
  box-shadow: var(--shadow);
}

.featured-product {
  background:
    radial-gradient(circle at 80% 8%, rgba(247, 217, 140, 0.28), transparent 32%),
    linear-gradient(145deg, rgba(23,20,14,0.96), rgba(47,54,31,0.96));
  color: white;
}

.featured-product p,
.featured-product li {
  color: rgba(255,255,255,0.72) !important;
}

.product-art {
  height: 265px;
  border-radius: 28px;
  background:
    radial-gradient(circle at center 26%, rgba(247,217,140,0.46), transparent 30%),
    linear-gradient(145deg, rgba(212,169,75,0.22), rgba(77,90,49,0.14));
  position: relative;
  overflow: hidden;
}

.product-art::before {
  content: "";
  position: absolute;
  left: 50%;
  bottom: 24px;
  transform: translateX(-50%);
  width: var(--bottle-w, 92px);
  height: var(--bottle-h, 190px);
  border-radius: 26px 26px 34px 34px;
  background:
    linear-gradient(90deg, rgba(255,255,255,0.4), transparent 22%, rgba(0,0,0,0.2) 82%),
    linear-gradient(to bottom, rgba(247,217,140,0.62), rgba(56,43,14,0.94));
  box-shadow: 0 20px 34px rgba(13,12,8,0.24);
}

.product-art::after {
  content: "AMIR'S";
  position: absolute;
  left: 50%;
  bottom: 78px;
  transform: translateX(-50%);
  width: calc(var(--bottle-w, 92px) - 22px);
  height: 58px;
  display: grid;
  place-items: center;
  border-radius: 16px;
  color: var(--gold-soft);
  background: var(--seed);
  font-size: 0.64rem;
  font-weight: 950;
  letter-spacing: 0.12em;
}

.small-bottle { --bottle-w: 78px; --bottle-h: 168px; }
.medium-bottle { --bottle-w: 96px; --bottle-h: 198px; }
.large-bottle { --bottle-w: 112px; --bottle-h: 220px; }

.product-info {
  padding: 22px 8px 6px;
}

.tag,
.bundle-label {
  display: inline-flex;
  margin-bottom: 10px;
  padding: 7px 11px;
  border-radius: 999px;
  color: var(--olive-dark);
  background: rgba(212,169,75,0.17);
  font-size: 0.72rem;
  font-weight: 950;
  letter-spacing: 0.08em;
  text-transform: uppercase;
}

.featured-product .tag {
  color: var(--gold-soft);
  background: rgba(247,217,140,0.12);
}

.product-info h3 {
  font-size: 1.7rem;
  margin-bottom: 10px;
}

.product-info p,
.product-info li {
  color: var(--muted);
  line-height: 1.66;
}

.product-info ul,
.bundle-card ul {
  list-style: none;
  display: grid;
  gap: 9px;
  margin: 18px 0;
}

.product-info li::before,
.bundle-card li::before {
  content: "✦";
  margin-right: 8px;
  color: var(--gold);
}

.purity-section {
  overflow: hidden;
}

.purity-grid,
.order-grid,
.testimonial-grid {
  display: grid;
  grid-template-columns: 1fr 0.9fr;
  gap: 28px;
  align-items: center;
}

.promise-list {
  display: grid;
  gap: 14px;
  margin-top: 28px;
}

.promise-list div {
  display: grid;
  grid-template-columns: 46px 1fr;
  gap: 14px;
  align-items: start;
  padding: 18px;
  border: 1px solid var(--line);
  border-radius: 22px;
  background: rgba(255,255,255,0.58);
}

.promise-list span {
  width: 46px;
  height: 46px;
  display: grid;
  place-items: center;
  border-radius: 16px;
  color: var(--gold-soft);
  background: var(--charcoal);
}

.promise-list p {
  color: var(--muted);
  line-height: 1.65;
}

.promise-list strong {
  color: var(--black);
}

.purity-panel {
  min-height: 560px;
  position: relative;
  display: grid;
  place-items: center;
  border-radius: var(--radius-xl);
  background:
    radial-gradient(circle at 50% 42%, rgba(247,217,140,0.42), transparent 32%),
    linear-gradient(145deg, var(--charcoal), var(--olive-dark));
  box-shadow: var(--shadow);
  overflow: hidden;
}

.drop {
  position: absolute;
  width: 180px;
  height: 230px;
  border-radius: 70% 70% 80% 80%;
  background:
    linear-gradient(145deg, rgba(247,217,140,0.85), rgba(91,68,18,0.76));
  transform: rotate(38deg);
  opacity: 0.92;
  box-shadow: inset 18px 18px 28px rgba(255,255,255,0.18), 0 28px 42px rgba(0,0,0,0.24);
}

.drop-one {
  left: 86px;
  top: 90px;
}

.drop-two {
  width: 120px;
  height: 156px;
  right: 92px;
  bottom: 96px;
  opacity: 0.62;
}

.glass-card {
  position: relative;
  z-index: 2;
  width: min(360px, calc(100% - 40px));
  padding: 28px;
  border-radius: 28px;
  color: white;
  background: rgba(255,255,255,0.12);
  border: 1px solid rgba(255,255,255,0.18);
  backdrop-filter: blur(16px);
}

.glass-card span,
.glass-card strong {
  display: block;
}

.glass-card span {
  color: var(--gold-soft);
  font-weight: 950;
  text-transform: uppercase;
  letter-spacing: 0.13em;
  font-size: 0.75rem;
}

.glass-card strong {
  margin: 10px 0;
  font-size: 2rem;
  letter-spacing: -0.04em;
}

.glass-card p {
  color: rgba(255,255,255,0.72);
  line-height: 1.7;
}

.timeline {
  display: grid;
  grid-template-columns: repeat(4, 1fr);
  gap: 16px;
  counter-reset: steps;
}

.timeline article {
  min-height: 270px;
  padding: 24px;
  border-radius: var(--radius-lg);
  background: rgba(255,255,255,0.72);
  border: 1px solid rgba(255,255,255,0.8);
  box-shadow: var(--soft-shadow);
  position: relative;
  overflow: hidden;
}

.timeline article::after {
  content: "";
  position: absolute;
  width: 120px;
  height: 120px;
  right: -46px;
  bottom: -46px;
  border-radius: 50%;
  background: rgba(212,169,75,0.14);
}

.timeline span {
  width: 48px;
  height: 48px;
  display: grid;
  place-items: center;
  border-radius: 16px;
  color: var(--gold-soft);
  background: var(--charcoal);
  font-weight: 950;
}

.timeline h3 {
  margin: 22px 0 10px;
  font-size: 1.55rem;
}

.timeline p,
.bundle-card p,
.quote-card p,
.order-copy p {
  color: var(--muted);
  line-height: 1.72;
}

.bundle-grid {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  gap: 18px;
}

.bundle-card {
  padding: 30px;
}

.bundle-card h3 {
  font-size: 2rem;
  margin-bottom: 10px;
}

.bundle-dark {
  color: white;
  background:
    radial-gradient(circle at 80% 8%, rgba(247,217,140,0.26), transparent 32%),
    linear-gradient(145deg, var(--charcoal), var(--olive-dark));
}

.bundle-dark p,
.bundle-dark li {
  color: rgba(255,255,255,0.72);
}

.bundle-dark .bundle-label {
  color: var(--gold-soft);
  background: rgba(247,217,140,0.12);
}

.testimonials-section {
  padding-top: 40px;
}

.quote-card {
  padding: 32px;
  background: rgba(255,255,255,0.68);
}

.quote-card p {
  font-size: 1.25rem;
}

.quote-card strong {
  display: block;
  margin-top: 18px;
  color: var(--olive-dark);
}

.order-copy {
  padding-right: 30px;
}

.contact-cards {
  gap: 10px;
  margin-top: 26px;
}

.contact-cards a {
  padding: 11px 14px;
  border-radius: 999px;
  color: var(--olive-dark);
  background: rgba(255,255,255,0.62);
  border: 1px solid var(--line);
  font-weight: 900;
}

.order-form {
  padding: 30px;
  display: grid;
  grid-template-columns: repeat(2, 1fr);
  gap: 14px;
}

.order-form label {
  display: grid;
  gap: 8px;
  color: var(--olive-dark);
  font-size: 0.84rem;
  font-weight: 950;
}

.order-form input,
.order-form select,
.order-form textarea {
  width: 100%;
  min-height: 52px;
  padding: 14px;
  border: 1px solid var(--line);
  border-radius: 18px;
  outline: none;
  color: var(--black);
  background: rgba(255,248,232,0.78);
}

.order-form textarea {
  min-height: 140px;
  resize: vertical;
}

.full {
  grid-column: 1 / -1;
}

.footer {
  padding: 60px 0 24px;
  color: white;
  background: var(--charcoal);
}

.footer-grid {
  display: grid;
  grid-template-columns: 1.45fr 1fr 1fr 1fr;
  gap: 26px;
}

.footer-brand {
  display: inline-block;
  margin-bottom: 10px;
  color: var(--gold-soft);
  font-size: 1.25rem;
  font-weight: 950;
}

.footer p,
.footer a {
  display: block;
  color: rgba(255,255,255,0.68);
  line-height: 1.7;
  margin-bottom: 8px;
}

.footer h4 {
  margin-bottom: 12px;
  color: white;
}

.footer-bottom {
  width: min(var(--max), calc(100% - 32px));
  margin: 34px auto 0;
  padding-top: 22px;
  border-top: 1px solid rgba(255,255,255,0.12);
  color: rgba(255,255,255,0.56);
  text-align: center;
}

@media (max-width: 980px) {
  .header {
    border-radius: 26px;
  }

  .menu-btn {
    width: 48px;
    height: 48px;
    display: grid;
    place-content: center;
    gap: 5px;
    border-radius: 16px;
    background: var(--charcoal);
    cursor: pointer;
  }

  .menu-btn span {
    width: 23px;
    height: 2px;
    background: var(--gold-soft);
    transition: 0.25s ease;
  }

  .nav {
    position: fixed;
    top: 98px;
    left: 16px;
    right: 16px;
    display: grid;
    grid-template-columns: repeat(2, 1fr);
    padding: 14px;
    border-radius: 26px;
    background: rgba(255,248,232,0.96);
    box-shadow: var(--shadow);
    opacity: 0;
    pointer-events: none;
    transform: translateY(-14px);
  }

  .menu-toggle:checked ~ .header .nav {
    opacity: 1;
    pointer-events: auto;
    transform: translateY(0);
  }

  .hero-grid,
  .purity-grid,
  .order-grid,
  .testimonial-grid {
    grid-template-columns: 1fr;
  }

  .bottle-stage {
    min-height: 560px;
  }

  .strip-grid,
  .product-grid,
  .timeline,
  .bundle-grid,
  .footer-grid {
    grid-template-columns: repeat(2, 1fr);
  }

  .order-copy {
    padding-right: 0;
  }
}

@media (max-width: 640px) {
  .container,
  .header,
  .footer-bottom {
    width: min(100% - 22px, var(--max));
  }

  .section {
    padding: 66px 0;
  }

  .header {
    top: 10px;
    min-height: 72px;
    margin-top: 10px;
  }

  .brand-icon {
    width: 46px;
    height: 46px;
    border-radius: 15px;
  }

  .brand strong {
    font-size: 0.92rem;
  }

  .brand small {
    display: none;
  }

  .hero {
    padding-top: 38px;
  }

  .hero-copy h1 {
    font-size: clamp(2.7rem, 15vw, 4.6rem);
  }

  .hero-actions .btn {
    width: 100%;
  }

  .bottle-stage {
    min-height: 500px;
    border-radius: 34px;
  }

  .bottle-wrap {
    transform: scale(0.82);
  }

  .quality-card {
    width: calc(100% - 36px);
  }

  .top-card {
    left: 18px;
    top: 20px;
  }

  .bottom-card {
    right: 18px;
    bottom: 22px;
  }

  .strip-grid,
  .product-grid,
  .timeline,
  .bundle-grid,
  .order-form,
  .footer-grid {
    grid-template-columns: 1fr;
  }

  .strip-grid {
    margin-top: 0;
  }

  .section-head,
  .left-head {
    text-align: left;
    margin-left: 0;
  }

  .purity-panel {
    min-height: 430px;
  }

  .drop-one {
    left: 34px;
    top: 70px;
  }

  .drop-two {
    right: 28px;
    bottom: 62px;
  }

  .product-card,
  .bundle-card,
  .quote-card,
  .order-form {
    border-radius: 26px;
  }
}

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <meta name="description" content="Amir's Kalonji Oil - premium filtered black seed oil products with clean bottling, transparent quality process, and debris-free purity focus." />
  <title>Amir's Kalonji Oil | Pure Black Seed Oils</title>
  <link rel="stylesheet" href="style.css" />
</head>
<body>
  <input type="checkbox" id="menu-toggle" class="menu-toggle" aria-hidden="true" />

  <header class="header">
    <a href="#home" class="brand" aria-label="Amir's Kalonji Oil home">
      <span class="brand-icon">AK</span>
      <span>
        <strong>Amir's Kalonji Oil</strong>
        <small>Pure • Filtered • Debris-Free</small>
      </span>
    </a>

    <label for="menu-toggle" class="menu-btn" aria-label="Open navigation">
      <span></span><span></span><span></span>
    </label>

    <nav class="nav" aria-label="Main navigation">
      <a href="#home">Home</a>
      <a href="#products">Products</a>
      <a href="#purity">Purity</a>
      <a href="#process">Process</a>
      <a href="#bundles">Bundles</a>
      <a href="#order">Order</a>
    </nav>
  </header>

  <main>
    <section id="home" class="hero section">
      <div class="hero-bg-orb orb-one"></div>
      <div class="hero-bg-orb orb-two"></div>

      <div class="container hero-grid">
        <div class="hero-copy">
          <p class="eyebrow">Premium black seed oil products</p>
          <h1>Pure kalonji oil, filtered clean — without debris.</h1>
          <p class="lead">A refined oil brand built around clarity, freshness, careful filtering, and elegant packaging. Made for customers who want simple, clean, high-quality kalonji oil without unwanted particles.</p>

          <div class="hero-actions">
            <a class="btn btn-primary" href="#products">Shop Oils</a>
            <a class="btn btn-soft" href="#purity">See Purity Promise</a>
          </div>

          <div class="hero-points" aria-label="Product highlights">
            <span>Fine-filtered</span>
            <span>Clean bottling</span>
            <span>Batch focused</span>
            <span>No debris</span>
          </div>
        </div>

        <div class="bottle-stage" aria-label="Featured kalonji oil bottle presentation">
          <div class="quality-card top-card">
            <small>Visual Check</small>
            <strong>Clear & particle-free</strong>
          </div>
          <div class="bottle-wrap">
            <div class="bottle-neck"></div>
            <div class="bottle-cap"></div>
            <div class="bottle-body">
              <div class="label">
                <span>AMIR'S</span>
                <h2>Kalonji Oil</h2>
                <p>Filtered black seed oil</p>
              </div>
              <div class="oil-shine"></div>
            </div>
          </div>
          <div class="quality-card bottom-card">
            <small>Purity Promise</small>
            <strong>No visible debris</strong>
          </div>
        </div>
      </div>
    </section>

    <section class="section intro-strip">
      <div class="container strip-grid">
        <article>
          <strong>01</strong>
          <span>Selected Kalonji Seeds</span>
        </article>
        <article>
          <strong>02</strong>
          <span>Controlled Extraction</span>
        </article>
        <article>
          <strong>03</strong>
          <span>Fine Filtration</span>
        </article>
        <article>
          <strong>04</strong>
          <span>Clean Sealed Bottles</span>
        </article>
      </div>
    </section>

    <section id="products" class="section products-section">
      <div class="container">
        <div class="section-head">
          <p class="eyebrow">Oil collection</p>
          <h2>Choose your bottle size.</h2>
          <p>Keep your catalog focused and premium. Start with a small number of carefully presented kalonji oil products instead of confusing customers with too many options.</p>
        </div>

        <div class="product-grid">
          <article class="product-card">
            <div class="product-art small-bottle"></div>
            <div class="product-info">
              <p class="tag">Daily Use</p>
              <h3>Amir's Kalonji Oil 100ml</h3>
              <p>Compact bottle for first-time buyers, personal use, and easy storage.</p>
              <ul>
                <li>Fine-filtered oil</li>
                <li>Sealed cap</li>
                <li>Clear bottle check</li>
              </ul>
              <a href="#order" class="btn btn-primary">Order 100ml</a>
            </div>
          </article>

          <article class="product-card featured-product">
            <div class="product-art medium-bottle"></div>
            <div class="product-info">
              <p class="tag">Best Seller</p>
              <h3>Amir's Kalonji Oil 250ml</h3>
              <p>The balanced size for regular customers who want a premium bottle with longer use.</p>
              <ul>
                <li>Debris-free finish</li>
                <li>Batch label ready</li>
                <li>Premium shelf look</li>
              </ul>
              <a href="#order" class="btn btn-gold">Order 250ml</a>
            </div>
          </article>

          <article class="product-card">
            <div class="product-art large-bottle"></div>
            <div class="product-info">
              <p class="tag">Family Size</p>
              <h3>Amir's Kalonji Oil 500ml</h3>
              <p>Ideal for family use, repeat buyers, and customers who prefer value packaging.</p>
              <ul>
                <li>Larger capacity</li>
                <li>Clean filtered oil</li>
                <li>Secure packaging</li>
              </ul>
              <a href="#order" class="btn btn-primary">Order 500ml</a>
            </div>
          </article>
        </div>
      </div>
    </section>

    <section id="purity" class="section purity-section">
      <div class="container purity-grid">
        <div class="purity-copy">
          <p class="eyebrow">The purity promise</p>
          <h2>No debris. No cloudy presentation. No careless bottling.</h2>
          <p>Amir's Kalonji Oil is positioned around a simple promise: a cleaner-looking oil experience. Every bottle is presented with a focus on filtering, visual clarity, and careful sealing.</p>

          <div class="promise-list">
            <div>
              <span>✓</span>
              <p><strong>Fine-filtered</strong> to reduce unwanted particles and visible sediment.</p>
            </div>
            <div>
              <span>✓</span>
              <p><strong>Clear inspection</strong> before dispatch so customers receive a clean bottle.</p>
            </div>
            <div>
              <span>✓</span>
              <p><strong>Simple ingredients</strong> focused only on kalonji oil — no unnecessary mixture messaging.</p>
            </div>
          </div>
        </div>

        <div class="purity-panel">
          <div class="drop drop-one"></div>
          <div class="drop drop-two"></div>
          <div class="glass-card">
            <span>Purity Score</span>
            <strong>Debris-Free Focus</strong>
            <p>Designed as a premium brand promise for customer confidence.</p>
          </div>
        </div>
      </div>
    </section>

    <section id="process" class="section process-section">
      <div class="container">
        <div class="section-head left-head">
          <p class="eyebrow">How it is prepared</p>
          <h2>A clean process customers can understand.</h2>
        </div>

        <div class="timeline">
          <article>
            <span>1</span>
            <h3>Seed Selection</h3>
            <p>Start with quality kalonji seeds and remove obvious impurities before extraction.</p>
          </article>
          <article>
            <span>2</span>
            <h3>Oil Extraction</h3>
            <p>Extract the oil with controlled handling to keep the product consistent.</p>
          </article>
          <article>
            <span>3</span>
            <h3>Fine Filtration</h3>
            <p>Filter the oil to reduce visible residue and improve the final bottle appearance.</p>
          </article>
          <article>
            <span>4</span>
            <h3>Clean Bottling</h3>
            <p>Fill, seal, label, and check bottles before they are packed for customers.</p>
          </article>
        </div>
      </div>
    </section>

    <section id="bundles" class="section bundles-section">
      <div class="container">
        <div class="section-head">
          <p class="eyebrow">Bundles</p>
          <h2>Simple offers for easy selling.</h2>
          <p>These bundle cards are designed for online orders, WhatsApp selling, and social media campaigns.</p>
        </div>

        <div class="bundle-grid">
          <article class="bundle-card">
            <span class="bundle-label">Starter</span>
            <h3>Trial Pack</h3>
            <p>1 × 100ml bottle for new customers.</p>
            <ul>
              <li>Good for first order</li>
              <li>Small and affordable</li>
              <li>Easy to deliver</li>
            </ul>
            <a href="#order" class="btn btn-soft">Request Price</a>
          </article>

          <article class="bundle-card bundle-dark">
            <span class="bundle-label">Popular</span>
            <h3>Monthly Pack</h3>
            <p>2 × 250ml bottles for regular buyers.</p>
            <ul>
              <li>Best for repeat use</li>
              <li>Premium presentation</li>
              <li>Great for families</li>
            </ul>
            <a href="#order" class="btn btn-gold">Request Price</a>
          </article>

          <article class="bundle-card">
            <span class="bundle-label">Family</span>
            <h3>Value Pack</h3>
            <p>1 × 500ml bottle plus 1 × 100ml bottle.</p>
            <ul>
              <li>Family stock</li>
              <li>Gift-friendly add-on</li>
              <li>Higher value order</li>
            </ul>
            <a href="#order" class="btn btn-soft">Request Price</a>
          </article>
        </div>
      </div>
    </section>

    <section class="section testimonials-section">
      <div class="container testimonial-grid">
        <div>
          <p class="eyebrow">Customer confidence</p>
          <h2>Built for trust before the first order.</h2>
        </div>
        <div class="quote-card">
          <p>“The brand presentation is clean, premium and direct. Customers instantly understand that this oil is focused on purity and clarity.”</p>
          <strong>Brand Positioning Note</strong>
        </div>
      </div>
    </section>

    <section id="order" class="section order-section">
      <div class="container order-grid">
        <div class="order-copy">
          <p class="eyebrow">Order now</p>
          <h2>Start taking kalonji oil orders online.</h2>
          <p>Replace the placeholder phone number and email with your real contact details. The WhatsApp button can be connected directly to your business number.</p>

          <div class="contact-cards">
            <a href="tel:+923000000000">+92 300 0000000</a>
            <a href="mailto:orders@amirskalonji.com">orders@amirskalonji.com</a>
            <a href="https://www.facebook.com/amirsinternational/" target="_blank" rel="noopener">Facebook Page</a>
          </div>
        </div>

        <form class="order-form" action="mailto:orders@amirskalonji.com" method="post" enctype="text/plain">
          <label>Full Name<input name="Name" type="text" placeholder="Your name" required /></label>
          <label>Phone Number<input name="Phone" type="tel" placeholder="03XX-XXXXXXX" required /></label>
          <label>Product<select name="Product"><option>100ml Kalonji Oil</option><option>250ml Kalonji Oil</option><option>500ml Kalonji Oil</option><option>Bundle Pack</option></select></label>
          <label>Quantity<input name="Quantity" type="number" placeholder="Example: 2" min="1" /></label>
          <label class="full">Delivery Address<textarea name="Address" placeholder="Enter your complete delivery address"></textarea></label>
          <button class="btn btn-primary full" type="submit">Send Order Request</button>
          <a class="btn whatsapp full" href="https://wa.me/923000000000?text=Hello%20Amir%27s%20Kalonji%20Oil%2C%20I%20want%20to%20place%20an%20order." target="_blank" rel="noopener">Order on WhatsApp</a>
        </form>
      </div>
    </section>
  </main>

  <footer class="footer">
    <div class="container footer-grid">
      <div>
        <a href="#home" class="footer-brand">Amir's Kalonji Oil</a>
        <p>Premium filtered kalonji oil products with a debris-free purity focus.</p>
      </div>
      <div>
        <h4>Shop</h4>
        <a href="#products">100ml Bottle</a>
        <a href="#products">250ml Bottle</a>
        <a href="#products">500ml Bottle</a>
      </div>
      <div>
        <h4>Brand</h4>
        <a href="#purity">Purity Promise</a>
        <a href="#process">Process</a>
        <a href="#bundles">Bundles</a>
      </div>
      <div>
        <h4>Contact</h4>
        <a href="tel:+923000000000">+92 300 0000000</a>
        <a href="mailto:orders@amirskalonji.com">orders@amirskalonji.com</a>
        <a href="https://www.facebook.com/amirsinternational/" target="_blank" rel="noopener">Facebook</a>
      </div>
    </div>
    <div class="footer-bottom">© 2026 Amir's Kalonji Oil. All rights reserved.</div>
  </footer>
</body>
</html>
