// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// FMutableUpdateCandidate @ 14abbcc60

FMutableUpdateCandidate * __thiscall
FMutableUpdateCandidate::FMutableUpdateCandidate
          (FMutableUpdateCandidate *this,UCustomizableObjectInstance *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMutableUpdateCandidate *pFVar4;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar5;
  
  this->CustomizableObjectInstance = param_1;
  this->Priority = Med;
  *(undefined8 *)&this->MinLOD = 0;
  *(undefined8 *)&(this->MinLOD).field_0x8 = 0;
  *(undefined8 *)&(this->MinLOD).field_0x20 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x28 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinLOD).field_0x34 = 0;
  *(undefined8 *)&(this->MinLOD).field_0x40 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x48 = 0;
  *(undefined8 *)&this->QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x34 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x0 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  this->bHasBeenIssued = false;
  if ((param_1->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xce2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMutableUpdateCandidate *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar1 = ((param_1->PrivateData).field0_0x0.DebugPtr)->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMutableUpdateCandidate *)(*pcVar2)();
      return pFVar4;
    }
  }
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->MinLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)(lVar1 + 0x138));
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)(lVar1 + 0x188));
  pTVar5 = (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            *)FCustomizableObjectInstanceDescriptor::GetFirstRequestedLOD
                        ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98));
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->FirstRequestedLOD,pTVar5);
  return this;
}

// ~FMutableUpdateCandidate @ 14abbf110

void __thiscall FMutableUpdateCandidate::~FMutableUpdateCandidate(FMutableUpdateCandidate *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FirstRequestedLOD).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstRequestedLOD);
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QualitySettingMinLODs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QualitySettingMinLODs);
  *(undefined4 *)&(this->MinLOD).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MinLOD).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MinLOD);
  return;
}

// ApplyLODUpdateParamsToInstance @ 14abc5360

void __thiscall
FMutableUpdateCandidate::ApplyLODUpdateParamsToInstance
          (FMutableUpdateCandidate *this,FUpdateContextPrivate *param_1)

{
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CustomizableObjectInstance->Descriptor).MinLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->MinLOD);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CustomizableObjectInstance->Descriptor).QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->QualitySettingMinLODs);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CustomizableObjectInstance->Descriptor).FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->FirstRequestedLOD);
  FUpdateContextPrivate::SetMinLOD(param_1,&this->MinLOD);
  FUpdateContextPrivate::SetQualitySettingMinLODs(param_1,&this->QualitySettingMinLODs);
  FUpdateContextPrivate::SetFirstRequestedLOD(param_1,&this->FirstRequestedLOD);
  return;
}

// HasBeenIssued @ 14abe1510

bool __thiscall FMutableUpdateCandidate::HasBeenIssued(FMutableUpdateCandidate *this)

{
  return this->bHasBeenIssued;
}

// Issue @ 14abe41c0

void __thiscall FMutableUpdateCandidate::Issue(FMutableUpdateCandidate *this)

{
  this->bHasBeenIssued = true;
  return;
}

