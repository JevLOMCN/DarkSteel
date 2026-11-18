// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetReplacedReferences @ 141efa4f0

TMap<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall FArchiveReplaceObjectRefBase::GetReplacedReferences(FArchiveReplaceObjectRefBase *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  
  if (this->bTrackReplacedReferences != false) {
    return &this->ReplacedReferences;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6889728297039560987>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveUObject.cpp"
                     ,0x11b,"bTrackReplacedReferences");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMap<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return &this->ReplacedReferences;
}

// SerializeObject @ 141f10c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FArchiveReplaceObjectRefBase::SerializeObject(FArchiveReplaceObjectRefBase *this,UObject *param_1)

{
  UClass *this_00;
  code *pcVar1;
  FStructuredArchiveFromArchive *pFVar2;
  FStructuredArchiveSlot FVar3;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  FReferenceCollector local_1d0;
  FArchiveReplaceObjectRefBase *local_1c0;
  undefined1 local_1b8;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_208;
  this_00 = *(UClass **)&param_1->field_0x10;
  local_1d0._padding_ =
       (longlong)
       &`FArchiveReplaceObjectRefBase::SerializeObject'::`2'::FReplaceObjectRefCollector::_vftable_;
  local_1d0.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_1b8 = 1;
  local_1c0 = this;
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  }
  else {
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    if (((this->_padding_ & 0x20) == 0) && ((this->_padding_ & 5) != 0)) {
      pcVar1 = *(code **)(this_00->_padding_ + 0x2e0);
      pFVar2 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                         (&local_1b0,(FArchive *)this);
      FVar3 = FStructuredArchiveFromArchive::GetSlot(pFVar2);
      local_1e0 = 0;
      local_1e8 = 0;
      (*pcVar1)(this_00,*(undefined8 *)FVar3,param_1,this_00);
    }
    else {
      pcVar1 = *(code **)(this_00->_padding_ + 0x2d0);
      pFVar2 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                         (&local_1b0,(FArchive *)this);
      FVar3 = FStructuredArchiveFromArchive::GetSlot(pFVar2);
      (*pcVar1)(this_00,*(undefined8 *)FVar3,param_1);
    }
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  }
  UClass::CallAddReferencedObjects(this_00,param_1,&local_1d0);
  FReferenceCollector::~FReferenceCollector(&local_1d0);
  return;
}

