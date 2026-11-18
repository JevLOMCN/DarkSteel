// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// ~FDS_UIMessageInfo @ 14b5c8a90

void __thiscall FDS_UIMessageInfo::~FDS_UIMessageInfo(FDS_UIMessageInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UIMsgResDel);
  pvVar1 = *(void **)&(this->UIMsgResDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UIMsgResDel);
  *(undefined4 *)&(this->MsgArgs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MsgArgs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MsgArgs);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MsgText).FormatArgs.AllocatorInstance.Data,
             (this->MsgText).FormatArgs.ArrayNum);
  pFVar2 = (this->MsgText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MsgText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FDS_UIMessageInfo @ 14bb4c600

FDS_UIMessageInfo * __thiscall
FDS_UIMessageInfo::FDS_UIMessageInfo(FDS_UIMessageInfo *this,FDS_UIMessageInfo *param_1)

{
  TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
  *pTVar1;
  TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  bool bVar3;
  void *pvVar4;
  
  pTVar1 = &this->MsgArgs;
  (this->MsgText).StringTableType = (param_1->MsgText).StringTableType;
  pTVar2 = &param_1->MsgArgs;
  (this->MsgText).StringTableID = (param_1->MsgText).StringTableID;
  (this->MsgText).StringEnumTableNameID = (param_1->MsgText).StringEnumTableNameID;
  (this->MsgText).DateTime.Ticks = (param_1->MsgText).DateTime.Ticks;
  (this->MsgText).TimeSpan.Ticks = (param_1->MsgText).TimeSpan.Ticks;
  (this->MsgText).TimeExpressionType = (param_1->MsgText).TimeExpressionType;
  bVar3 = (param_1->MsgText).IsExpression;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).IsExpression = bVar3;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data =
       (param_1->MsgText).UniqueString.Data.AllocatorInstance.Data;
  (param_1->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = (param_1->MsgText).UniqueString.Data.ArrayNum;
  (this->MsgText).UniqueString.Data.ArrayMax = (param_1->MsgText).UniqueString.Data.ArrayMax;
  (param_1->MsgText).UniqueString.Data.ArrayNum = 0;
  (param_1->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data =
       (param_1->MsgText).FormatArgs.AllocatorInstance.Data;
  (param_1->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = (param_1->MsgText).FormatArgs.ArrayNum;
  (this->MsgText).FormatArgs.ArrayMax = (param_1->MsgText).FormatArgs.ArrayMax;
  (param_1->MsgText).FormatArgs.ArrayNum = 0;
  (param_1->MsgText).FormatArgs.ArrayMax = 0;
  this->StringUiTID = param_1->StringUiTID;
  this->MessageCoolTime = param_1->MessageCoolTime;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x8 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x20 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x28 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MsgArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MsgArgs).field_0x34 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x40 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->MsgArgs).field_0x10;
    *(undefined4 *)&(this->MsgArgs).field_0x8 = *(undefined4 *)&(param_1->MsgArgs).field_0x8;
    _Src = &(param_1->MsgArgs).field_0x10;
    *(undefined4 *)&(this->MsgArgs).field_0xc = *(undefined4 *)&(param_1->MsgArgs).field_0xc;
    *(undefined8 *)&(param_1->MsgArgs).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->MsgArgs).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->MsgArgs).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->MsgArgs).field_0x20 = *(undefined8 *)&(param_1->MsgArgs).field_0x20;
      *(undefined8 *)&(param_1->MsgArgs).field_0x20 = 0;
      *(undefined4 *)&(this->MsgArgs).field_0x28 = *(undefined4 *)&(param_1->MsgArgs).field_0x28;
      *(undefined4 *)&(this->MsgArgs).field_0x2c = *(undefined4 *)&(param_1->MsgArgs).field_0x2c;
      *(undefined8 *)&(param_1->MsgArgs).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MsgArgs).field_0x30 = *(undefined4 *)&(param_1->MsgArgs).field_0x30;
    *(undefined4 *)&(this->MsgArgs).field_0x34 = *(undefined4 *)&(param_1->MsgArgs).field_0x34;
    *(undefined4 *)&(param_1->MsgArgs).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->MsgArgs).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->MsgArgs).field_0x40 == 0) {
    *(undefined4 *)&(this->MsgArgs).field_0x38 = *(undefined4 *)&(param_1->MsgArgs).field_0x38;
  }
  pvVar4 = *(void **)&(this->MsgArgs).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined8 *)&(this->MsgArgs).field_0x40 = *(undefined8 *)&(param_1->MsgArgs).field_0x40;
  *(undefined8 *)&(param_1->MsgArgs).field_0x40 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x48 = *(undefined4 *)&(param_1->MsgArgs).field_0x48;
  *(undefined4 *)&(param_1->MsgArgs).field_0x48 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UIMsgResDel,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->UIMsgResDel);
  this->MsgType = param_1->MsgType;
  return this;
}

// FDS_UIMessageInfo @ 14bb4c7e0

FDS_UIMessageInfo * __thiscall
FDS_UIMessageInfo::FDS_UIMessageInfo(FDS_UIMessageInfo *this,FDS_UIMessageInfo *param_1)

{
  FDS_Text::FDS_Text(&this->MsgText,&param_1->MsgText);
  this->StringUiTID = param_1->StringUiTID;
  this->MessageCoolTime = param_1->MessageCoolTime;
  *(undefined8 *)&this->MsgArgs = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x8 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x20 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x28 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MsgArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MsgArgs).field_0x34 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x40 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x48 = 0;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::operator=(&this->MsgArgs,
              (TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
               *)&param_1->MsgArgs);
  *(undefined8 *)&this->UIMsgResDel = 0;
  *(undefined8 *)&(this->UIMsgResDel).field_0x8 = 0;
  *(undefined4 *)&(this->UIMsgResDel).field_0x10 = 0;
  TDelegate<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->UIMsgResDel,&param_1->UIMsgResDel);
  this->MsgType = param_1->MsgType;
  return this;
}

// FDS_UIMessageInfo @ 14bb4c880

FDS_UIMessageInfo * __thiscall
FDS_UIMessageInfo::FDS_UIMessageInfo(FDS_UIMessageInfo *this,EDS_MessageType param_1)

{
  (this->MsgText).StringTableType = None;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = 0;
  (this->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = 0;
  (this->MsgText).FormatArgs.ArrayMax = 0;
  *(undefined8 *)&this->MsgArgs = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x8 = 0;
  *(undefined8 *)&(this->MsgArgs).field_0x20 = 0;
  this->StringUiTID = 0;
  this->MessageCoolTime = 0.0;
  *(undefined4 *)&(this->MsgArgs).field_0x28 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MsgArgs).field_0x34 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MsgArgs).field_0x40 = 0;
  *(undefined4 *)&(this->MsgArgs).field_0x48 = 0;
  *(undefined8 *)&this->UIMsgResDel = 0;
  *(undefined8 *)&(this->UIMsgResDel).field_0x8 = 0;
  *(undefined4 *)&(this->UIMsgResDel).field_0x10 = 0;
  this->MsgType = param_1;
  return this;
}

// operator= @ 14bb4d210

FDS_UIMessageInfo * __thiscall
FDS_UIMessageInfo::operator=(FDS_UIMessageInfo *this,FDS_UIMessageInfo *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FDS_TextFormatArg *pFVar6;
  
  (this->MsgText).StringTableType = (param_1->MsgText).StringTableType;
  (this->MsgText).StringTableID = (param_1->MsgText).StringTableID;
  (this->MsgText).StringEnumTableNameID = (param_1->MsgText).StringEnumTableNameID;
  (this->MsgText).DateTime.Ticks = (param_1->MsgText).DateTime.Ticks;
  (this->MsgText).TimeSpan.Ticks = (param_1->MsgText).TimeSpan.Ticks;
  (this->MsgText).TimeExpressionType = (param_1->MsgText).TimeExpressionType;
  (this->MsgText).IsExpression = (param_1->MsgText).IsExpression;
  ::FString::operator=(&(this->MsgText).UniqueString,&(param_1->MsgText).UniqueString);
  pTVar1 = &(param_1->MsgText).FormatArgs;
  pTVar2 = &(this->MsgText).FormatArgs;
  if (pTVar2 != pTVar1) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->MsgText).FormatArgs.ArrayNum);
    iVar4 = (param_1->MsgText).FormatArgs.ArrayNum;
    piVar3 = &(this->MsgText).FormatArgs.ArrayMax;
    pFVar6 = (FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    (this->MsgText).FormatArgs.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  this->StringUiTID = param_1->StringUiTID;
  this->MessageCoolTime = param_1->MessageCoolTime;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::operator=(&this->MsgArgs,
              (TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
               *)&param_1->MsgArgs);
  TDelegate<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->UIMsgResDel,&param_1->UIMsgResDel);
  this->MsgType = param_1->MsgType;
  return this;
}

// IsEmptyMsg @ 14bb6ec60

bool __thiscall FDS_UIMessageInfo::IsEmptyMsg(FDS_UIMessageInfo *this)

{
  bool bVar1;
  
  bVar1 = FDS_Text::IsEmpty(&this->MsgText);
  return bVar1;
}

// IsSameMsg @ 14bb6f740

bool __thiscall FDS_UIMessageInfo::IsSameMsg(FDS_UIMessageInfo *this,FDS_UIMessageInfo *param_1)

{
  bool bVar1;
  FText *this_00;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  if ((0 < this->StringUiTID) && (this->StringUiTID != param_1->StringUiTID)) {
    return false;
  }
  this_00 = FDS_Text::GetText(&this->MsgText,&local_18);
  pFVar2 = FDS_Text::GetText(&param_1->MsgText,&local_28);
  bVar1 = FText::EqualToCaseIgnored(this_00,pFVar2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// Reset @ 14bb860c0

void __thiscall FDS_UIMessageInfo::Reset(FDS_UIMessageInfo *this)

{
  FString *pFVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
  *this_00;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  pFVar1 = &(this->MsgText).UniqueString;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).StringTableType = None;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  if (pFVar1 != (FString *)local_28) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MsgText).UniqueString.Data.ArrayNum = 0;
    (this->MsgText).UniqueString.Data.ArrayMax = 0;
  }
  pTVar2 = &(this->MsgText).FormatArgs;
  if (pTVar2 != (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_18) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->MsgText).FormatArgs.ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MsgText).FormatArgs.ArrayNum = 0;
    (this->MsgText).FormatArgs.ArrayMax = 0;
  }
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
  this->StringUiTID = 0;
  this->MessageCoolTime = 0.0;
  this_00 = &this->MsgArgs;
  bVar6 = 1 < *(int *)&(this->MsgArgs).field_0x48;
  if (!bVar6) {
    TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar3 = &(this->MsgArgs).field_0xc;
  *(undefined4 *)&(this->MsgArgs).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->MsgArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MsgArgs).field_0x34 = 0;
  iVar4 = *(int *)&(this->MsgArgs).field_0x2c;
  *(undefined4 *)&(this->MsgArgs).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->MsgArgs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MsgArgs).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->MsgArgs).field_0x48 = 1;
    TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

