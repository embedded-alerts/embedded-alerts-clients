# Deprecated — historical snapshot only

> **This repository is retained and is not being deleted.**
> The canonical implementation, package identity, issues, releases, and all new work live in
> [`embedded-alerts/eal-clients`](https://github.com/embedded-alerts/eal-clients).

The two repositories began as unrelated bootstrap roots. Their histories have been reconciled
manually under the semantic salvage policy in `ORESoftware/my-ai/AGENTS.md`:

- earlier guidance migration: [`embedded-alerts/eal-clients#5`](https://github.com/embedded-alerts/eal-clients/pull/5);
- complete post-deprecation history replay: [`embedded-alerts/eal-clients#24`](https://github.com/embedded-alerts/eal-clients/pull/24);
- exact source snapshot audited by that replay: `a4f80c3ec90d745c9f0aaa0fbca35f75e873c903`.

All commits and source files remain available here for provenance. Do not add features, fixes,
client implementations, generated artifacts, schemas, releases, packages, or automation to
this repository. Open that work in `embedded-alerts/eal-clients`.

## Package and automation status

This deprecated repository is intentionally **not** a Zed package and must not publish or
resolve as a competing package identity. Its root `.zpkg.toml` and active GitHub Actions
workflows are removed by the deprecation PR after their still-valid behavior is replayed in
the canonical repository. The source snapshot remains in Git history and in the working tree
for auditability; only package/automation entry points are disabled.

Use the canonical dependency coordinate:

```toml
"embedded-alerts/eal-clients" = "^0.1.0"
```

Do not source the same dependency through both Zed and a Git submodule. Existing historical
links continue to resolve, but retained submodule references should be updated to
`embedded-alerts/eal-clients` according to the canonical monorepo composition policy.

## Migration ledger

- Linear: `DEN-1949`
- Cross-organization duplicate-repository campaign:
  [`agent-pontifex/.github#22`](https://github.com/agent-pontifex/.github/issues/22)
- Canonical repository: [`embedded-alerts/eal-clients`](https://github.com/embedded-alerts/eal-clients)
