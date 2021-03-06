// Compiler for PHP (aka KPHP)
// Copyright (c) 2020 LLC «V Kontakte»
// Distributed under the GPL v3 License, see LICENSE.notice.txt

#pragma once
#include <re2/re2.h>

#include "common/stats/provider.h"

#include "runtime/allocator.h"

void set_confdata_binlog_mask(const char *mask) noexcept;

void set_confdata_memory_limit(size_t memory_limit) noexcept;
void set_confdata_blacklist_pattern(std::unique_ptr<re2::RE2> &&key_blacklist_pattern) noexcept;
void add_confdata_predefined_wildcard(const char *wildcard) noexcept;
void clear_confdata_predefined_wildcards() noexcept;

void init_confdata_binlog_reader() noexcept;

void confdata_binlog_update_cron() noexcept;

void write_confdata_stats_to(stats_t *stats) noexcept;
