// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 14972db90

UClass * __cdecl UPCGComputeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataInterface",
               &Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGComputeDataInterface,0x90,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeDataInterface>,
               InternalVTableHelperCtorCaller<UPCGComputeDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton;
}

// UPCGComputeDataInterface @ 14973ab60

UPCGComputeDataInterface * __thiscall
UPCGComputeDataInterface::UPCGComputeDataInterface
          (UPCGComputeDataInterface *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->GraphBindingIndex = -1;
  this_00 = &(this->ProducerSettings).SoftObjectPtr.field_0x18;
  this->bProducedByCPU = false;
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownstreamInputPinLabelAliases).ArrayNum = 0;
  (this->DownstreamInputPinLabelAliases).ArrayMax = 0;
  (this->ProducerKernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// UPCGComputeDataInterface @ 14973abe0

UPCGComputeDataInterface * __thiscall
UPCGComputeDataInterface::UPCGComputeDataInterface
          (UPCGComputeDataInterface *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->GraphBindingIndex = -1;
  this_00 = &(this->ProducerSettings).SoftObjectPtr.field_0x18;
  this->bProducedByCPU = false;
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownstreamInputPinLabelAliases).ArrayNum = 0;
  (this->DownstreamInputPinLabelAliases).ArrayMax = 0;
  (this->ProducerKernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ProducerSettings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// ~UPCGComputeDataInterface @ 14973d9a0

void __thiscall UPCGComputeDataInterface::~UPCGComputeDataInterface(UPCGComputeDataInterface *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  pvVar1 = *(void **)&(this->ProducerSettings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// AddDownstreamInputPin @ 149745d90

void __thiscall
UPCGComputeDataInterface::AddDownstreamInputPin
          (UPCGComputeDataInterface *this,FName param_1,FName *param_2)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = local_res10;
  if (param_2 != (FName *)0x0) {
    pFVar1 = param_2;
  }
  local_res10[0] = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->DownstreamInputPinLabelAliases,pFVar1);
  return;
}

// AddReferencedObjects @ 149745dd0

void __cdecl
UPCGComputeDataInterface::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000149745e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[3].field_0x10,0,0);
    return;
  }
  pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetPrivateStaticClass @ 14975aa80

UClass * __cdecl UPCGComputeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataInterface",
               &Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGComputeDataInterface,0x90,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeDataInterface>,
               InternalVTableHelperCtorCaller<UPCGComputeDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton;
}

// GetProducerSettings @ 14975d240

UPCGSettings * __thiscall
UPCGComputeDataInterface::GetProducerSettings(UPCGComputeDataInterface *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FGCScopeGuard local_res8 [8];
  
  if ((this->ResolvedProducerSettings).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    return (this->ResolvedProducerSettings).field0_0x0.DebugPtr;
  }
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar2 = (UPCGSettings *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ProducerSettings);
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14975d298;
  }
  pUVar2 = (UPCGSettings *)0x0;
LAB_14975d298:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = pUVar2;
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (this->ResolvedProducerSettings).field0_0x0.DebugPtr;
}

// SetOutputPin @ 149776a40

void __thiscall
UPCGComputeDataInterface::SetOutputPin(UPCGComputeDataInterface *this,FName param_1,FName *param_2)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  this->OutputPinLabel = param_1;
  pFVar1 = local_res10;
  if (param_2 != (FName *)0x0) {
    pFVar1 = param_2;
  }
  this->OutputPinLabelAlias = *pFVar1;
  return;
}

// SetProducerSettings @ 149776a70

void __thiscall
UPCGComputeDataInterface::SetProducerSettings(UPCGComputeDataInterface *this,UPCGSettings *param_1)

{
  UPCGSettings *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ResolvedProducerSettings).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->ProducerSettings).SoftObjectPtr,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUPCGComputeDataInterface @ 1497785c0

void __cdecl UPCGComputeDataInterface::StaticRegisterNativesUPCGComputeDataInterface(void)

{
  return;
}

