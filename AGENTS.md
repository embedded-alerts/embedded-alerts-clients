# AGENTS.md

Owner: `embedded-alerts`  
Tracking: `DEN-1949`

This repository is a retained historical snapshot. It is not a development target, package
source, release source, or automation target. The canonical repository and Zed package are
[`embedded-alerts/eal-clients`](https://github.com/embedded-alerts/eal-clients).

Follow the semantic salvage and repository-safety rules in
[`ORESoftware/my-ai/AGENTS.md`](https://github.com/ORESoftware/my-ai/blob/main/AGENTS.md).
Do not add new implementation work here. When a genuinely unique historical change is found:

1. classify it against current `eal-clients` as already landed, still needed, obsolete, or
   needing translation;
2. manually replay only the still-needed behavior in a fresh canonical PR, preserving this
   repository's immutable source commit SHA;
3. validate and merge the canonical PR first;
4. update this repository only to strengthen deprecation or provenance records.

Never revive the `embedded-alerts-clients` Zed package identity, publication workflow, or
active client-development workflows. Never delete or rewrite this repository's history.
