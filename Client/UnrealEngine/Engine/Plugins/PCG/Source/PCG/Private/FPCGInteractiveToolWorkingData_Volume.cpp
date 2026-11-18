// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 14972a1f0

UScriptStruct * __cdecl FPCGInteractiveToolWorkingData_Volume::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Volume,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingData_Volume");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.OuterSingleton;
}

// FPCGInteractiveToolWorkingData_Volume @ 149737d90

FPCGInteractiveToolWorkingData_Volume * __thiscall
FPCGInteractiveToolWorkingData_Volume::FPCGInteractiveToolWorkingData_Volume
          (FPCGInteractiveToolWorkingData_Volume *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGInteractiveToolWorkingData_Volume__6B_;
  (this->Volume).field0_0x0.DebugPtr = (AVolume *)0x0;
  puVar1 = &(this->BrushComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->BrushComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->BrushComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BrushComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BrushComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BrushComponent).SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->BoxComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->BoxComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->BoxComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoxComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoxComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BoxComponent).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// InitializeRuntimeElementData @ 1499febb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGInteractiveToolWorkingData_Volume::InitializeRuntimeElementData
          (FPCGInteractiveToolWorkingData_Volume *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGCollisionShapeData *this_00;
  UBoxComponent *pUVar6;
  FPCGDataPtrWrapper *this_01;
  
  if ((this->Volume).field0_0x0.DebugPtr == (AVolume *)0x0) {
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoxComponent);
    if (pUVar4 == (UObject *)0x0) {
      return;
    }
    pUVar5 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) {
      return;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_) {
      return;
    }
  }
  iVar3 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  pFVar2 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  (param_1->OutputData).TaggedData.ArrayNum = iVar3 + 1;
  this_01 = (FPCGDataPtrWrapper *)(pFVar2 + (longlong)iVar3 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  if ((this->Volume).field0_0x0.DebugPtr == (AVolume *)0x0) {
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoxComponent);
    if (pUVar4 == (UObject *)0x0) {
      return;
    }
    pUVar5 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) {
      return;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_) {
      return;
    }
    this_00 = FPCGContext::NewObject_AnyThread<UPCGCollisionShapeData>(param_1);
    pUVar6 = TSoftObjectPtr<UBoxComponent>::Get(&this->BoxComponent);
    UPCGCollisionShapeData::Initialize(this_00,(UShapeComponent *)pUVar6);
  }
  else {
    this_00 = (UPCGCollisionShapeData *)FPCGContext::NewObject_AnyThread<UPCGVolumeData>(param_1);
    UPCGVolumeData::Initialize((UPCGVolumeData *)this_00,(this->Volume).field0_0x0.DebugPtr);
  }
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
  return;
}

// IsValid @ 149a01410

bool __thiscall
FPCGInteractiveToolWorkingData_Volume::IsValid(FPCGInteractiveToolWorkingData_Volume *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BrushComponent);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UBrushComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoxComponent);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

