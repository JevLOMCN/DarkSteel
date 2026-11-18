// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 62

// OodleDeleteVirtual<oo2::IncrementalMatchFinder> @ 14f3a3400

void __cdecl oo2::OodleDeleteVirtual<oo2::IncrementalMatchFinder>(IncrementalMatchFinder *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014f3a3418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// destruct<oo2::LRM_*> @ 14f3a3430

LRM ** __cdecl oo2::destruct<oo2::LRM_*>(LRM **param_1)

{
  return param_1;
}

// destruct<oo2::LRM_*> @ 14f3a3440

LRM ** __cdecl oo2::destruct<oo2::LRM_*>(LRM **param_1,ulong64 param_2)

{
  return param_1;
}

// destruct_virtual<oo2::IncrementalMatchFinder> @ 14f3a3460

IncrementalMatchFinder * __cdecl
oo2::destruct_virtual<oo2::IncrementalMatchFinder>(IncrementalMatchFinder *param_1)

{
  (**(code **)*param_1)(param_1,0);
  return param_1;
}

// BlockParseJob @ 14f3a3480

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

BlockParseJob * __thiscall oo2::BlockParseJob::BlockParseJob(BlockParseJob *this)

{
  (this->job).handle = 0;
  rrMemSetZero(this,0x60);
  return this;
}

// CreateMatchFinderJob @ 14f3a34c0

CreateMatchFinderJob * __thiscall
oo2::CreateMatchFinderJob::CreateMatchFinderJob(CreateMatchFinderJob *this)

{
  *(undefined8 *)&(this->lrmset_mem).lrms = 0;
  *(undefined8 *)&(this->lrmset_mem).lrms.field_0x8 = 0;
  *(undefined8 *)&(this->lrmset_mem).lrms.field_0x10 = 0;
  (this->job).handle = 0;
  rrMemSetZero(this,0x80);
  return this;
}

// LRMSet @ 14f3a3510

LRMSet * __thiscall oo2::LRMSet::LRMSet(LRMSet *this)

{
  *(undefined8 *)&this->lrms = 0;
  *(undefined8 *)&(this->lrms).field_0x8 = 0;
  *(undefined8 *)&(this->lrms).field_0x10 = 0;
  return this;
}

// OodleJob @ 14f3a3530

OodleJob * __thiscall oo2::OodleJob::OodleJob(OodleJob *this)

{
  this->handle = 0;
  return this;
}

// newlz_encoder_scratch @ 14f3a3550

newlz_encoder_scratch * __thiscall
oo2::newlz_encoder_scratch::newlz_encoder_scratch(newlz_encoder_scratch *this)

{
  this->arena = (rrArenaAllocator *)0x0;
  (this->newlz_arrays_space).m_ptr = (void *)0x0;
  (this->newlz_arrays_space).m_size = 0;
  (this->newlz_arrays_space).m_capacity = 0;
  (this->newlz_arrays_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzf_arrays_space).m_ptr = (void *)0x0;
  (this->newlzf_arrays_space).m_size = 0;
  (this->newlzf_arrays_space).m_capacity = 0;
  (this->newlzf_arrays_space).m_arena = (rrArenaAllocator *)0x0;
  (this->literals_space).m_ptr = (void *)0x0;
  (this->literals_space).m_size = 0;
  (this->literals_space).m_capacity = 0;
  (this->literals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->parsevec_space).m_ptr = (void *)0x0;
  (this->parsevec_space).m_size = 0;
  (this->parsevec_space).m_capacity = 0;
  (this->parsevec_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_parsevec_space).m_ptr = (void *)0x0;
  (this->newlzhc_parsevec_space).m_size = 0;
  (this->newlzhc_parsevec_space).m_capacity = 0;
  (this->newlzhc_parsevec_space).m_arena = (rrArenaAllocator *)0x0;
  (this->matches_space).m_ptr = (void *)0x0;
  (this->matches_space).m_size = 0;
  (this->matches_space).m_capacity = 0;
  (this->matches_space).m_arena = (rrArenaAllocator *)0x0;
  (this->arrivals_space).m_ptr = (void *)0x0;
  (this->arrivals_space).m_size = 0;
  (this->arrivals_space).m_capacity = 0;
  (this->arrivals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->last_tll_len_space).m_ptr = (void *)0x0;
  (this->last_tll_len_space).m_size = 0;
  (this->last_tll_len_space).m_capacity = 0;
  (this->last_tll_len_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_arrivals_space).m_ptr = (void *)0x0;
  (this->newlzhc_arrivals_space).m_size = 0;
  (this->newlzhc_arrivals_space).m_capacity = 0;
  (this->newlzhc_arrivals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->comp2_space).m_ptr = (void *)0x0;
  (this->comp2_space).m_size = 0;
  (this->comp2_space).m_capacity = 0;
  (this->comp2_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_passinfo_space).m_ptr = (void *)0x0;
  (this->newlzhc_passinfo_space).m_size = 0;
  (this->newlzhc_passinfo_space).m_capacity = 0;
  (this->newlzhc_passinfo_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_codecosts_space).m_ptr = (void *)0x0;
  (this->newlzhc_codecosts_space).m_size = 0;
  (this->newlzhc_codecosts_space).m_capacity = 0;
  (this->newlzhc_codecosts_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_last_tll_len_space).m_ptr = (void *)0x0;
  (this->newlzhc_last_tll_len_space).m_size = 0;
  (this->newlzhc_last_tll_len_space).m_capacity = 0;
  (this->newlzhc_last_tll_len_space).m_arena = (rrArenaAllocator *)0x0;
  this->match_pairs = (UnpackedMatchPair *)0x0;
  return this;
}

// newlz_scratchblock @ 14f3a36b0

newlz_scratchblock * __thiscall
oo2::newlz_scratchblock::newlz_scratchblock(newlz_scratchblock *this)

{
  this->m_ptr = (void *)0x0;
  this->m_size = 0;
  this->m_capacity = 0;
  this->m_arena = (rrArenaAllocator *)0x0;
  return this;
}

// newlz_vtable @ 14f3a36e0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

newlz_vtable * __thiscall oo2::newlz_vtable::newlz_vtable(newlz_vtable *this)

{
  (this->carried_encoder_state).m_ptr = (void *)0x0;
  (this->carried_encoder_state).m_size = 0;
  (this->carried_encoder_state).m_capacity = 0;
  (this->carried_encoder_state).m_arena = (rrArenaAllocator *)0x0;
  rrMemSetZero(this,0xa8);
  this->carried_encoder_state_chunktype = -1;
  return this;
}

// ~BlockParseJob @ 14f3a3740

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __thiscall oo2::BlockParseJob::~BlockParseJob(BlockParseJob *this)

{
  code *pcVar1;
  int iVar2;
  
  if ((this->job).handle != 0) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlejob.h",0x9e,
                               "oo2::OodleJob::~OodleJob","handle == 0");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~CreateMatchFinderJob @ 14f3a37a0

void __thiscall oo2::CreateMatchFinderJob::~CreateMatchFinderJob(CreateMatchFinderJob *this)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  
  if ((this->job).handle != 0) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlejob.h",0x9e,
                               "oo2::OodleJob::~OodleJob","handle == 0");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)&(this->lrmset_mem).lrms.field_0x10 = 0;
  pvVar1 = *(void **)&(this->lrmset_mem).lrms;
  if (pvVar1 != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  *(undefined8 *)&(this->lrmset_mem).lrms = 0;
  *(undefined8 *)&(this->lrmset_mem).lrms.field_0x8 = 0;
  return;
}

// ~LRMSet @ 14f3a3820

void __thiscall oo2::LRMSet::~LRMSet(LRMSet *this)

{
  *(undefined8 *)&(this->lrms).field_0x10 = 0;
  if (*(void **)&this->lrms != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&this->lrms);
  }
  *(undefined8 *)&this->lrms = 0;
  *(undefined8 *)&(this->lrms).field_0x8 = 0;
  return;
}

// ~OodleJob @ 14f3a3880

void __thiscall oo2::OodleJob::~OodleJob(OodleJob *this)

{
  code *pcVar1;
  int iVar2;
  
  if (this->handle != 0) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlejob.h",0x9e,
                               "oo2::OodleJob::~OodleJob","handle == 0");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~newlz_encoder_scratch @ 14f3a38e0

void __thiscall oo2::newlz_encoder_scratch::~newlz_encoder_scratch(newlz_encoder_scratch *this)

{
  void *pvVar1;
  rrArenaAllocator *prVar2;
  
  pvVar1 = (this->newlzhc_last_tll_len_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzhc_last_tll_len_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzhc_last_tll_len_space).m_capacity);
    }
  }
  (this->newlzhc_last_tll_len_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_last_tll_len_space).m_ptr = (void *)0x0;
  (this->newlzhc_last_tll_len_space).m_size = 0;
  (this->newlzhc_last_tll_len_space).m_capacity = 0;
  pvVar1 = (this->newlzhc_codecosts_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzhc_codecosts_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzhc_codecosts_space).m_capacity);
    }
  }
  (this->newlzhc_codecosts_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_codecosts_space).m_ptr = (void *)0x0;
  (this->newlzhc_codecosts_space).m_size = 0;
  (this->newlzhc_codecosts_space).m_capacity = 0;
  pvVar1 = (this->newlzhc_passinfo_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzhc_passinfo_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzhc_passinfo_space).m_capacity);
    }
  }
  (this->newlzhc_passinfo_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_passinfo_space).m_ptr = (void *)0x0;
  (this->newlzhc_passinfo_space).m_size = 0;
  (this->newlzhc_passinfo_space).m_capacity = 0;
  pvVar1 = (this->comp2_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->comp2_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->comp2_space).m_capacity);
    }
  }
  (this->comp2_space).m_arena = (rrArenaAllocator *)0x0;
  (this->comp2_space).m_ptr = (void *)0x0;
  (this->comp2_space).m_size = 0;
  (this->comp2_space).m_capacity = 0;
  pvVar1 = (this->newlzhc_arrivals_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzhc_arrivals_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzhc_arrivals_space).m_capacity);
    }
  }
  (this->newlzhc_arrivals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_arrivals_space).m_ptr = (void *)0x0;
  (this->newlzhc_arrivals_space).m_size = 0;
  (this->newlzhc_arrivals_space).m_capacity = 0;
  pvVar1 = (this->last_tll_len_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->last_tll_len_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->last_tll_len_space).m_capacity);
    }
  }
  (this->last_tll_len_space).m_arena = (rrArenaAllocator *)0x0;
  (this->last_tll_len_space).m_ptr = (void *)0x0;
  (this->last_tll_len_space).m_size = 0;
  (this->last_tll_len_space).m_capacity = 0;
  pvVar1 = (this->arrivals_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->arrivals_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->arrivals_space).m_capacity);
    }
  }
  (this->arrivals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->arrivals_space).m_ptr = (void *)0x0;
  (this->arrivals_space).m_size = 0;
  (this->arrivals_space).m_capacity = 0;
  pvVar1 = (this->matches_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->matches_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->matches_space).m_capacity);
    }
  }
  (this->matches_space).m_arena = (rrArenaAllocator *)0x0;
  (this->matches_space).m_ptr = (void *)0x0;
  (this->matches_space).m_size = 0;
  (this->matches_space).m_capacity = 0;
  pvVar1 = (this->newlzhc_parsevec_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzhc_parsevec_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzhc_parsevec_space).m_capacity);
    }
  }
  (this->newlzhc_parsevec_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzhc_parsevec_space).m_ptr = (void *)0x0;
  (this->newlzhc_parsevec_space).m_size = 0;
  (this->newlzhc_parsevec_space).m_capacity = 0;
  pvVar1 = (this->parsevec_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->parsevec_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->parsevec_space).m_capacity);
    }
  }
  (this->parsevec_space).m_arena = (rrArenaAllocator *)0x0;
  (this->parsevec_space).m_ptr = (void *)0x0;
  (this->parsevec_space).m_size = 0;
  (this->parsevec_space).m_capacity = 0;
  pvVar1 = (this->literals_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->literals_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->literals_space).m_capacity);
    }
  }
  (this->literals_space).m_arena = (rrArenaAllocator *)0x0;
  (this->literals_space).m_ptr = (void *)0x0;
  (this->literals_space).m_size = 0;
  (this->literals_space).m_capacity = 0;
  pvVar1 = (this->newlzf_arrays_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlzf_arrays_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlzf_arrays_space).m_capacity);
    }
  }
  (this->newlzf_arrays_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlzf_arrays_space).m_ptr = (void *)0x0;
  (this->newlzf_arrays_space).m_size = 0;
  (this->newlzf_arrays_space).m_capacity = 0;
  pvVar1 = (this->newlz_arrays_space).m_ptr;
  if (pvVar1 != (void *)0x0) {
    prVar2 = (this->newlz_arrays_space).m_arena;
    if (prVar2 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (prVar2->m_unorderedStart != 0) {
      rrArenaAllocator::Free(prVar2,pvVar1,(this->newlz_arrays_space).m_capacity);
    }
  }
  (this->newlz_arrays_space).m_arena = (rrArenaAllocator *)0x0;
  (this->newlz_arrays_space).m_ptr = (void *)0x0;
  (this->newlz_arrays_space).m_size = 0;
  (this->newlz_arrays_space).m_capacity = 0;
  return;
}

// ~newlz_scratchblock @ 14f3a3d20

void __thiscall oo2::newlz_scratchblock::~newlz_scratchblock(newlz_scratchblock *this)

{
  void *pvVar1;
  rrArenaAllocator *this_00;
  
  pvVar1 = this->m_ptr;
  if (pvVar1 != (void *)0x0) {
    this_00 = this->m_arena;
    if (this_00 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (this_00->m_unorderedStart != 0) {
      rrArenaAllocator::Free(this_00,pvVar1,this->m_capacity);
    }
  }
  this->m_arena = (rrArenaAllocator *)0x0;
  this->m_ptr = (void *)0x0;
  this->m_size = 0;
  this->m_capacity = 0;
  return;
}

// ~newlz_vtable @ 14f3a3da0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __thiscall oo2::newlz_vtable::~newlz_vtable(newlz_vtable *this)

{
  void *pvVar1;
  rrArenaAllocator *this_00;
  
  if (this->m_free_arena != (rrArenaAllocator *)0x0) {
    rrArenaAllocator::Free(this->m_free_arena,this->m_free_pointer,this->m_free_size);
  }
  if (this->fp_free_matcher != (_func___cdecl_void_void_ptr *)0x0) {
    (*this->fp_free_matcher)(this->matcher);
    this->fp_free_matcher = (_func___cdecl_void_void_ptr *)0x0;
  }
  pvVar1 = (this->carried_encoder_state).m_ptr;
  if (pvVar1 != (void *)0x0) {
    this_00 = (this->carried_encoder_state).m_arena;
    if (this_00 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (this_00->m_unorderedStart != 0) {
      rrArenaAllocator::Free(this_00,pvVar1,(this->carried_encoder_state).m_capacity);
    }
  }
  (this->carried_encoder_state).m_arena = (rrArenaAllocator *)0x0;
  (this->carried_encoder_state).m_ptr = (void *)0x0;
  (this->carried_encoder_state).m_size = 0;
  (this->carried_encoder_state).m_capacity = 0;
  return;
}

// LZBlockHeader_IsReset @ 14f3a3e60

int __cdecl oo2::LZBlockHeader_IsReset(long64 param_1,OodleLZ_CompressOptions *param_2)

{
  if (param_1 == 0) {
    return 1;
  }
  if (((param_1 & 0x3ffffU) == 0) && (param_2->seekChunkReset != 0)) {
    return (int)((param_1 & (longlong)param_2->seekChunkLen - 1U) == 0);
  }
  return 0;
}

// OodleFree @ 14f3a3ea0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3a3ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleJob_Wait @ 14f3a3eb0

void __cdecl oo2::OodleJob_Wait(ulong64 param_1,void *param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3a3eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_WaitJob)(param_1,param_2);
    return;
  }
  return;
}

// OodleMalloc @ 14f3a3ee0

void * __cdecl oo2::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14f3a3f30

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// Oodle_IsJobSystemSet @ 14f3a3f70

bool __cdecl oo2::Oodle_IsJobSystemSet(void)

{
  return g_fp_OodleCore_Plugin_RunJob != OodleCore_Plugin_RunJob_Default;
}

// S32_checkA @ 14f3a3f90

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// ThreadProfiler_Pop @ 14f3a3fa0

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3a3fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3a3fc0

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3a3fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_void @ 14f3a3fe0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14f3a3ff0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// endU8 @ 14f3a4000

uchar * __thiscall oo2::newlz_scratchblock::endU8(newlz_scratchblock *this)

{
  return (uchar *)(this->m_size + (longlong)this->m_ptr);
}

// get_handle @ 14f3a4010

ulong64 __thiscall oo2::OodleJob::get_handle(OodleJob *this)

{
  return this->handle;
}

// newLZ_encode_block_vtable @ 14f3a4020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_block_vtable
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,LZQuantumHeader *param_9,
          float *param_10,rrArenaAllocator *param_11,UnpackedMatchPair *param_12)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  newlz_encoder_scratch *pnVar5;
  byte bVar6;
  int iVar7;
  long64 lVar8;
  size_t _Size;
  longlong lVar9;
  uchar *_Src;
  int iVar10;
  byte *_Dst;
  OodleSpeedFit *pOVar11;
  size_t _Size_00;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  float local_138;
  float local_134;
  uint local_130;
  float local_12c;
  uint local_128;
  newlz_vtable *local_120;
  int local_118;
  int local_114;
  rrArenaAllocator *local_110;
  size_t local_108;
  uchar *local_100;
  newlz_encoder_scratch *local_f8;
  OodleSpeedFit *local_f0;
  uchar *local_e8;
  uchar *local_e0;
  uchar *local_d8;
  uchar *local_d0;
  float *local_c8;
  OodleKrakenChunkDeadlines local_c0;
  ulonglong local_a0;
  
  fVar4 = __real_4e800000;
  fVar3 = __real_40400000;
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_c8 = param_10;
  local_110 = param_11;
  local_100 = param_7;
  local_114 = param_5;
  local_d0 = param_6;
  if (param_5 < 0x80) {
    lVar8 = (long64)(param_5 + 1);
  }
  else {
    local_128 = param_1->entropy_flags;
    local_118 = param_1->chunk_len;
    pOVar11 = param_1->speedfit;
    fVar13 = 0.0;
    fVar1 = param_1->lambda;
    local_e0 = param_4 + param_5;
    local_120 = param_1;
    local_f8 = param_2;
    local_f0 = pOVar11;
    local_e8 = param_3;
    local_d8 = param_4;
    if (param_4 < local_e0) {
      do {
        lVar9 = (longlong)param_4 - (longlong)local_d8;
        if (param_12 != (UnpackedMatchPair *)0x0) {
          param_2->match_pairs = param_12 + local_120->find_all_matches_num_pairs * lVar9;
        }
        iVar10 = (int)local_e0 - (int)param_4;
        if (local_118 <= iVar10) {
          iVar10 = local_118;
        }
        if ((longlong)local_100 - (longlong)param_6 < (longlong)(iVar10 + 3)) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0xdb,
                       "OODLE ERROR : newLZ_encode_block_vtable: not enough room for uncomp chunk.\n"
                      );
          }
          ooLogErrorPost();
          return (longlong)(local_114 + 1);
        }
        _Size_00 = (size_t)iVar10;
        fVar12 = (*pOVar11->memcpy)(_Size_00);
        fVar12 = fVar12 * fVar1 + (float)(longlong)_Size_00 + fVar3;
        (*pOVar11->deadlines_Kraken)(&local_c0,_Size_00);
        bVar6 = (byte)((uint)iVar10 >> 8);
        bVar2 = (byte)((uint)iVar10 >> 0x10);
        if (iVar10 < 0x20) {
          param_6[2] = (byte)iVar10;
          *param_6 = bVar2 | 0x80;
          param_6[1] = bVar6;
          memcpy(param_6 + 3,param_4,_Size_00);
          param_6 = param_6 + 3 + _Size_00;
          fVar13 = fVar13 + fVar12;
        }
        else {
          iVar7 = rrIsMemset(param_4,_Size_00);
          if (iVar7 == 0) {
            _Dst = param_6 + 3;
            local_130 = 0xffffffff;
            local_138 = 1.0737418e+09;
            local_108 = (*local_120->fp_encode_chunk)
                                  (local_120,param_2,local_e8,param_4,iVar10,_Dst,local_100,
                                   param_8 + lVar9,(int *)&local_130,&local_138,&local_c0);
            pnVar5 = local_f8;
            _Src = (uchar *)0x0;
            local_138 = local_138 + fVar3;
            local_134 = fVar4;
            _Size = _Size_00;
            if (local_120->try_huff_chunks != false) {
              local_134 = local_138;
              if (fVar12 <= local_138) {
                local_134 = fVar12;
              }
              _Src = (local_f8->newlzf_arrays_space).m_ptr;
              if (_Src == (uchar *)0x0) {
                newlz_scratchblock::extend
                          (&local_f8->literals_space,(longlong)((iVar10 >> 4) + 0x100 + iVar10),
                           local_110);
                lVar8 = (pnVar5->literals_space).m_size;
                _Src = (pnVar5->literals_space).m_ptr;
              }
              else {
                lVar8 = (local_f8->newlzf_arrays_space).m_size;
              }
              _Size = newLZ_put_array(_Src,_Src + lVar8,param_4,_Size_00,local_128,fVar1,local_f0,
                                      &local_134,local_c0.literals_only,local_110,local_120->level,
                                      (uint *)0x0);
              if (((longlong)_Size < 1) || ((longlong)_Size_00 <= (longlong)_Size)) {
                local_134 = fVar4;
              }
            }
            if (((fVar12 <= local_138) || (local_134 < local_138)) ||
               ((longlong)_Size_00 <= (longlong)local_108)) {
              if (fVar12 <= local_134) {
                local_130 = 0;
                memcpy(_Dst,param_4,_Size_00);
                fVar13 = fVar13 + fVar12;
                param_6[2] = (byte)iVar10;
                *param_6 = (byte)(((local_130 | 0x10) << 0x13) >> 0x10) | bVar2;
                param_6[1] = bVar6;
                _Size = _Size_00;
              }
              else {
                memcpy(param_6,_Src,_Size);
                fVar13 = fVar13 + local_134;
                _Dst = param_6;
              }
            }
            else {
              param_6[2] = (byte)local_108;
              *param_6 = (byte)(((local_130 | 0x10) << 0x13) >> 0x10) | (byte)(local_108 >> 0x10);
              param_6[1] = (byte)(local_108 >> 8);
              fVar13 = fVar13 + local_138;
              _Size = local_108;
            }
            param_6 = _Dst + _Size;
            pOVar11 = local_f0;
            param_2 = local_f8;
          }
          else {
            local_12c = 1.0737418e+09;
            lVar8 = newLZ_put_array_memset
                              (param_6,local_100,param_4,_Size_00,local_128,fVar1,pOVar11,&local_12c
                               ,local_110);
            fVar13 = fVar13 + local_12c;
            param_6 = param_6 + lVar8;
          }
        }
        param_4 = param_4 + _Size_00;
      } while (param_4 < local_e0);
    }
    lVar8 = (longlong)param_6 - (longlong)local_d0;
    *local_c8 = fVar13;
  }
  return lVar8;
}

// newlz_compress_block_parse @ 14f3a4580

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl oo2::newlz_compress_block_parse(void *param_1)

{
  uchar *puVar1;
  long64 lVar2;
  
  puVar1 = (uchar *)**(undefined8 **)((longlong)param_1 + 0x30);
  lVar2 = OodleLZ_GetCompressedBufferSizeNeeded
                    (**(OodleLZ_Compressor **)param_1,(longlong)*(int *)((longlong)param_1 + 0x48));
  lVar2 = newlz_compress_vtable_block_outer
                    (*(newlz_vtable **)param_1,*(newlz_encoder_scratch **)((longlong)param_1 + 8),
                     puVar1,puVar1 + lVar2,*(uchar **)((longlong)param_1 + 0x38),
                     *(long64 *)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48),
                     *(int *)((longlong)param_1 + 0x4c),*(uchar **)((longlong)param_1 + 0x20),
                     *(rrArenaAllocator **)((longlong)param_1 + 0x10),
                     *(UnpackedMatchPair **)((longlong)param_1 + 0x18));
  *(uchar **)((longlong)param_1 + 0x50) = puVar1 + lVar2;
  return;
}

// newlz_compress_create_match_finder @ 14f3a4610

void __cdecl oo2::newlz_compress_create_match_finder(void *param_1)

{
  ulong64 uVar1;
  undefined8 uVar2;
  LRMSet *pLVar3;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (*fp_ThreadProfiler_Push)("CreateMatchFinder",0);
  }
  pLVar3 = (LRMSet *)0x0;
  if ((*(longlong *)((longlong)param_1 + 0x30) != 0) &&
     (*(ulonglong *)((longlong)param_1 + 0x18) < *(ulonglong *)((longlong)param_1 + 0x20))) {
    pLVar3 = (LRMSet *)((longlong)param_1 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
    if (*(LRMCascade **)((longlong)param_1 + 0x38) == (LRMCascade *)0x0) {
      LRM_CascadeGetSet_Align
                (*(LRMCascade **)((longlong)param_1 + 0x30),pLVar3,
                 *(uchar **)((longlong)param_1 + 0x20),*(uchar **)param_1);
    }
    else {
      LRM_CascadeGetSet_Align_UpdateIncremental
                (*(LRMCascade **)((longlong)param_1 + 0x38),pLVar3,
                 *(uchar **)((longlong)param_1 + 0x20),*(uchar **)param_1);
    }
  }
  uVar2 = (**(code **)((longlong)param_1 + 0x68))
                    (*(undefined8 *)((longlong)param_1 + 0x20),
                     *(longlong *)((longlong)param_1 + 8) + *(longlong *)((longlong)param_1 + 0x28),
                     *(longlong *)((longlong)param_1 + 0x28),pLVar3,
                     *(undefined4 *)((longlong)param_1 + 0x58),
                     *(undefined8 *)((longlong)param_1 + 0x60),0);
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar1);
  }
  return;
}

// newlz_compress_vtable @ 14f3a4700

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newlz_compress_vtable
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,long64 param_4,uchar *param_5,
          LRMCascade *param_6,rrArenaAllocator *param_7)

{
  OodleLZ_CompressionLevel OVar1;
  OodleLZ_Jobify OVar2;
  OodleLZ_CompressOptions *pOVar3;
  ulong64 uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  IncrementalMatchFinder *pIVar9;
  long64 lVar10;
  uchar *puVar11;
  uchar *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  uchar *puVar16;
  uchar *puVar17;
  uchar *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  uchar *local_res10;
  uchar *local_res18;
  uchar *local_388;
  ulonglong local_378;
  uchar *local_360;
  LRMCascade *local_358;
  longlong local_350;
  uchar *local_348;
  newlz_encoder_scratch local_328;
  ulong64 local_178;
  undefined8 local_170;
  rrArenaAllocator *local_168;
  ulong64 local_160;
  ulong64 local_158;
  longlong local_148;
  long64 alStack_140 [3];
  longlong alStack_128 [7];
  OodleLZ_Jobify aOStack_f0 [2];
  longlong alStack_e8 [3];
  OodleJob aOStack_d0 [18];
  
  local_170 = 0xfffffffffffffffe;
  OVar1 = param_1->level;
  pOVar3 = param_1->pOptions;
  local_168 = param_7;
  uVar4 = param_7->m_cur;
  local_178 = param_7->m_unorderedStart;
  param_7->m_unorderedStart = uVar4;
  local_328.newlz_arrays_space.m_ptr = (void *)0x0;
  local_328.newlz_arrays_space.m_size = 0;
  local_328.newlz_arrays_space.m_capacity = 0;
  local_328.newlz_arrays_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzf_arrays_space.m_ptr = (void *)0x0;
  local_328.newlzf_arrays_space.m_size = 0;
  local_328.newlzf_arrays_space.m_capacity = 0;
  local_328.newlzf_arrays_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.literals_space.m_ptr = (void *)0x0;
  local_328.literals_space.m_size = 0;
  local_328.literals_space.m_capacity = 0;
  local_328.literals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.parsevec_space.m_ptr = (void *)0x0;
  local_328.parsevec_space.m_size = 0;
  local_328.parsevec_space.m_capacity = 0;
  local_328.parsevec_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_parsevec_space.m_ptr = (void *)0x0;
  local_328.newlzhc_parsevec_space.m_size = 0;
  local_328.newlzhc_parsevec_space.m_capacity = 0;
  local_328.newlzhc_parsevec_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.matches_space.m_ptr = (UnpackedMatchPair *)0x0;
  local_328.matches_space.m_size = 0;
  local_328.matches_space.m_capacity = 0;
  local_328.matches_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.arrivals_space.m_ptr = (void *)0x0;
  local_328.arrivals_space.m_size = 0;
  local_328.arrivals_space.m_capacity = 0;
  local_328.arrivals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.last_tll_len_space.m_ptr = (void *)0x0;
  local_328.last_tll_len_space.m_size = 0;
  local_328.last_tll_len_space.m_capacity = 0;
  local_328.last_tll_len_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_arrivals_space.m_ptr = (void *)0x0;
  local_328.newlzhc_arrivals_space.m_size = 0;
  local_328.newlzhc_arrivals_space.m_capacity = 0;
  local_328.newlzhc_arrivals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.comp2_space.m_ptr = (void *)0x0;
  local_328.comp2_space.m_size = 0;
  local_328.comp2_space.m_capacity = 0;
  local_328.comp2_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_passinfo_space.m_ptr = (void *)0x0;
  local_328.newlzhc_passinfo_space.m_size = 0;
  local_328.newlzhc_passinfo_space.m_capacity = 0;
  local_328.newlzhc_passinfo_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_codecosts_space.m_ptr = (void *)0x0;
  local_328.newlzhc_codecosts_space.m_size = 0;
  local_328.newlzhc_codecosts_space.m_capacity = 0;
  local_328.newlzhc_codecosts_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_last_tll_len_space.m_ptr = (void *)0x0;
  local_328.newlzhc_last_tll_len_space.m_size = 0;
  local_328.newlzhc_last_tll_len_space.m_capacity = 0;
  local_328.newlzhc_last_tll_len_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.match_pairs = (UnpackedMatchPair *)0x0;
  local_328.arena = param_7;
  puVar12 = param_2;
  if (param_5 != (uchar *)0x0) {
    puVar12 = param_5;
  }
  local_160 = uVar4;
  local_158 = local_178;
  if (param_1->fp_create_match_finder ==
      (_func___cdecl_IncrementalMatchFinder_ptr_uchar_ptr_long64_long64_LRMSet_ptr_OodleLZ_Jobify_void_ptr_rrArenaAllocator_ptr
       *)0x0) {
    local_350 = newlz_compress_vtable_sub
                          (param_1,&local_328,param_2,param_3,param_4,puVar12,puVar12,
                           (IncrementalMatchFinder *)0x0,param_7);
  }
  else {
    if (((0x40000 < param_4) || (param_6 != (LRMCascade *)0x0)) || (puVar12 != param_2)) {
      puVar16 = param_2 + (param_4 - (longlong)puVar12);
      puVar17 = (uchar *)(longlong)pOVar3->maxLocalDictionarySize;
      local_360 = puVar17;
      if (((param_1->wants_dic_limit_splits == false) && (param_6 == (LRMCascade *)0x0)) &&
         (local_360 = (uchar *)0x4000000, 0x4000000 < (longlong)puVar17)) {
        local_360 = puVar17;
      }
      _eh_vector_constructor_iterator_
                (&local_148,0x80,2,CreateMatchFinderJob::CreateMatchFinderJob,
                 CreateMatchFinderJob::~CreateMatchFinderJob);
      uVar20 = 0;
      local_378 = 0;
      OVar2 = pOVar3->jobify;
      uVar19 = (ulonglong)(OVar2 == OodleLZ_Jobify_Aggressive) + 1;
      local_358 = (LRMCascade *)0x0;
      if (pOVar3->seekChunkReset == 0) {
        if ((longlong)local_360 < (longlong)puVar16) {
          local_388 = (uchar *)((longlong)local_360 / 2);
          if (((pOVar3->makeLongRangeMatcher != 0) && (param_6 == (LRMCascade *)0x0)) &&
             (4 < (int)OVar1)) {
            param_6 = LRM_CreateCascadeIncremental
                                (puVar12,(long64)(puVar16 + -1 + (longlong)local_388 +
                                                 (-(longlong)local_360 -
                                                 (longlong)(puVar16 + -1 + (longlong)local_388) %
                                                 (longlong)local_388)),g_OodleLZ_LW_LRM_step,
                                 g_OodleLZ_LW_LRM_jumpbits,0,(long64)local_388,
                                 g_OodleLZ_LW_LRM_hashLength);
            local_358 = param_6;
          }
        }
        else {
          param_6 = (LRMCascade *)0x0;
          local_388 = puVar16;
        }
      }
      else {
        local_388 = (uchar *)(longlong)pOVar3->seekChunkLen;
      }
      local_350 = 0;
      puVar16 = (uchar *)param_4;
      local_res10 = param_2;
      local_res18 = param_3;
      local_348 = puVar12;
      do {
        if (0 < (longlong)puVar16) {
          do {
            if (uVar19 <= (1 - local_378) + (uVar20 - 1)) break;
            puVar18 = local_res10 + -(longlong)puVar12;
            puVar17 = local_388;
            if ((longlong)puVar16 < (longlong)local_388) {
              puVar17 = puVar16;
            }
            if (pOVar3->seekChunkReset == 0) {
              puVar11 = puVar17;
              if ((puVar18 == (uchar *)0x0) &&
                 (puVar11 = local_360, (longlong)puVar16 < (longlong)local_360)) {
                puVar11 = puVar16;
              }
              puVar17 = puVar16;
              if ((longlong)
                  ((longlong)local_388 * 5 +
                  (ulonglong)((uint)((longlong)local_388 * 5 >> 0x3f) & 3)) >> 2 < (longlong)puVar16
                 ) {
                puVar17 = puVar11;
              }
              if ((longlong)puVar17 < (longlong)local_360) {
                puVar11 = local_388;
                if ((longlong)puVar18 < (longlong)local_388) {
                  puVar11 = puVar18;
                }
                puVar18 = local_360 + -(longlong)puVar17;
                if ((longlong)puVar11 < (longlong)(local_360 + -(longlong)puVar17)) {
                  puVar18 = puVar11;
                }
              }
              else {
                puVar18 = (uchar *)0x0;
              }
              iVar8 = pOVar3->dictionarySize;
              if ((0 < iVar8) && ((longlong)iVar8 <= (longlong)puVar18)) {
                puVar18 = (uchar *)(longlong)iVar8;
              }
            }
            else {
              puVar18 = (uchar *)0x0;
              local_348 = local_res10;
            }
            uVar13 = uVar20 % uVar19;
            (&local_148)[uVar13 * 0x10] = (longlong)local_res10;
            alStack_140[uVar13 * 0x10] = (long64)puVar17;
            alStack_140[uVar13 * 0x10 + 1] = (long64)local_348;
            alStack_140[uVar13 * 0x10 + 2] = (long64)puVar12;
            alStack_128[uVar13 * 0x10] = (longlong)local_res10 - (longlong)puVar18;
            alStack_128[uVar13 * 0x10 + 1] = (longlong)puVar18;
            alStack_128[uVar13 * 0x10 + 2] = (longlong)param_6;
            alStack_128[uVar13 * 0x10 + 3] = (longlong)local_358;
            aOStack_f0[uVar13 * 0x20] = pOVar3->jobify;
            alStack_e8[uVar13 * 0x10] = (longlong)pOVar3->jobifyUserPtr;
            alStack_e8[uVar13 * 0x10 + 1] = (longlong)param_1->fp_create_match_finder;
            if (((param_4 < 1) || ((longlong)puVar18 < 0)) &&
               (iVar8 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",
                                           0x564,"oo2::newlz_compress_vtable",
                                           "wholeRawLen > 0 && subjob->dictionary_inset >= 0"),
               iVar8 != 0)) {
              pcVar5 = (code *)swi(3);
              lVar10 = (*pcVar5)();
              return lVar10;
            }
            if ((uVar20 == 0) ||
               (uVar14 = (uVar20 - 1) % uVar19, &local_148 + uVar14 * 0x10 == (longlong *)0x0)) {
              uVar15 = 0;
            }
            else {
              uVar15 = aOStack_d0[uVar14 * 0x10].handle;
            }
            if ((OVar2 == OodleLZ_Jobify_Aggressive) && (uVar20 != 0)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            OodleJob::run(aOStack_d0 + uVar13 * 0x10,newlz_compress_create_match_finder,
                          &local_148 + uVar13 * 0x10,pOVar3->jobifyUserPtr,bVar7,uVar15,0);
            puVar16 = puVar16 + -(longlong)puVar17;
            local_res10 = local_res10 + (longlong)puVar17;
            uVar20 = uVar20 + 1;
          } while (0 < (longlong)puVar16);
        }
        if (local_378 == uVar20) goto LAB_14f3a4e3a;
        uVar13 = local_378 % uVar19;
        if (aOStack_d0[uVar13 * 0x10].handle != 0) {
          (*g_fp_OodleCore_Plugin_WaitJob)(aOStack_d0[uVar13 * 0x10].handle,pOVar3->jobifyUserPtr);
          aOStack_d0[uVar13 * 0x10].handle = 0;
        }
        lVar10 = newlz_compress_vtable_sub
                           (param_1,&local_328,(uchar *)(&local_148)[uVar13 * 0x10],local_res18,
                            alStack_140[uVar13 * 0x10],(uchar *)alStack_128[uVar13 * 0x10],
                            (uchar *)alStack_140[uVar13 * 0x10 + 1],
                            (IncrementalMatchFinder *)alStack_e8[uVar13 * 0x10 + 2],param_7);
        puVar21 = (undefined8 *)alStack_e8[uVar13 * 0x10 + 2];
        if (puVar21 != (undefined8 *)0x0) {
          if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
            uVar15 = 0xffffffffffffffff;
          }
          else {
            uVar15 = (*fp_ThreadProfiler_Push)("DeleteMatchFinder",0);
            puVar21 = (undefined8 *)alStack_e8[uVar13 * 0x10 + 2];
          }
          (**(code **)*puVar21)(puVar21);
          (*g_fp_OodleCore_Plugin_Free)(puVar21);
          if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
            (*fp_ThreadProfiler_Pop)(uVar15);
          }
        }
        local_378 = local_378 + 1;
        local_res18 = local_res18 + lVar10;
        local_350 = local_350 + lVar10;
      } while( true );
    }
    pIVar9 = (*param_1->fp_create_match_finder)
                       (param_2,param_4,0,(LRMSet *)0x0,param_1->pOptions->jobify,
                        param_1->pOptions->jobifyUserPtr,param_7);
    newlz_scratchblock::extend
              (&local_328.matches_space,param_1->find_all_matches_num_pairs * param_4 * 8,param_7);
    pvVar6 = local_328.matches_space.m_ptr;
    if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
      uVar15 = 0xffffffffffffffff;
    }
    else {
      uVar15 = (*fp_ThreadProfiler_Push)("mf_SimpleBlock",0);
    }
    (**(code **)((longlong)*pIVar9 + 0x10))
              (pIVar9,param_4 & 0xffffffff,pvVar6,param_1->find_all_matches_num_pairs);
    if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
      (*fp_ThreadProfiler_Pop)(uVar15);
    }
    lVar10 = OodleLZ_GetCompressedBufferSizeNeeded(param_1->compressor,param_4);
    local_350 = newlz_compress_vtable_block_outer
                          (param_1,&local_328,param_3,param_3 + lVar10,param_2,0,(int)param_4,1,
                           param_2,param_7,pvVar6);
    (**(code **)((longlong)*pIVar9 + 8))(pIVar9);
  }
LAB_14f3a4e75:
  if (local_328.newlzhc_last_tll_len_space.m_ptr != (void *)0x0) {
    if (local_328.newlzhc_last_tll_len_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzhc_last_tll_len_space.m_ptr);
    }
    else if ((local_328.newlzhc_last_tll_len_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzhc_last_tll_len_space.m_arena,
                 local_328.newlzhc_last_tll_len_space.m_ptr,
                 local_328.newlzhc_last_tll_len_space.m_capacity);
    }
  }
  local_328.newlzhc_last_tll_len_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_last_tll_len_space.m_ptr = (void *)0x0;
  local_328.newlzhc_last_tll_len_space.m_size = 0;
  local_328.newlzhc_last_tll_len_space.m_capacity = 0;
  if (local_328.newlzhc_codecosts_space.m_ptr != (void *)0x0) {
    if (local_328.newlzhc_codecosts_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzhc_codecosts_space.m_ptr);
    }
    else if ((local_328.newlzhc_codecosts_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzhc_codecosts_space.m_arena,local_328.newlzhc_codecosts_space.m_ptr,
                 local_328.newlzhc_codecosts_space.m_capacity);
    }
  }
  local_328.newlzhc_codecosts_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_codecosts_space.m_ptr = (void *)0x0;
  local_328.newlzhc_codecosts_space.m_size = 0;
  local_328.newlzhc_codecosts_space.m_capacity = 0;
  if (local_328.newlzhc_passinfo_space.m_ptr != (void *)0x0) {
    if (local_328.newlzhc_passinfo_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzhc_passinfo_space.m_ptr);
    }
    else if ((local_328.newlzhc_passinfo_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzhc_passinfo_space.m_arena,local_328.newlzhc_passinfo_space.m_ptr,
                 local_328.newlzhc_passinfo_space.m_capacity);
    }
  }
  local_328.newlzhc_passinfo_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_passinfo_space.m_ptr = (void *)0x0;
  local_328.newlzhc_passinfo_space.m_size = 0;
  local_328.newlzhc_passinfo_space.m_capacity = 0;
  if (local_328.comp2_space.m_ptr != (void *)0x0) {
    if (local_328.comp2_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.comp2_space.m_ptr);
    }
    else if ((local_328.comp2_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.comp2_space.m_arena,local_328.comp2_space.m_ptr,
                 local_328.comp2_space.m_capacity);
    }
  }
  local_328.comp2_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.comp2_space.m_ptr = (void *)0x0;
  local_328.comp2_space.m_size = 0;
  local_328.comp2_space.m_capacity = 0;
  if (local_328.newlzhc_arrivals_space.m_ptr != (void *)0x0) {
    if (local_328.newlzhc_arrivals_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzhc_arrivals_space.m_ptr);
    }
    else if ((local_328.newlzhc_arrivals_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzhc_arrivals_space.m_arena,local_328.newlzhc_arrivals_space.m_ptr,
                 local_328.newlzhc_arrivals_space.m_capacity);
    }
  }
  local_328.newlzhc_arrivals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_arrivals_space.m_ptr = (void *)0x0;
  local_328.newlzhc_arrivals_space.m_size = 0;
  local_328.newlzhc_arrivals_space.m_capacity = 0;
  if (local_328.last_tll_len_space.m_ptr != (void *)0x0) {
    if (local_328.last_tll_len_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.last_tll_len_space.m_ptr);
    }
    else if ((local_328.last_tll_len_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.last_tll_len_space.m_arena,local_328.last_tll_len_space.m_ptr,
                 local_328.last_tll_len_space.m_capacity);
    }
  }
  local_328.last_tll_len_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.last_tll_len_space.m_ptr = (void *)0x0;
  local_328.last_tll_len_space.m_size = 0;
  local_328.last_tll_len_space.m_capacity = 0;
  if (local_328.arrivals_space.m_ptr != (void *)0x0) {
    if (local_328.arrivals_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.arrivals_space.m_ptr);
    }
    else if ((local_328.arrivals_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.arrivals_space.m_arena,local_328.arrivals_space.m_ptr,
                 local_328.arrivals_space.m_capacity);
    }
  }
  local_328.arrivals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.arrivals_space.m_ptr = (void *)0x0;
  local_328.arrivals_space.m_size = 0;
  local_328.arrivals_space.m_capacity = 0;
  if (local_328.matches_space.m_ptr != (UnpackedMatchPair *)0x0) {
    if (local_328.matches_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.matches_space.m_ptr);
    }
    else if ((local_328.matches_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.matches_space.m_arena,local_328.matches_space.m_ptr,
                 local_328.matches_space.m_capacity);
    }
  }
  local_328.matches_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.matches_space.m_ptr = (void *)0x0;
  local_328.matches_space.m_size = 0;
  local_328.matches_space.m_capacity = 0;
  if (local_328.newlzhc_parsevec_space.m_ptr != (void *)0x0) {
    if (local_328.newlzhc_parsevec_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzhc_parsevec_space.m_ptr);
    }
    else if ((local_328.newlzhc_parsevec_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzhc_parsevec_space.m_arena,local_328.newlzhc_parsevec_space.m_ptr,
                 local_328.newlzhc_parsevec_space.m_capacity);
    }
  }
  local_328.newlzhc_parsevec_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzhc_parsevec_space.m_ptr = (void *)0x0;
  local_328.newlzhc_parsevec_space.m_size = 0;
  local_328.newlzhc_parsevec_space.m_capacity = 0;
  if (local_328.parsevec_space.m_ptr != (void *)0x0) {
    if (local_328.parsevec_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.parsevec_space.m_ptr);
    }
    else if ((local_328.parsevec_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.parsevec_space.m_arena,local_328.parsevec_space.m_ptr,
                 local_328.parsevec_space.m_capacity);
    }
  }
  local_328.parsevec_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.parsevec_space.m_ptr = (void *)0x0;
  local_328.parsevec_space.m_size = 0;
  local_328.parsevec_space.m_capacity = 0;
  if (local_328.literals_space.m_ptr != (void *)0x0) {
    if (local_328.literals_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.literals_space.m_ptr);
    }
    else if ((local_328.literals_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.literals_space.m_arena,local_328.literals_space.m_ptr,
                 local_328.literals_space.m_capacity);
    }
  }
  local_328.literals_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.literals_space.m_ptr = (void *)0x0;
  local_328.literals_space.m_size = 0;
  local_328.literals_space.m_capacity = 0;
  if (local_328.newlzf_arrays_space.m_ptr != (void *)0x0) {
    if (local_328.newlzf_arrays_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlzf_arrays_space.m_ptr);
    }
    else if ((local_328.newlzf_arrays_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlzf_arrays_space.m_arena,local_328.newlzf_arrays_space.m_ptr,
                 local_328.newlzf_arrays_space.m_capacity);
    }
  }
  local_328.newlzf_arrays_space.m_arena = (rrArenaAllocator *)0x0;
  local_328.newlzf_arrays_space.m_ptr = (void *)0x0;
  local_328.newlzf_arrays_space.m_size = 0;
  local_328.newlzf_arrays_space.m_capacity = 0;
  if (local_328.newlz_arrays_space.m_ptr != (void *)0x0) {
    if (local_328.newlz_arrays_space.m_arena == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_328.newlz_arrays_space.m_ptr);
    }
    else if ((local_328.newlz_arrays_space.m_arena)->m_unorderedStart != 0) {
      rrArenaAllocator::Free
                (local_328.newlz_arrays_space.m_arena,local_328.newlz_arrays_space.m_ptr,
                 local_328.newlz_arrays_space.m_capacity);
    }
  }
  if (param_7->m_unorderedStart != 0) {
    uVar15 = param_7->m_cur;
    while (uVar15 != param_7->m_unorderedStart) {
      uVar15 = uVar15 + (-0x10 - *(longlong *)(uVar15 - 0x10));
      param_7->m_cur = uVar15;
    }
    param_7->m_unorderedStart = local_178;
  }
  param_7->m_cur = uVar4;
  return local_350;
LAB_14f3a4e3a:
  if (local_358 != (LRMCascade *)0x0) {
    LRM_DestroyCascade(local_358);
  }
  _eh_vector_destructor_iterator_(&local_148,0x80,2,CreateMatchFinderJob::~CreateMatchFinderJob);
  goto LAB_14f3a4e75;
}

// newlz_compress_vtable_block_outer @ 14f3a52c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newlz_compress_vtable_block_outer
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          uchar *param_5,long64 param_6,int param_7,int param_8,uchar *param_9,
          rrArenaAllocator *param_10,UnpackedMatchPair *param_11)

{
  float fVar1;
  newlz_vtable *pnVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  size_t sVar9;
  long64 lVar10;
  ulonglong *puVar11;
  uchar *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  ulonglong uVar16;
  size_t sVar17;
  float fVar18;
  undefined1 auStackY_198 [32];
  float local_134;
  float local_130;
  int local_12c;
  int local_128;
  byte *local_120;
  UnpackedMatchPair *local_118;
  uchar *local_110;
  uchar *local_108;
  longlong local_100;
  size_t local_f8;
  uchar *local_f0;
  LZQuantumHeader local_e8;
  LZQuantumHeader local_c8;
  LZBlockHeader local_a8;
  LZBlockHeader local_90;
  LZBlockHeader local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = param_5;
  local_110 = param_9;
  local_118 = param_11;
  local_90.offsetShift = 0;
  local_90.chunkIsMemcpy = 0;
  local_90.version = 4;
  iVar6 = param_1->pOptions->sendQuantumCRCs;
  local_90.decodeType = param_1->decodeType;
  local_128 = param_8;
  local_90.chunkIsReset = param_8;
  local_12c = iVar6;
  local_108 = param_3;
  local_90.chunkHasQuantumCRCs = iVar6;
  puVar8 = LZBlockHeader_Put(&local_90,param_3);
  local_c8.wholeMatchFlag = 0;
  local_c8._12_4_ = 0;
  local_c8.wholeMatchOffset = 0;
  local_c8.huffFlag = 0;
  local_c8.extraFlag = 0;
  local_c8.crc = 0;
  local_c8.compLen = param_7 - 1;
  local_f0 = puVar8;
  iVar5 = MemsetQuantum_Test(local_120,param_7);
  if (iVar5 == 0) {
    iVar6 = LZLargeQuantumHeader_Put(puVar8,&local_c8,iVar6,param_7);
    local_100 = (longlong)iVar6;
    puVar8 = puVar8 + local_100;
    sVar17 = (size_t)param_7;
    local_134 = 1.0737418e+09;
    sVar9 = newLZ_encode_block_vtable
                      (param_1,param_2,local_110,local_120,param_7,puVar8,param_4,param_6,&local_c8,
                       &local_134,param_10,local_118);
    fVar1 = param_1->lambda;
    local_f8 = sVar17;
    fVar18 = (*param_1->speedfit->memcpy)(sVar17);
    if (((longlong)sVar17 <= (longlong)sVar9) ||
       (fVar18 * fVar1 + (float)(longlong)sVar17 + __real_40400000 <= local_134)) {
      local_a8.decodeType = param_1->decodeType;
      local_a8.offsetShift = 0;
      local_a8.chunkHasQuantumCRCs = 0;
      local_a8.version = 4;
      local_a8.chunkIsMemcpy = 1;
      local_a8.chunkIsReset = local_128;
      puVar8 = LZBlockHeader_Put(&local_a8,param_3);
      memcpy(puVar8,local_120,sVar17);
      puVar8 = puVar8 + (sVar17 - (longlong)param_3);
    }
    else {
      iVar6 = local_12c;
      for (pnVar2 = param_1->pvtable2; local_12c = iVar6, pnVar2 != (newlz_vtable *)0x0;
          pnVar2 = pnVar2->pvtable2) {
        lVar10 = OodleLZ_GetCompressedBufferSizeNeeded(pnVar2->compressor,sVar17);
        lVar3 = (param_2->comp2_space).m_capacity;
        if (lVar3 < 1) {
          if (param_10 != (rrArenaAllocator *)0x0) {
            pvVar15 = (void *)param_10->m_cur;
            uVar14 = lVar10 + 0xfU & 0xfffffffffffffff0;
            uVar16 = (ulonglong)(-(uint)(param_10->m_unorderedStart != 0) & 0x10);
            if (param_10->m_size + param_10->m_base < (longlong)pvVar15 + uVar14 + uVar16) {
              pvVar15 = (void *)0x0;
            }
            else {
              puVar13 = (ulonglong *)((longlong)pvVar15 + uVar14);
              param_10->m_cur = (ulong64)puVar13;
              if (param_10->m_unorderedStart != 0) {
                *puVar13 = uVar14;
                puVar13[1] = 0;
                param_10->m_cur = param_10->m_cur + uVar16;
                puVar13 = (ulonglong *)param_10->m_cur;
              }
              puVar11 = (ulonglong *)param_10->m_cur_max;
              if ((ulonglong *)param_10->m_cur_max <= puVar13) {
                puVar11 = puVar13;
              }
              param_10->m_cur_max = (ulong64)puVar11;
            }
            (param_2->comp2_space).m_ptr = pvVar15;
            (param_2->comp2_space).m_arena = param_10;
          }
          if ((param_2->comp2_space).m_ptr == (void *)0x0) {
            puVar12 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar10,0x10);
            if (puVar12 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
              Oodle_Core_Malloc_Failed(lVar10);
            }
            (param_2->comp2_space).m_ptr = puVar12;
            (param_2->comp2_space).m_arena = (rrArenaAllocator *)0x0;
          }
          else {
            puVar12 = (param_2->comp2_space).m_ptr;
          }
          (param_2->comp2_space).m_capacity = lVar10;
        }
        else {
          if ((lVar3 < lVar10) &&
             (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.h",0x94,
                                         "oo2::newlz_scratchblock::extend","size <= m_capacity"),
             iVar6 != 0)) {
            pcVar4 = (code *)swi(3);
            lVar10 = (*pcVar4)();
            return lVar10;
          }
          puVar12 = (param_2->comp2_space).m_ptr;
        }
        (param_2->comp2_space).m_size = lVar10;
        local_130 = 1.0737418e+09;
        sVar17 = newLZ_encode_block_vtable
                           (pnVar2,param_2,local_110,local_120,param_7,puVar12,puVar12 + lVar10,
                            param_6,&local_e8,&local_130,param_10,local_118);
        if (local_130 < local_134) {
          memcpy(puVar8,puVar12,sVar17);
          local_78.decodeType = pnVar2->decodeType;
          local_78.chunkIsReset = local_128;
          local_78.chunkHasQuantumCRCs = local_12c;
          local_78.offsetShift = 0;
          local_78.chunkIsMemcpy = 0;
          local_78.version = 4;
          puVar12 = LZBlockHeader_Put(&local_78,local_108);
          if ((puVar12 + local_100 != puVar8) &&
             (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x278
                                         ,"oo2::newlz_compress_vtable_block_outer",
                                         "after_blockHeaderPtr + packedQHLen == compPtr"),
             iVar6 != 0)) {
            pcVar4 = (code *)swi(3);
            lVar10 = (*pcVar4)();
            return lVar10;
          }
          local_c8.compLen = 0;
          local_c8.crc = 0;
          local_c8.wholeMatchFlag = 0;
          local_c8._12_4_ = 0;
          local_c8.wholeMatchOffset = 0;
          local_c8.huffFlag = 0;
          local_c8.extraFlag = 0;
          sVar9 = sVar17;
        }
        sVar17 = local_f8;
        iVar6 = local_12c;
      }
      local_c8.crc = (uint)((ulonglong)local_c8._0_8_ >> 0x20);
      local_c8.compLen = (int)sVar9;
      if (iVar6 != 0) {
        uVar7 = LZQuantumHeader_ComputeCRC(puVar8,sVar9);
        local_c8.crc = uVar7;
      }
      LZLargeQuantumHeader_Put(local_f0,&local_c8,iVar6,param_7);
      puVar8 = puVar8 + (sVar9 - (longlong)local_108);
    }
  }
  else {
    local_c8._0_8_ = (ulonglong)*local_120 << 0x20;
    iVar6 = LZLargeQuantumHeader_Put(puVar8,&local_c8,iVar6,param_7);
    puVar8 = puVar8 + ((longlong)iVar6 - (longlong)param_3);
  }
  return (long64)puVar8;
}

// newlz_compress_vtable_simple_with_mf @ 14f3a5780

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newlz_compress_vtable_simple_with_mf
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          long64 param_5,rrArenaAllocator *param_6)

{
  UnpackedMatchPair *pUVar1;
  IncrementalMatchFinder *pIVar2;
  ulong64 uVar3;
  long64 lVar4;
  
  pIVar2 = (*param_1->fp_create_match_finder)
                     (param_3,param_5,0,(LRMSet *)0x0,param_1->pOptions->jobify,
                      param_1->pOptions->jobifyUserPtr,param_6);
  newlz_scratchblock::extend
            (&param_2->matches_space,param_1->find_all_matches_num_pairs * param_5 * 8,param_6);
  pUVar1 = (param_2->matches_space).m_ptr;
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (*fp_ThreadProfiler_Push)("mf_SimpleBlock",0);
  }
  (**(code **)((longlong)*pIVar2 + 0x10))
            (pIVar2,param_5 & 0xffffffff,pUVar1,param_1->find_all_matches_num_pairs);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar3);
  }
  lVar4 = OodleLZ_GetCompressedBufferSizeNeeded(param_1->compressor,param_5);
  lVar4 = newlz_compress_vtable_block_outer
                    (param_1,param_2,param_4,param_4 + lVar4,param_3,0,(int)param_5,1,param_3,
                     param_6,pUVar1);
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  return lVar4;
}

// newlz_compress_vtable_sub @ 14f3a5900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newlz_compress_vtable_sub
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          long64 param_5,uchar *param_6,uchar *param_7,IncrementalMatchFinder *param_8,
          rrArenaAllocator *param_9)

{
  uchar *puVar1;
  OodleLZ_Jobify OVar2;
  OodleLZ_CompressOptions *pOVar3;
  uchar *puVar4;
  code *pcVar5;
  int iVar6;
  long64 lVar7;
  ulonglong uVar8;
  ulong64 *puVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  ulonglong uVar15;
  uchar *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uchar *puVar19;
  bool bVar20;
  undefined1 auStackY_2a8 [32];
  ulong64 local_238;
  ulong64 local_1d8 [4];
  ulong64 local_1b8 [7];
  uint local_180 [2];
  longlong local_178;
  OodleJob local_170 [37];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_238 = 0xffffffffffffffff;
  }
  else {
    local_238 = (*fp_ThreadProfiler_Push)("newlz_compress_vts",0);
  }
  puVar1 = param_3 + param_5;
  local_1d8[0] = local_238;
  lVar7 = OodleLZ_GetCompressedBufferSizeNeeded(param_1->compressor,param_5);
  pOVar3 = param_1->pOptions;
  _eh_vector_constructor_iterator_
            (local_1d8 + 2,0x60,4,BlockParseJob::BlockParseJob,BlockParseJob::~BlockParseJob);
  pvVar14 = (void *)0x0;
  uVar13 = 1;
  if (param_8 == (IncrementalMatchFinder *)0x0) {
    uVar13 = 1;
    iVar6 = 1;
  }
  else {
    bVar20 = g_fp_OodleCore_Plugin_RunJob == OodleCore_Plugin_RunJob_Default;
    OVar2 = pOVar3->jobify;
    if ((int)OVar2 < 2) {
      if (OVar2 == OodleLZ_Jobify_Default) goto LAB_14f3a5a5a;
    }
    else {
      bVar20 = OVar2 == OodleLZ_Jobify_Aggressive;
      uVar13 = 3;
LAB_14f3a5a5a:
      if (!bVar20) {
        uVar13 = 2;
      }
    }
    if (param_5 < 0x44001) {
      uVar13 = 1;
    }
    uVar8 = param_5 + 0x3ffffU >> 0x12;
    if (uVar13 < uVar8) {
      uVar8 = uVar13;
    }
    uVar13 = 1;
    if (1 < uVar8) {
      uVar13 = uVar8;
    }
    if ((3 < uVar13 - 1) &&
       (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x33a,
                                   "oo2::newlz_compress_vtable_sub",
                                   "parse_job_count >= 1 && parse_job_count <= MAX_PARSE_JOBS"),
       iVar6 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar7 = (*pcVar5)();
      return lVar7;
    }
    iVar6 = (int)uVar13;
    iVar12 = iVar6 << 0x12;
    if (param_5 <= iVar12) {
      iVar12 = (int)param_5;
    }
    newlz_scratchblock::extend
              (&param_2->matches_space,
               (longlong)iVar12 * (longlong)param_1->find_all_matches_num_pairs * 8,param_9);
    pvVar14 = (param_2->matches_space).m_ptr;
    if (iVar6 < 1) goto LAB_14f3a5bc0;
  }
  uVar18 = 0;
  iVar12 = param_1->find_all_matches_num_pairs;
  puVar9 = local_1d8 + 4;
  uVar8 = uVar18;
  do {
    puVar9[-2] = (ulong64)param_1;
    puVar9[-1] = (ulong64)param_2;
    *puVar9 = (ulong64)param_9;
    puVar9[1] = (ulong64)((longlong)pvVar14 + (longlong)(int)uVar8 * 8);
    puVar9[2] = (ulong64)param_6;
    puVar9[3] = (ulong64)(param_4 + lVar7);
    uVar15 = uVar18;
    if ((int)uVar18 == 0) {
      uVar15 = uVar13;
    }
    puVar9[4] = (ulong64)(local_1d8 + uVar15 * 0xc);
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = (ulong64)param_4;
    uVar17 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar17;
    uVar8 = (ulonglong)(uint)((int)uVar8 + iVar12 * 0x40000);
    puVar9 = puVar9 + 0xc;
  } while ((int)uVar17 < iVar6);
LAB_14f3a5bc0:
  uVar18 = 0;
  uVar8 = 0;
  puVar16 = param_4;
  puVar19 = param_3;
  if (param_3 < puVar1) {
    do {
      uVar17 = (int)puVar1 - (int)puVar19;
      if (0x40000 < (longlong)puVar1 - (longlong)puVar19) {
        uVar17 = 0x40000;
      }
      if (uVar18 - uVar8 == uVar13) {
        uVar10 = local_170[(uVar8 % uVar13) * 0xc].handle;
        if (uVar10 != 0) {
          (*g_fp_OodleCore_Plugin_WaitJob)(uVar10,pOVar3->jobifyUserPtr);
          local_170[(uVar8 % uVar13) * 0xc].handle = 0;
        }
        uVar8 = uVar8 + 1;
      }
      uVar15 = uVar18 % uVar13;
      puVar9 = local_1d8 + uVar15 * 0xc + 2;
      if (param_8 != (IncrementalMatchFinder *)0x0) {
        if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
          uVar10 = 0xffffffffffffffff;
        }
        else {
          uVar10 = (*fp_ThreadProfiler_Push)("mf_ProcessChunk",0);
        }
        (**(code **)((longlong)*param_8 + 0x10))
                  (param_8,uVar17,local_1d8[uVar15 * 0xc + 5],param_1->find_all_matches_num_pairs);
        if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
          (*fp_ThreadProfiler_Pop)(uVar10);
        }
      }
      local_1d8[uVar15 * 0xc + 9] = (ulong64)puVar19;
      local_1d8[uVar15 * 0xc + 10] = (longlong)puVar19 - (longlong)param_7;
      local_180[uVar15 * 0x18] = uVar17;
      uVar11 = (longlong)puVar19 - (longlong)param_6;
      if (uVar11 == 0) {
        local_180[uVar15 * 0x18 + 1] = 1;
LAB_14f3a5d28:
        if ((puVar19 != param_3) &&
           (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x395,
                                       "oo2::newlz_compress_vtable_sub",
                                       "!pj->blockIsReset || rawPtr == raw"), iVar6 != 0)) {
          pcVar5 = (code *)swi(3);
          lVar7 = (*pcVar5)();
          return lVar7;
        }
      }
      else if (((uVar11 & 0x3ffff) == 0) && (pOVar3->seekChunkReset != 0)) {
        uVar11 = (longlong)pOVar3->seekChunkLen - 1U & uVar11;
        local_180[uVar15 * 0x18 + 1] = (uint)(uVar11 == 0);
        if (uVar11 == 0) goto LAB_14f3a5d28;
      }
      else {
        local_180[uVar15 * 0x18 + 1] = 0;
      }
      if (uVar13 == 1) {
        puVar4 = *(uchar **)local_1d8[uVar15 * 0xc + 8];
        lVar7 = OodleLZ_GetCompressedBufferSizeNeeded
                          (*(OodleLZ_Compressor *)*puVar9,(longlong)(int)local_180[uVar15 * 0x18]);
        lVar7 = newlz_compress_vtable_block_outer
                          ((newlz_vtable *)*puVar9,
                           (newlz_encoder_scratch *)local_1d8[uVar15 * 0xc + 3],puVar4,
                           puVar4 + lVar7,(uchar *)local_1d8[uVar15 * 0xc + 9],
                           local_1d8[uVar15 * 0xc + 10],local_180[uVar15 * 0x18],
                           local_180[uVar15 * 0x18 + 1],(uchar *)local_1d8[uVar15 * 0xc + 6],
                           (rrArenaAllocator *)local_1d8[uVar15 * 0xc + 4],
                           (UnpackedMatchPair *)local_1d8[uVar15 * 0xc + 5]);
        (&local_178)[uVar15 * 0xc] = (longlong)(puVar4 + lVar7);
      }
      else {
        if ((uVar18 == 0) ||
           (uVar11 = (uVar18 - 1) % uVar13, local_1d8 + uVar11 * 0xc + 2 == (ulong64 *)0x0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = local_170[uVar11 * 0xc].handle;
        }
        OodleJob::run(local_170 + uVar15 * 0xc,newlz_compress_block_parse,puVar9,
                      pOVar3->jobifyUserPtr,1 < uVar13,uVar10,0);
      }
      uVar18 = uVar18 + 1;
      puVar19 = puVar19 + (int)uVar17;
    } while (puVar19 < puVar1);
    for (; uVar8 != uVar18; uVar8 = uVar8 + 1) {
      uVar15 = uVar8 % uVar13;
      if (local_170[uVar15 * 0xc].handle != 0) {
        (*g_fp_OodleCore_Plugin_WaitJob)(local_170[uVar15 * 0xc].handle,pOVar3->jobifyUserPtr);
        local_170[uVar15 * 0xc].handle = 0;
      }
      puVar16 = (uchar *)(&local_178)[uVar15 * 0xc];
    }
  }
  _eh_vector_destructor_iterator_(local_1d8 + 2,0x60,4,BlockParseJob::~BlockParseJob);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(local_238);
  }
  return (longlong)puVar16 - (longlong)param_4;
}

// newlz_enc_mem_bound @ 14f3a5f40

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl oo2::newlz_enc_mem_bound(newlz_vtable *param_1,long64 param_2)

{
  OodleLZ_Compressor OVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  OVar1 = param_1->compressor;
  lVar5 = (longlong)param_1->chunk_len;
  if (param_2 < param_1->chunk_len) {
    lVar5 = param_2;
  }
  lVar4 = lVar5 * 3 + param_1->ctmf_mem_size + 0x1000;
  if (OVar1 != OodleLZ_Compressor_Selkie) {
    lVar3 = lVar4 + lVar5 * 2;
    lVar4 = lVar3 + 0x2800;
    if ((OVar1 == OodleLZ_Compressor_Kraken) || (OVar1 == OodleLZ_Compressor_Leviathan)) {
      lVar4 = lVar3 + 0x3000 + lVar5;
    }
  }
  uVar2 = param_1->entropy_flags;
  if ((uVar2 & 10) != 0) {
    lVar4 = lVar4 + 0x2000 + lVar5;
  }
  if ((uVar2 & 0x10) != 0) {
    lVar3 = 0x4000;
    if (lVar5 < 0x4000) {
      lVar3 = lVar5;
    }
    lVar4 = lVar4 + lVar3 + 0x4000 + lVar5;
  }
  if ((uVar2 & 0x20) != 0) {
    lVar4 = lVar4 + lVar5 * 0xc + 0x20000;
  }
  if (OVar1 == OodleLZ_Compressor_Leviathan) {
    if ((uVar2 & 0x20) != 0) {
      lVar4 = lVar4 + lVar5 * -2;
    }
    return lVar4 + lVar5 * 6 + 0x20000;
  }
  return lVar4;
}

// newlz_literal_space_reserve_size @ 14f3a6000

int __cdecl oo2::newlz_literal_space_reserve_size(int param_1)

{
  return (param_1 >> 4) + 0x100 + param_1;
}

// release @ 14f3a6020

void __thiscall oo2::newlz_scratchblock::release(newlz_scratchblock *this)

{
  void *pvVar1;
  rrArenaAllocator *this_00;
  
  pvVar1 = this->m_ptr;
  if (pvVar1 != (void *)0x0) {
    this_00 = this->m_arena;
    if (this_00 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
    else if (this_00->m_unorderedStart != 0) {
      rrArenaAllocator::Free(this_00,pvVar1,this->m_capacity);
    }
  }
  this->m_arena = (rrArenaAllocator *)0x0;
  this->m_ptr = (void *)0x0;
  this->m_size = 0;
  this->m_capacity = 0;
  return;
}

// rrAlignUp64 @ 14f3a6080

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3a60a0

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrPrintf_nop @ 14f3a60c0

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f3a60d0

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3a60e0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// speedfit_memcpy_array_J @ 14f3a60f0

float __cdecl oo2::speedfit_memcpy_array_J(float param_1,OodleSpeedFit *param_2,long64 param_3)

{
  float fVar1;
  
  fVar1 = (*param_2->memcpy)(param_3);
  return fVar1 * param_1 + (float)param_3;
}

// wait @ 14f3a6140

void __thiscall oo2::OodleJob::wait(OodleJob *this,void *param_1)

{
  if (this->handle != 0) {
    (*g_fp_OodleCore_Plugin_WaitJob)(this->handle,param_1);
    this->handle = 0;
  }
  return;
}

// dtor$0 @ 150284d40

void `oo2::BlockParseJob::BlockParseJob'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::OodleJob::~OodleJob((OodleJob *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}

// dtor$0 @ 150284d60

void `oo2::CreateMatchFinderJob::CreateMatchFinderJob'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::LRMSet::~LRMSet((LRMSet *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}

// dtor$1 @ 150284d80

void `oo2::CreateMatchFinderJob::CreateMatchFinderJob'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::OodleJob::~OodleJob((OodleJob *)(*(longlong *)(param_2 + 0x40) + 0x78));
  return;
}

// dtor$0 @ 150284da0

void `oo2::newlz_vtable::newlz_vtable'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::newlz_scratchblock::~newlz_scratchblock
            ((newlz_scratchblock *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}

// dtor$0 @ 150284dc0

void `oo2::newlz_compress_create_match_finder'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 150284de0

void `oo2::newlz_compress_vtable'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrArenaAllocatorStateSaver::~rrArenaAllocatorStateSaver
            ((rrArenaAllocatorStateSaver *)(param_2 + 0x280));
  return;
}

// dtor$1 @ 150284e00

void `oo2::newlz_compress_vtable'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::newlz_encoder_scratch::~newlz_encoder_scratch((newlz_encoder_scratch *)(param_2 + 0xc0));
  return;
}

// dtor$2 @ 150284e20

void `oo2::newlz_compress_vtable'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0x2a0),0x80,2,oo2::CreateMatchFinderJob::~CreateMatchFinderJob);
  return;
}

// dtor$3 @ 150284e60

void `oo2::newlz_compress_vtable'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0xb0));
  return;
}

// dtor$18 @ 150284e80

void `oo2::newlz_compress_vtable'::__l1::dtor_18(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x3f0));
  return;
}

// dtor$0 @ 150284ea0

void `oo2::newlz_compress_vtable_simple_with_mf'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0xc0));
  return;
}

// dtor$0 @ 150284ec0

void `oo2::newlz_compress_vtable_sub'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0xd0));
  return;
}

// dtor$1 @ 150284ee0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::newlz_compress_vtable_sub'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0xe0),0x60,4,oo2::BlockParseJob::~BlockParseJob);
  return;
}

// dtor$2 @ 150284f20

void `oo2::newlz_compress_vtable_sub'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0xc0));
  return;
}

