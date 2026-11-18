// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 34

// StaticClass @ 14ac02710

UClass * __cdecl UCustomizableObjectInstanceUsage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUsage",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUsage,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUsage>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUsage>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton;
}

// UCustomizableObjectInstanceUsage @ 14ac0bb30

UCustomizableObjectInstanceUsage * __thiscall
UCustomizableObjectInstanceUsage::UCustomizableObjectInstanceUsage
          (UCustomizableObjectInstanceUsage *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsage__6B_;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdatedDelegate).field_0x10 = 0;
  (this->UsedSkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->UsedComponentName).ComparisonIndex = 0;
  (this->UsedComponentName).Number = 0;
  this->bUsedSkipSetReferenceSkeletalMesh = false;
  this->bUsedSkipSetSkeletalMeshOnAttach = false;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsagePrivate *)0x0;
  return this;
}

// UCustomizableObjectInstanceUsage @ 14ac0bb80

UCustomizableObjectInstanceUsage * __thiscall
UCustomizableObjectInstanceUsage::UCustomizableObjectInstanceUsage
          (UCustomizableObjectInstanceUsage *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCustomizableObjectInstanceUsagePrivate *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsage__6B_;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdatedDelegate).field_0x10 = 0;
  (this->UsedSkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->UsedComponentName).ComparisonIndex = 0;
  (this->UsedComponentName).Number = 0;
  this->bUsedSkipSetReferenceSkeletalMesh = false;
  this->bUsedSkipSetSkeletalMeshOnAttach = false;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsagePrivate *)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Private");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_NoRegister();
  pUVar4 = (UCustomizableObjectInstanceUsagePrivate *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCustomizableObjectInstanceUsagePrivate *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Private).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UCustomizableObjectInstanceUsage @ 14ac0ced0

void __thiscall
UCustomizableObjectInstanceUsage::~UCustomizableObjectInstanceUsage
          (UCustomizableObjectInstanceUsage *this)

{
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsage__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdatedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// AttachTo @ 14ac158a0

void __thiscall
UCustomizableObjectInstanceUsage::AttachTo
          (UCustomizableObjectInstanceUsage *this,USkeletalMeshComponent *param_1)

{
  char cVar1;
  UCustomizableSkeletalComponent *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  if ((param_1 == (USkeletalMeshComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    (this->UsedSkeletalMeshComponent).WeakPtr = local_res8;
  }
  else {
    local_res8 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->UsedSkeletalMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  }
  pUVar2 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar2 == (UCustomizableSkeletalComponent *)0x0) {
    cVar1 = this->bUsedSkipSetSkeletalMeshOnAttach;
  }
  else {
    cVar1 = pUVar2->bSkipSetReferenceSkeletalMesh;
  }
  if (cVar1 == '\0') {
    ((this->Private).field0_0x0.DebugPtr)->bPendingSetSkeletalMesh = true;
  }
  return;
}

// GetAttachParent @ 14ac1d340

USkeletalMeshComponent * __thiscall
UCustomizableObjectInstanceUsage::GetAttachParent(UCustomizableObjectInstanceUsage *this)

{
  int iVar1;
  bool bVar2;
  UCustomizableSkeletalComponent *pUVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  
  pUVar3 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar3 == (UCustomizableSkeletalComponent *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->UsedSkeletalMeshComponent).WeakPtr);
    if (!bVar2) {
      return (USkeletalMeshComponent *)0x0;
    }
    pUVar5 = (USkeletalMeshComponent *)
             FWeakObjectPtr::Get(&(this->UsedSkeletalMeshComponent).WeakPtr);
    return pUVar5;
  }
  pUVar5 = (USkeletalMeshComponent *)pUVar3->_padding_;
  if (pUVar5 != (USkeletalMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetComponentIndex @ 14ac1d9c0

int __thiscall
UCustomizableObjectInstanceUsage::GetComponentIndex(UCustomizableObjectInstanceUsage *this)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    return pUVar1->ComponentIndex;
  }
  return this->UsedComponentIndex;
}

// GetComponentName @ 14ac1da00

FName __thiscall
UCustomizableObjectInstanceUsage::GetComponentName(UCustomizableObjectInstanceUsage *this)

{
  UCustomizableSkeletalComponent *this_00;
  FName *pFVar1;
  int iVar2;
  FName in_RDX;
  FName local_res8;
  FString local_18;
  
  this_00 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                      ((this->Private).field0_0x0.DebugPtr);
  if (this_00 != (UCustomizableSkeletalComponent *)0x0) {
    UCustomizableSkeletalComponent::GetComponentName(this_00);
    return in_RDX;
  }
  if (this->UsedComponentIndex == -1) {
    *(FName *)in_RDX = this->UsedComponentName;
    return in_RDX;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_18,this->UsedComponentIndex);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar1 = ::FName::FName(&local_res8,iVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)in_RDX = *pFVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetCustomizableObjectInstance @ 14ac1dd20

UCustomizableObjectInstance * __thiscall
UCustomizableObjectInstanceUsage::GetCustomizableObjectInstance
          (UCustomizableObjectInstanceUsage *this)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    return (pUVar1->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  return (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac223b0

UCustomizableObjectInstanceUsagePrivate * __thiscall
UCustomizableObjectInstanceUsage::GetPrivate(UCustomizableObjectInstanceUsage *this)

{
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac223c0

UCustomizableObjectInstanceUsagePrivate * __thiscall
UCustomizableObjectInstanceUsage::GetPrivate(UCustomizableObjectInstanceUsage *this)

{
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ac225f0

UClass * __cdecl UCustomizableObjectInstanceUsage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUsage",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUsage,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUsage>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUsage>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUsage.InnerSingleton;
}

// GetSkipSetReferenceSkeletalMesh @ 14ac250f0

bool __thiscall
UCustomizableObjectInstanceUsage::GetSkipSetReferenceSkeletalMesh
          (UCustomizableObjectInstanceUsage *this)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    return pUVar1->bSkipSetReferenceSkeletalMesh;
  }
  return this->bUsedSkipSetReferenceSkeletalMesh;
}

// GetSkipSetSkeletalMeshOnAttach @ 14ac25140

bool __thiscall
UCustomizableObjectInstanceUsage::GetSkipSetSkeletalMeshOnAttach
          (UCustomizableObjectInstanceUsage *this)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    return pUVar1->bSkipSetReferenceSkeletalMesh;
  }
  return this->bUsedSkipSetSkeletalMeshOnAttach;
}

// SetComponentIndex @ 14ac34c30

void __thiscall
UCustomizableObjectInstanceUsage::SetComponentIndex
          (UCustomizableObjectInstanceUsage *this,int param_1)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    pUVar1->ComponentIndex = param_1;
    return;
  }
  this->UsedComponentIndex = param_1;
  return;
}

// SetComponentName @ 14ac34c80

void __thiscall
UCustomizableObjectInstanceUsage::SetComponentName
          (UCustomizableObjectInstanceUsage *this,FName *param_1)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    pUVar1->ComponentName = *param_1;
    return;
  }
  this->UsedComponentIndex = -1;
  this->UsedComponentName = *param_1;
  return;
}

// SetCustomizableObjectInstance @ 14ac34ea0

void __thiscall
UCustomizableObjectInstanceUsage::SetCustomizableObjectInstance
          (UCustomizableObjectInstanceUsage *this,UCustomizableObjectInstance *param_1)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCustomizableObjectInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (pUVar1->CustomizableObjectInstance).field0_0x0.DebugPtr = param_1;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObjectInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSkipSetReferenceSkeletalMesh @ 14ac38810

void __thiscall
UCustomizableObjectInstanceUsage::SetSkipSetReferenceSkeletalMesh
          (UCustomizableObjectInstanceUsage *this,bool param_1)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    pUVar1->bSkipSetReferenceSkeletalMesh = param_1;
    return;
  }
  this->bUsedSkipSetReferenceSkeletalMesh = param_1;
  return;
}

// SetSkipSetSkeletalMeshOnAttach @ 14ac38870

void __thiscall
UCustomizableObjectInstanceUsage::SetSkipSetSkeletalMeshOnAttach
          (UCustomizableObjectInstanceUsage *this,bool param_1)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    pUVar1->bSkipSkipSetSkeletalMeshOnAttach = param_1;
    return;
  }
  this->bUsedSkipSetSkeletalMeshOnAttach = param_1;
  return;
}

// StaticRegisterNativesUCustomizableObjectInstanceUsage @ 14ac39a90

void __cdecl
UCustomizableObjectInstanceUsage::StaticRegisterNativesUCustomizableObjectInstanceUsage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObjectInstanceUsage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSkeletalMeshAsync @ 14ac4b880

void __thiscall
UCustomizableObjectInstanceUsage::UpdateSkeletalMeshAsync
          (UCustomizableObjectInstanceUsage *this,bool param_1,bool param_2,bool param_3)

{
  UCustomizableSkeletalComponent *pUVar1;
  UCustomizableObjectInstance *this_00;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 == (UCustomizableSkeletalComponent *)0x0) {
    this_00 = (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  else {
    this_00 = (pUVar1->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this_00 != (UCustomizableObjectInstance *)0x0) {
    UCustomizableObjectInstance::UpdateSkeletalMeshAsync(this_00,param_2,param_3);
  }
  return;
}

// UpdateSkeletalMeshAsyncResult @ 14ac4b9a0

void __thiscall
UCustomizableObjectInstanceUsage::UpdateSkeletalMeshAsyncResult
          (UCustomizableObjectInstanceUsage *this,FInstanceUpdateDelegate *param_1,bool param_2,
          bool param_3)

{
  UCustomizableSkeletalComponent *pUVar1;
  UCustomizableObjectInstance *this_00;
  FInstanceUpdateDelegate local_38;
  FReadAccessScope local_20;
  
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     ((this->Private).field0_0x0.DebugPtr);
  if (pUVar1 == (UCustomizableSkeletalComponent *)0x0) {
    this_00 = (this->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  else {
    this_00 = (pUVar1->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this_00 != (UCustomizableObjectInstance *)0x0) {
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UCustomizableObjectInstance::UpdateSkeletalMeshAsyncResult(this_00,&local_38,param_2,param_3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// execAttachTo @ 14ac4d220

void __cdecl
UCustomizableObjectInstanceUsage::execAttachTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  UCustomizableSkeletalComponent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8 == (FWeakObjectPtr)0x0) ||
     ((*(uint *)((longlong)local_res8 + 8) >> 0x1e & 1) != 0)) {
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    *(int *)&param_1[1].field_0x18 = local_res10[0].ObjectIndex;
    *(int *)&param_1[1].field_0x1c = local_res10[0].ObjectSerialNumber;
  }
  else {
    local_res10[0] = local_res8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[1].field_0x18,(FObjectPtr)local_res10);
  }
  pUVar3 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar3 == (UCustomizableSkeletalComponent *)0x0) {
    cVar2 = param_1[2].field_0xd;
  }
  else {
    cVar2 = pUVar3->bSkipSetReferenceSkeletalMesh;
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(*(longlong *)&param_1[2].field_0x10 + 0x28) = 1;
  }
  return;
}

// execGetAttachParent @ 14ac4d3b0

void __cdecl
UCustomizableObjectInstanceUsage::execGetAttachParent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  USkeletalMeshComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetAttachParent((UCustomizableObjectInstanceUsage *)param_1);
  *(USkeletalMeshComponent **)param_3 = pUVar1;
  return;
}

// execGetComponentName @ 14ac4d4b0

void __cdecl
UCustomizableObjectInstanceUsage::execGetComponentName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = GetComponentName((UCustomizableObjectInstanceUsage *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)FVar1;
  return;
}

// execGetCustomizableObjectInstance @ 14ac4d5d0

void __cdecl
UCustomizableObjectInstanceUsage::execGetCustomizableObjectInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    *(TObjectPtr<UCustomizableObjectInstance>_u_0 *)param_3 =
         (pUVar1->CustomizableObjectInstance).field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execGetSkipSetReferenceSkeletalMesh @ 14ac4daa0

void __cdecl
UCustomizableObjectInstanceUsage::execGetSkipSetReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    *(bool *)param_3 = pUVar1->bSkipSetReferenceSkeletalMesh;
    return;
  }
  *(undefined1 *)param_3 = param_1[2].field_0xc;
  return;
}

// execGetSkipSetSkeletalMeshOnAttach @ 14ac4db30

void __cdecl
UCustomizableObjectInstanceUsage::execGetSkipSetSkeletalMeshOnAttach
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UCustomizableSkeletalComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar1 != (UCustomizableSkeletalComponent *)0x0) {
    *(bool *)param_3 = pUVar1->bSkipSetReferenceSkeletalMesh;
    return;
  }
  *(undefined1 *)param_3 = param_1[2].field_0xd;
  return;
}

// execSetComponentName @ 14ac4dfe0

void __cdecl
UCustomizableObjectInstanceUsage::execSetComponentName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  UCustomizableSkeletalComponent *pUVar3;
  FName *pFVar4;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar4 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar3 == (UCustomizableSkeletalComponent *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    uVar2 = pFVar4->Number;
    *(uint *)&param_1[2].field_0x4 = (pFVar4->ComparisonIndex).Value;
    *(uint *)&param_1[2].field_0x8 = uVar2;
  }
  else {
    pUVar3->ComponentName = *pFVar4;
  }
  return;
}

// execSetCustomizableObjectInstance @ 14ac4e150

void __cdecl
UCustomizableObjectInstanceUsage::execSetCustomizableObjectInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UCustomizableObjectInstance>_u_0 TVar2;
  UCustomizableSkeletalComponent *pUVar3;
  TObjectPtr<UCustomizableObjectInstance>_u_0 local_res8;
  
  local_res8.DebugPtr = (UCustomizableObjectInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  TVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar3 != (UCustomizableSkeletalComponent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UCustomizableObjectInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    (pUVar3->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)TVar2;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UCustomizableObjectInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  *(TObjectPtr<UCustomizableObjectInstance>_u_0 *)&param_1[1].field_0x20 =
       (UCustomizableObjectInstance *)TVar2;
  return;
}

// execSetSkipSetReferenceSkeletalMesh @ 14ac4e370

void __cdecl
UCustomizableObjectInstanceUsage::execSetSkipSetReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableSkeletalComponent *pUVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar2 == (UCustomizableSkeletalComponent *)0x0) {
    param_1[2].field_0xc = bVar3;
  }
  else {
    pUVar2->bSkipSetReferenceSkeletalMesh = bVar3;
  }
  return;
}

// execSetSkipSetSkeletalMeshOnAttach @ 14ac4e4b0

void __cdecl
UCustomizableObjectInstanceUsage::execSetSkipSetSkeletalMeshOnAttach
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableSkeletalComponent *pUVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar2 == (UCustomizableSkeletalComponent *)0x0) {
    param_1[2].field_0xd = bVar3;
  }
  else {
    pUVar2->bSkipSkipSetSkeletalMeshOnAttach = bVar3;
  }
  return;
}

// execUpdateSkeletalMeshAsync @ 14ac4e7c0

void __cdecl
UCustomizableObjectInstanceUsage::execUpdateSkeletalMeshAsync
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableSkeletalComponent *pUVar2;
  UCustomizableObjectInstance *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)&param_1[2].field_0x10);
  if (pUVar2 == (UCustomizableSkeletalComponent *)0x0) {
    this = *(UCustomizableObjectInstance **)&param_1[1].field_0x20;
  }
  else {
    this = (pUVar2->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this != (UCustomizableObjectInstance *)0x0) {
    UCustomizableObjectInstance::UpdateSkeletalMeshAsync(this,bVar3,bVar4);
  }
  return;
}

// execUpdateSkeletalMeshAsyncResult @ 14ac4ea10

void __cdecl
UCustomizableObjectInstanceUsage::execUpdateSkeletalMeshAsyncResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  undefined8 local_70;
  undefined8 local_68;
  FInstanceUpdateDelegate local_60;
  FReadAccessScope local_48;
  
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70 = 0;
  local_68 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_60._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_78,&local_48);
  local_60._8_8_ = local_70;
  local_60._16_8_ = local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  UpdateSkeletalMeshAsyncResult((UCustomizableObjectInstanceUsage *)param_1,&local_60,bVar2,bVar3);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

