// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149729790

UScriptStruct * __cdecl FPCGInteractiveToolWorkingData_Spline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Spline,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingData_Spline");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.OuterSingleton;
}

// ~FPCGInteractiveToolWorkingData_Spline @ 14973d490

void __thiscall
FPCGInteractiveToolWorkingData_Spline::~FPCGInteractiveToolWorkingData_Spline
          (FPCGInteractiveToolWorkingData_Spline *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(this->SplineComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// GetSplineComponent @ 1499fd330

USplineComponent * __thiscall
FPCGInteractiveToolWorkingData_Spline::GetSplineComponent
          (FPCGInteractiveToolWorkingData_Spline *this)

{
  int iVar1;
  USplineComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USplineComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SplineComponent);
  if (pUVar2 != (USplineComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USplineComponent *)0x0;
}

// InitializeRuntimeElementData @ 1499fea50

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
FPCGInteractiveToolWorkingData_Spline::InitializeRuntimeElementData
          (FPCGInteractiveToolWorkingData_Spline *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSplineData *this_00;
  USplineComponent *pUVar6;
  FPCGDataPtrWrapper *this_01;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SplineComponent);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_USplineComponent_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      != &pUVar5->_padding_) {
    return;
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
  this_00 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(param_1);
  pUVar6 = (USplineComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SplineComponent);
  if (pUVar6 != (USplineComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) goto LAB_1499feb72;
  }
  pUVar6 = (USplineComponent *)0x0;
LAB_1499feb72:
  UPCGSplineData::Initialize(this_00,pUVar6);
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
  return;
}

// IsValid @ 149a013c0

bool __thiscall
FPCGInteractiveToolWorkingData_Spline::IsValid(FPCGInteractiveToolWorkingData_Spline *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SplineComponent);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_149a013fc;
  }
  pUVar2 = (UObject *)0x0;
LAB_149a013fc:
  return pUVar2 != (UObject *)0x0;
}

