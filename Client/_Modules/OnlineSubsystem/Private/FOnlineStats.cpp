// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// ~FOnlineStats @ 14eb35500

void __thiscall FOnlineStats::~FOnlineStats(FOnlineStats *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Properties).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineStats__6B_;
  pvVar1 = *(void **)&(this->Properties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Properties);
  return;
}

// DecrementFloatStat @ 14ebecae0

void __thiscall FOnlineStats::DecrementFloatStat(FOnlineStats *this,FString *param_1,float param_2)

{
  FVariantData *pFVar1;
  FString *local_48;
  char *local_40;
  char local_38 [8];
  void *local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if ((pFVar1 != (FVariantData *)0x0) && (pFVar1->Type == Float)) {
    (pFVar1->Value).AsFloat = (pFVar1->Value).AsFloat - param_2;
    return;
  }
  local_40 = local_38;
  local_20 = 0;
  uStack_28 = 0;
  local_30 = (void *)(ulonglong)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
  local_38[0] = '\a';
  local_48 = param_1;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&this->Properties,
             (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
             (bool *)&local_48);
  if ((local_38[0] == '\x06') || ((local_38[0] == '\b' || (local_38[0] == '\n')))) {
    operator_delete__(local_30);
  }
  return;
}

// DecrementIntStat @ 14ebecba0

void __thiscall FOnlineStats::DecrementIntStat(FOnlineStats *this,FString *param_1,int param_2)

{
  FVariantData *pFVar1;
  FString *local_38;
  char *local_30;
  char local_28 [8];
  void *local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if ((pFVar1 != (FVariantData *)0x0) && (pFVar1->Type == Int32)) {
    (pFVar1->Value).AsInt = (pFVar1->Value).AsInt - param_2;
    return;
  }
  local_10 = 0;
  local_30 = local_28;
  local_28[0] = '\x01';
  uStack_18 = 0;
  local_20 = (void *)(ulonglong)(uint)-param_2;
  local_38 = param_1;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&this->Properties,
             (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
             (bool *)&local_38);
  if ((local_28[0] == '\x06') || ((local_28[0] == '\b' || (local_28[0] == '\n')))) {
    operator_delete__(local_20);
  }
  return;
}

// FindStatByName @ 14ebf9280

FVariantData * __thiscall FOnlineStats::FindStatByName(FOnlineStats *this,FString *param_1)

{
  FVariantData *pFVar1;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  return pFVar1;
}

// IncrementFloatStat @ 14ec096b0

void __thiscall FOnlineStats::IncrementFloatStat(FOnlineStats *this,FString *param_1,float param_2)

{
  FVariantData *pFVar1;
  FString *local_48;
  char *local_40;
  char local_38 [8];
  void *local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if ((pFVar1 != (FVariantData *)0x0) && (pFVar1->Type == Float)) {
    (pFVar1->Value).AsFloat = param_2 + (pFVar1->Value).AsFloat;
    return;
  }
  local_20 = 0;
  local_40 = local_38;
  local_38[0] = '\a';
  uStack_28 = 0;
  local_30 = (void *)(ulonglong)(uint)param_2;
  local_48 = param_1;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&this->Properties,
             (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
             (bool *)&local_48);
  if ((local_38[0] == '\x06') || ((local_38[0] == '\b' || (local_38[0] == '\n')))) {
    operator_delete__(local_30);
  }
  return;
}

// IncrementIntStat @ 14ec09770

void __thiscall FOnlineStats::IncrementIntStat(FOnlineStats *this,FString *param_1,int param_2)

{
  FVariantData *pFVar1;
  FString *local_38;
  char *local_30;
  char local_28 [8];
  void *local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if ((pFVar1 != (FVariantData *)0x0) && (pFVar1->Type == Int32)) {
    (pFVar1->Value).AsInt = (pFVar1->Value).AsInt + param_2;
    return;
  }
  local_10 = 0;
  local_30 = local_28;
  local_28[0] = '\x01';
  uStack_18 = 0;
  local_20 = (void *)(ulonglong)(uint)param_2;
  local_38 = param_1;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&this->Properties,
             (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
             (bool *)&local_38);
  if ((local_28[0] == '\x06') || ((local_28[0] == '\b' || (local_28[0] == '\n')))) {
    operator_delete__(local_20);
  }
  return;
}

// SetFloatStat @ 14ec11b40

void __thiscall FOnlineStats::SetFloatStat(FOnlineStats *this,FString *param_1,float param_2)

{
  FVariantData *pFVar1;
  FString *local_48;
  char *local_40;
  char local_38 [8];
  void *local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if (pFVar1 == (FVariantData *)0x0) {
    local_20 = 0;
    local_40 = local_38;
    local_38[0] = '\a';
    uStack_28 = 0;
    local_30 = (void *)(ulonglong)(uint)param_2;
    local_48 = param_1;
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
              ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                *)&this->Properties,
               (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
               (bool *)&local_48);
    if (((local_38[0] == '\x06') || (local_38[0] == '\b')) || (local_38[0] == '\n')) {
      operator_delete__(local_30);
    }
  }
  else if (pFVar1->Type == Float) {
    (pFVar1->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&pFVar1->Value + 8) = 0;
    pFVar1->CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar1->Value).AsFloat = param_2;
    pFVar1->Type = Float;
    return;
  }
  return;
}

// SetIntStat @ 14ec12130

void __thiscall FOnlineStats::SetIntStat(FOnlineStats *this,FString *param_1,int param_2)

{
  FVariantData *pFVar1;
  FString *local_38;
  char *local_30;
  char local_28 [8];
  void *local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)&this->Properties,param_1);
  if ((pFVar1 != (FVariantData *)0x0) && (pFVar1->Type == Int32)) {
    (pFVar1->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&pFVar1->Value + 8) = 0;
    pFVar1->CachedEstimatedMaxEscapedStringSize = 0;
    pFVar1->Type = Int32;
    (pFVar1->Value).AsInt = param_2;
    return;
  }
  local_10 = 0;
  local_30 = local_28;
  local_28[0] = '\x01';
  uStack_18 = 0;
  local_20 = (void *)(ulonglong)(uint)param_2;
  local_38 = param_1;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&this->Properties,
             (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000008,
             (bool *)&local_38);
  if ((local_28[0] == '\x06') || ((local_28[0] == '\b' || (local_28[0] == '\n')))) {
    operator_delete__(local_20);
  }
  return;
}

