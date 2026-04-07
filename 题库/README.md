# ACM / ICPC 题库整理结果

本目录从多个公开仓库抽取题目、题解、代码、 Markdown 文档与部分样例数据，按类别、知识点和难度段进行归类。

## 分类体系
- `基础入门`：偏入门、教材化、适合首次接触竞赛编程的内容。
- `OJ题解`：按在线评测站点沉淀的单题题解与代码。
- `比赛与套题`：训练赛、区域赛、邀请赛、Div 比赛和套题材料。
- `知识点讲解`：算法专题文档、概念讲解和配套代码。
- `模板与工具`：模板代码、测试工具、判题辅助与工程化材料。
- `其他资料`：难以直接归入以上类别但仍保留价值的资料。

## 难度与积分规则
- 每道题都有 `difficulty_score`，范围 `1-100`。
- 每道题答对后增加同值 `reward_points`。
- 当前默认规则：`reward_points = difficulty_score`。
- `difficulty_bucket` 按 20 分一档切分：`01-20`、`21-40`、`41-60`、`61-80`、`81-100`。

## 分类统计
- 基础入门: 472
- 数学: 113
- 图论: 61
- 数据结构: 59
- 模板与工具: 36
- 其他资料: 32
- 动态规划: 22
- 字符串: 22
- 比赛与套题: 16
- 计算几何: 14
- 搜索回溯: 12
- 知识点讲解: 2

## 难度段统计
- 01-20: 472
- 21-40: 45
- 41-60: 281
- 61-80: 63

## 使用建议
- 插件浏览题库时优先读取 `catalog.json`，按类别、知识点、难度和积分展示。
- 诊断题可优先从 `基础入门`、`OJ题解` 中抽取；训练题可逐步扩展到 `比赛与套题` 与 `知识点讲解`。

## 数据来源
- ACMcode: https://github.com/maemual/ACMcode.git
- HEEKDragonOne-ACM: https://github.com/HEEKDragonOne/ACM.git
- OI-wiki: https://github.com/OI-wiki/OI-wiki.git
- fshp971-ACM-ICPC: https://github.com/fshp971/ACM-ICPC.git
- BytesClub-ICPC-Preparation: https://github.com/BytesClub/ICPC-Preparation.git
- KHvic-uva-online-judge: https://github.com/KHvic/uva-online-judge.git
- NAU-ACM-ICPC-Question-Solving: https://github.com/NAU-ACM/ICPC-Question-Solving.git
- peneksglazami-acm-icpc-training: https://github.com/peneksglazami/acm-icpc-training.git
- BedirT-ACM-ICPC-Preparation: https://github.com/BedirT/ACM-ICPC-Preparation.git

## 说明
- 保留了题面、题解代码、Markdown 文档、部分样例数据和必要图片。
- 排除了 `.git`、可执行文件、压缩包和明显的编译产物。
- `catalog.json` 为插件接入使用的统一索引，包含类别、难度分、难度段与积分字段。
