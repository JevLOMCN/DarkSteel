// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a1fec10

UScriptStruct * __cdecl FAnimNode_ControlRig_ExternalSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource,
                         (UObject *)pUVar1,L"AnimNode_ControlRig_ExternalSource");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.OuterSingleton;
}

// FAnimNode_ControlRig_ExternalSource @ 14a21dc00

FAnimNode_ControlRig_ExternalSource * __thiscall
FAnimNode_ControlRig_ExternalSource::FAnimNode_ControlRig_ExternalSource
          (FAnimNode_ControlRig_ExternalSource *this)

{
  FAnimNode_ControlRigBase::FAnimNode_ControlRigBase((FAnimNode_ControlRigBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_ControlRig_ExternalSource__6B_;
  (this->ControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  return this;
}

// GetControlRig @ 14a2608b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
FAnimNode_ControlRig_ExternalSource::GetControlRig(FAnimNode_ControlRig_ExternalSource *this)

{
  bool bVar1;
  UControlRig *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ControlRig).WeakPtr);
  if (bVar1) {
    pUVar2 = (UControlRig *)FWeakObjectPtr::Get(&(this->ControlRig).WeakPtr);
    return pUVar2;
  }
  return (UControlRig *)0x0;
}

// GetControlRigClass @ 14a260980

TSubclassOf<UControlRig> __thiscall
FAnimNode_ControlRig_ExternalSource::GetControlRigClass(FAnimNode_ControlRig_ExternalSource *this)

{
  UObject *pUVar1;
  longlong lVar2;
  TObjectPtr<UClass> in_RDX;
  
  lVar2 = (**(code **)(this->_padding_ + 0xb8))();
  if (lVar2 == 0) {
    *(undefined8 *)in_RDX.field0_0x0 = 0;
  }
  else {
    pUVar1 = *(UObject **)(lVar2 + 0x10);
    *(UObject **)in_RDX.field0_0x0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TSubclassOf<UControlRig>)in_RDX.field0_0x0;
    }
  }
  return (TSubclassOf<UControlRig>)in_RDX.field0_0x0.DebugPtr;
}

// Initialize_AnyThread @ 14a272c30

void __thiscall
FAnimNode_ControlRig_ExternalSource::Initialize_AnyThread
          (FAnimNode_ControlRig_ExternalSource *this,FAnimationInitializeContext *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  FStatsHierarchical::EndMeasurement();
  bVar1 = FWeakObjectPtr::IsValid(&(this->ControlRig).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ControlRig).WeakPtr);
  }
  else {
    pUVar2 = (UObject *)0x0;
  }
  FAnimNode_CustomProperty::SetTargetInstance((FAnimNode_CustomProperty *)this,pUVar2);
  return;
}

// SetControlRig @ 14a291130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig_ExternalSource::SetControlRig
          (FAnimNode_ControlRig_ExternalSource *this,UControlRig *param_1)

{
  UControlRig *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ControlRig).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// ~FAnimNode_ControlRig_ExternalSource @ 14a3bc670

void __thiscall
FAnimNode_ControlRig_ExternalSource::~FAnimNode_ControlRig_ExternalSource
          (FAnimNode_ControlRig_ExternalSource *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FAnimNode_CustomProperty::~FAnimNode_CustomProperty((FAnimNode_CustomProperty *)this);
  return;
}

