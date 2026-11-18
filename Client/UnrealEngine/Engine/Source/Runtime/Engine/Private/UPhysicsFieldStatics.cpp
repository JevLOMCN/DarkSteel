// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 148335220

UClass * __cdecl UPhysicsFieldStatics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsFieldStatics",
               &Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton,
               StaticRegisterNativesUPhysicsFieldStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsFieldStatics>,
               InternalVTableHelperCtorCaller<UPhysicsFieldStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton;
}

// UPhysicsFieldStatics @ 14834c780

UPhysicsFieldStatics * __thiscall
UPhysicsFieldStatics::UPhysicsFieldStatics(UPhysicsFieldStatics *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsFieldStatics__6B_;
  return this;
}

// UPhysicsFieldStatics @ 14834c7b0

UPhysicsFieldStatics * __thiscall
UPhysicsFieldStatics::UPhysicsFieldStatics(UPhysicsFieldStatics *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsFieldStatics__6B_;
  return this;
}

// ~UPhysicsFieldStatics @ 14834dee0

void __thiscall UPhysicsFieldStatics::~UPhysicsFieldStatics(UPhysicsFieldStatics *this)

{
  *(undefined ***)this = &___7UPhysicsFieldStatics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EvalPhysicsIntegerField @ 148378640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UPhysicsFieldStatics::EvalPhysicsIntegerField
          (UObject *param_1,TVector<double> *param_2,EFieldIntegerType param_3)

{
  EFieldPhysicsType EVar1;
  UPhysicsFieldComponent *pUVar2;
  FPhysicsFieldInstance *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  UWorld *pUVar11;
  uint uVar12;
  undefined1 auStackY_2d8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  undefined1 local_258 [24];
  undefined8 uStack_240;
  void *local_238;
  undefined4 local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  void *local_218;
  ulonglong local_210;
  FFieldExecutionDatas local_208;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_e8 [104];
  undefined4 local_80;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUVar11 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar11 != (UWorld *)0x0) {
    local_208.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.SamplePositions.ArrayNum = 0;
    local_208.SamplePositions.ArrayMax = 0;
    local_208.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.SampleIndices.ArrayNum = 0;
    local_208.SampleIndices.ArrayMax = 0;
    local_208.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ParticleHandles[0].ArrayNum = 0;
    local_208.ParticleHandles[0].ArrayMax = 0;
    local_208.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ParticleHandles[1].ArrayNum = 0;
    local_208.ParticleHandles[1].ArrayMax = 0;
    local_208.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.FieldOutputs[0].ArrayNum = 0;
    local_208.FieldOutputs[0].ArrayMax = 0;
    local_208.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.FieldOutputs[1].ArrayNum = 0;
    local_208.FieldOutputs[1].ArrayMax = 0;
    local_208.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.FieldOutputs[2].ArrayNum = 0;
    local_208.FieldOutputs[2].ArrayMax = 0;
    local_208.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.FieldOutputs[3].ArrayNum = 0;
    local_208.FieldOutputs[3].ArrayMax = 0;
    local_208.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.VectorResults[0].ArrayNum = 0;
    local_208.VectorResults[0].ArrayMax = 0;
    local_208.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.VectorResults[1].ArrayNum = 0;
    local_208.VectorResults[1].ArrayMax = 0;
    local_208.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ScalarResults[0].ArrayNum = 0;
    local_208.ScalarResults[0].ArrayMax = 0;
    local_208.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ScalarResults[1].ArrayNum = 0;
    local_208.ScalarResults[1].ArrayMax = 0;
    local_208.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.IntegerResults[0].ArrayNum = 0;
    local_208.IntegerResults[0].ArrayMax = 0;
    local_208.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.IntegerResults[1].ArrayNum = 0;
    local_208.IntegerResults[1].ArrayMax = 0;
    local_208.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.IndexResults[0].ArrayNum = 0;
    local_208.IndexResults[0].ArrayMax = 0;
    local_208.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.IndexResults[1].ArrayNum = 0;
    local_208.IndexResults[1].ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,(ForAnyElementType *)&local_208,0,&local_208.SamplePositions.ArrayMax);
    if (((local_208.SamplePositions.AllocatorInstance.Data <= param_2) &&
        (param_2 < local_208.SamplePositions.AllocatorInstance.Data +
                   (longlong)local_208.SamplePositions.ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    iVar10 = local_208.SamplePositions.ArrayNum;
    if (local_208.SamplePositions.ArrayNum == local_208.SamplePositions.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)&local_208,&local_208.SamplePositions.ArrayMax)
      ;
    }
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    local_270 = 0;
    local_208.SamplePositions.ArrayNum = iVar10 + 1;
    *(double *)(local_208.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18) =
         (param_2->field0_0x0)._s_0.X;
    *(double *)(local_208.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
         dVar5;
    *(double *)(local_208.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 0x10) =
         (param_2->field0_0x0)._s_0.Z;
    bVar9 = local_208.SampleIndices.ArrayMax != 1;
    local_208.SampleIndices._8_8_ = (ulonglong)(uint)local_208.SampleIndices.ArrayMax << 0x20;
    iVar10 = 0;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,&local_208.SampleIndices.AllocatorInstance,0,
                 &local_208.SampleIndices.ArrayMax);
      iVar10 = local_208.SampleIndices.ArrayNum;
    }
    if ((local_208.SampleIndices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_270) &&
       ((FScriptContainerElement *)&local_270 <
        local_208.SampleIndices.AllocatorInstance.Data +
        (longlong)local_208.SampleIndices.ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      iVar10 = local_208.SampleIndices.ArrayNum;
    }
    if (iVar10 == local_208.SampleIndices.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_208.SampleIndices.AllocatorInstance,
                          &local_208.SampleIndices.ArrayMax);
    }
    local_208.SampleIndices.ArrayNum = iVar10 + 1;
    local_278 = 0;
    *(undefined8 *)(local_208.SampleIndices.AllocatorInstance.Data + (longlong)iVar10 * 8) =
         local_270;
    bVar9 = local_208.IntegerResults[0].ArrayMax != 1;
    local_208.IntegerResults[0]._8_8_ =
         (ulonglong)(uint)local_208.IntegerResults[0].ArrayMax << 0x20;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,&local_208.IntegerResults[0].AllocatorInstance,0,
                 &local_208.IntegerResults[0].ArrayMax);
    }
    if (((local_208.IntegerResults[0].AllocatorInstance.Data <=
          (FScriptContainerElement *)&local_278) &&
        ((FScriptContainerElement *)&local_278 <
         local_208.IntegerResults[0].AllocatorInstance.Data +
         (longlong)local_208.IntegerResults[0].ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    iVar10 = local_208.IntegerResults[0].ArrayNum;
    if (local_208.IntegerResults[0].ArrayNum == local_208.IntegerResults[0].ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_208.IntegerResults[0].AllocatorInstance,
                          &local_208.IntegerResults[0].ArrayMax);
    }
    local_208.IntegerResults[0].ArrayNum = iVar10 + 1;
    local_274 = 0;
    *(undefined4 *)(local_208.IntegerResults[0].AllocatorInstance.Data + (longlong)iVar10 * 4) =
         local_278;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 0;
    local_288.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&local_288.AllocatorInstance,0,&local_288.ArrayMax);
    if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_274) &&
        ((FScriptContainerElement *)&local_274 <
         local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    iVar10 = local_288.ArrayNum;
    if (local_288.ArrayNum == local_288.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_288.AllocatorInstance,&local_288.ArrayMax);
    }
    local_220 = 0;
    local_288.ArrayNum = iVar10 + 1;
    local_258._16_8_ = 0;
    uStack_240 = 0;
    local_210 = 0;
    *(undefined4 *)(local_288.AllocatorInstance.Data + (longlong)iVar10 * 4) = local_274;
    local_258._0_8_ = (FScriptContainerElement *)0x0;
    local_258._8_8_ = 0;
    local_238 = (void *)0x0;
    local_230 = 0;
    local_22c = 0x80;
    local_228 = 0xffffffff;
    local_224 = 0;
    local_218 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_e8,&local_208,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_258,pUVar11->TimeSeconds);
    local_210 = local_210 & 0xffffffff00000000;
    if (local_218 != (void *)0x0) {
      FMemory::Free(local_218);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_258,0,local_258._8_4_);
    iVar10 = SUB84(local_258._8_8_,4);
    local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_258,0,(int *)(local_258 + 0xc));
    }
    local_228 = 0xffffffff;
    local_224 = 0;
    local_230 = 0;
    if (0x80 < local_22c) {
      local_22c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),0);
    }
    if (local_238 != (void *)0x0) {
      FMemory::Free(local_238);
    }
    if ((FScriptContainerElement *)local_258._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_258._0_8_);
    }
    uVar7 = _UNK_151aa2718;
    uVar6 = ___xmm_0000000a000000090000000400000003;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = 6;
    local_f8 = 8;
    uStack_f4 = 0xe;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&local_268,6,(int *)((longlong)&local_260 + 4));
    FVar8.Data = local_268.Data;
    local_108 = uVar6;
    uStack_100 = uVar7;
    *(undefined8 *)local_268.Data = uVar6;
    *(undefined8 *)(local_268.Data + 8) = uVar7;
    *(ulonglong *)(local_268.Data + 0x10) = CONCAT44(uStack_f4,local_f8);
    iVar10 = (int)local_260;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = 0;
    uVar12 = 0;
    if ((int)param_3 < iVar10) {
      uVar12 = ~param_3 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    EVar1 = *(EFieldPhysicsType *)(FVar8.Data + (longlong)(int)param_3 * 4);
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    pUVar2 = (pUVar11->PhysicsField).field0_0x0.DebugPtr;
    if ((pUVar2 != (UPhysicsFieldComponent *)0x0) &&
       (pFVar3 = pUVar2->FieldInstance, pFVar3 != (FPhysicsFieldInstance *)0x0)) {
      EvaluateFieldNodes<int,FIntegerFieldAddOperator>
                (&pFVar3->FieldCommands,EVar1,(FFieldContext *)local_e8,local_208.IntegerResults,
                 &local_288);
      if ((local_288.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      iVar10 = *(int *)local_288.AllocatorInstance.Data;
      if (local_78.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
        (**(code **)(local_78.Ptr)->_padding_)(local_78.Ptr,1);
      }
      local_80 = 0;
      if ((void *)local_e8._96_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._96_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_e8 + 0x20);
      if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
      FFieldExecutionDatas::~FFieldExecutionDatas(&local_208);
      return iVar10;
    }
    if (local_78.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_78.Ptr)->_padding_)(local_78.Ptr,1);
    }
    local_80 = 0;
    if ((void *)local_e8._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_e8 + 0x20);
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_208);
  }
  return 0;
}

// EvalPhysicsScalarField @ 148378de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl
UPhysicsFieldStatics::EvalPhysicsScalarField
          (UObject *param_1,TVector<double> *param_2,EFieldScalarType param_3)

{
  EFieldPhysicsType EVar1;
  UPhysicsFieldComponent *pUVar2;
  FPhysicsFieldInstance *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  UWorld *pUVar11;
  uint uVar12;
  float fVar13;
  undefined1 auStackY_2e8 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_298;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  undefined1 local_268 [24];
  undefined8 uStack_250;
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  void *local_228;
  ulonglong local_220;
  FFieldExecutionDatas local_218;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pUVar11 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar11 != (UWorld *)0x0) {
    local_218.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SamplePositions.ArrayNum = 0;
    local_218.SamplePositions.ArrayMax = 0;
    local_218.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SampleIndices.ArrayNum = 0;
    local_218.SampleIndices.ArrayMax = 0;
    local_218.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[0].ArrayNum = 0;
    local_218.ParticleHandles[0].ArrayMax = 0;
    local_218.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[1].ArrayNum = 0;
    local_218.ParticleHandles[1].ArrayMax = 0;
    local_218.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[0].ArrayNum = 0;
    local_218.FieldOutputs[0].ArrayMax = 0;
    local_218.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[1].ArrayNum = 0;
    local_218.FieldOutputs[1].ArrayMax = 0;
    local_218.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[2].ArrayNum = 0;
    local_218.FieldOutputs[2].ArrayMax = 0;
    local_218.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[3].ArrayNum = 0;
    local_218.FieldOutputs[3].ArrayMax = 0;
    local_218.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[0].ArrayNum = 0;
    local_218.VectorResults[0].ArrayMax = 0;
    local_218.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[1].ArrayNum = 0;
    local_218.VectorResults[1].ArrayMax = 0;
    local_218.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[0].ArrayNum = 0;
    local_218.ScalarResults[0].ArrayMax = 0;
    local_218.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[1].ArrayNum = 0;
    local_218.ScalarResults[1].ArrayMax = 0;
    local_218.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[0].ArrayNum = 0;
    local_218.IntegerResults[0].ArrayMax = 0;
    local_218.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[1].ArrayNum = 0;
    local_218.IntegerResults[1].ArrayMax = 0;
    local_218.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[0].ArrayNum = 0;
    local_218.IndexResults[0].ArrayMax = 0;
    local_218.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[1].ArrayNum = 0;
    local_218.IndexResults[1].ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,(ForAnyElementType *)&local_218,0,&local_218.SamplePositions.ArrayMax);
    if (((local_218.SamplePositions.AllocatorInstance.Data <= param_2) &&
        (param_2 < local_218.SamplePositions.AllocatorInstance.Data +
                   (longlong)local_218.SamplePositions.ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    iVar10 = local_218.SamplePositions.ArrayNum;
    if (local_218.SamplePositions.ArrayNum == local_218.SamplePositions.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)&local_218,&local_218.SamplePositions.ArrayMax)
      ;
    }
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    local_280 = 0;
    local_218.SamplePositions.ArrayNum = iVar10 + 1;
    *(double *)(local_218.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18) =
         (param_2->field0_0x0)._s_0.X;
    *(double *)(local_218.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
         dVar5;
    *(double *)(local_218.SamplePositions.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 0x10) =
         (param_2->field0_0x0)._s_0.Z;
    bVar9 = local_218.SampleIndices.ArrayMax != 1;
    local_218.SampleIndices._8_8_ = (ulonglong)(uint)local_218.SampleIndices.ArrayMax << 0x20;
    iVar10 = 0;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,&local_218.SampleIndices.AllocatorInstance,0,
                 &local_218.SampleIndices.ArrayMax);
      iVar10 = local_218.SampleIndices.ArrayNum;
    }
    if ((local_218.SampleIndices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_280) &&
       ((FScriptContainerElement *)&local_280 <
        local_218.SampleIndices.AllocatorInstance.Data +
        (longlong)local_218.SampleIndices.ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        fVar13 = (float)(*pcVar4)();
        return fVar13;
      }
      iVar10 = local_218.SampleIndices.ArrayNum;
    }
    if (iVar10 == local_218.SampleIndices.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_218.SampleIndices.AllocatorInstance,
                          &local_218.SampleIndices.ArrayMax);
    }
    local_218.SampleIndices.ArrayNum = iVar10 + 1;
    local_288 = 0;
    *(undefined8 *)(local_218.SampleIndices.AllocatorInstance.Data + (longlong)iVar10 * 8) =
         local_280;
    bVar9 = local_218.ScalarResults[0].ArrayMax != 1;
    local_218.ScalarResults[0]._8_8_ = (ulonglong)(uint)local_218.ScalarResults[0].ArrayMax << 0x20;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,&local_218.ScalarResults[0].AllocatorInstance,0,
                 &local_218.ScalarResults[0].ArrayMax);
    }
    if (((local_218.ScalarResults[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_288
         ) && ((FScriptContainerElement *)&local_288 <
               local_218.ScalarResults[0].AllocatorInstance.Data +
               (longlong)local_218.ScalarResults[0].ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    iVar10 = local_218.ScalarResults[0].ArrayNum;
    if (local_218.ScalarResults[0].ArrayNum == local_218.ScalarResults[0].ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_218.ScalarResults[0].AllocatorInstance,
                          &local_218.ScalarResults[0].ArrayMax);
    }
    local_218.ScalarResults[0].ArrayNum = iVar10 + 1;
    local_284 = 0;
    *(undefined4 *)(local_218.ScalarResults[0].AllocatorInstance.Data + (longlong)iVar10 * 4) =
         local_288;
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&local_298.AllocatorInstance,0,&local_298.ArrayMax);
    if (((local_298.AllocatorInstance.Data <= (FScriptContainerElement *)&local_284) &&
        ((FScriptContainerElement *)&local_284 <
         local_298.AllocatorInstance.Data + (longlong)local_298.ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    iVar10 = local_298.ArrayNum;
    if (local_298.ArrayNum == local_298.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_298.AllocatorInstance,&local_298.ArrayMax);
    }
    local_298.ArrayNum = iVar10 + 1;
    local_230 = 0;
    local_268._16_8_ = 0;
    uStack_250 = 0;
    local_220 = 0;
    *(undefined4 *)(local_298.AllocatorInstance.Data + (longlong)iVar10 * 4) = local_284;
    local_268._0_8_ = (FScriptContainerElement *)0x0;
    local_268._8_8_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_f8,&local_218,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_268,pUVar11->TimeSeconds);
    local_220 = local_220 & 0xffffffff00000000;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_268,0,local_268._8_4_);
    iVar10 = SUB84(local_268._8_8_,4);
    local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
    uVar7 = _UNK_151aa2718;
    uVar6 = ___xmm_0000000a000000090000000400000003;
    local_278.Data = (FScriptContainerElement *)0x0;
    local_270 = 6;
    local_108 = 8;
    uStack_104 = 0xe;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&local_278,6,(int *)((longlong)&local_270 + 4));
    FVar8.Data = local_278.Data;
    local_118 = uVar6;
    uStack_110 = uVar7;
    *(undefined8 *)local_278.Data = uVar6;
    *(undefined8 *)(local_278.Data + 8) = uVar7;
    *(ulonglong *)(local_278.Data + 0x10) = CONCAT44(uStack_104,local_108);
    iVar10 = (int)local_270;
    local_278.Data = (FScriptContainerElement *)0x0;
    local_270 = 0;
    uVar12 = 0;
    if ((int)param_3 < iVar10) {
      uVar12 = ~param_3 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    EVar1 = *(EFieldPhysicsType *)(FVar8.Data + (longlong)(int)param_3 * 4);
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    pUVar2 = (pUVar11->PhysicsField).field0_0x0.DebugPtr;
    if ((pUVar2 != (UPhysicsFieldComponent *)0x0) &&
       (pFVar3 = pUVar2->FieldInstance, pFVar3 != (FPhysicsFieldInstance *)0x0)) {
      EvaluateFieldNodes<float,FScalarFieldAddOperator>
                (&pFVar3->FieldCommands,EVar1,(FFieldContext *)local_f8,local_218.ScalarResults,
                 &local_298);
      if ((local_298.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        fVar13 = (float)(*pcVar4)();
        return fVar13;
      }
      fVar13 = *(float *)local_298.AllocatorInstance.Data;
      if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
        (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
      }
      local_90 = 0;
      if ((void *)local_f8._96_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._96_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_f8 + 0x20);
      if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.AllocatorInstance.Data);
      }
      FFieldExecutionDatas::~FFieldExecutionDatas(&local_218);
      return fVar13;
    }
    if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
    }
    local_90 = 0;
    if ((void *)local_f8._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8 + 0x20);
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_218);
  }
  return 0.0;
}

// EvalPhysicsVectorField @ 148379570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __cdecl
UPhysicsFieldStatics::EvalPhysicsVectorField
          (TVector<double> *__return_storage_ptr__,UObject *param_1,TVector<double> *param_2,
          EFieldVectorType param_3)

{
  EFieldPhysicsType EVar1;
  UPhysicsFieldComponent *pUVar2;
  FPhysicsFieldInstance *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  int iVar15;
  UWorld *pUVar16;
  TVector<double> *pTVar17;
  uint uVar18;
  undefined1 auStackY_2f8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2a8;
  undefined8 local_298;
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined1 local_278 [24];
  undefined8 uStack_260;
  void *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  void *local_238;
  ulonglong local_230;
  FFieldExecutionDatas local_228;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [104];
  undefined4 local_a0;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_98;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pUVar16 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar16 != (UWorld *)0x0) {
    local_228.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.SamplePositions.ArrayNum = 0;
    local_228.SamplePositions.ArrayMax = 0;
    local_228.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.SampleIndices.ArrayNum = 0;
    local_228.SampleIndices.ArrayMax = 0;
    local_228.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ParticleHandles[0].ArrayNum = 0;
    local_228.ParticleHandles[0].ArrayMax = 0;
    local_228.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ParticleHandles[1].ArrayNum = 0;
    local_228.ParticleHandles[1].ArrayMax = 0;
    local_228.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.FieldOutputs[0].ArrayNum = 0;
    local_228.FieldOutputs[0].ArrayMax = 0;
    local_228.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.FieldOutputs[1].ArrayNum = 0;
    local_228.FieldOutputs[1].ArrayMax = 0;
    local_228.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.FieldOutputs[2].ArrayNum = 0;
    local_228.FieldOutputs[2].ArrayMax = 0;
    local_228.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.FieldOutputs[3].ArrayNum = 0;
    local_228.FieldOutputs[3].ArrayMax = 0;
    local_228.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.VectorResults[0].ArrayNum = 0;
    local_228.VectorResults[0].ArrayMax = 0;
    local_228.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.VectorResults[1].ArrayNum = 0;
    local_228.VectorResults[1].ArrayMax = 0;
    local_228.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ScalarResults[0].ArrayNum = 0;
    local_228.ScalarResults[0].ArrayMax = 0;
    local_228.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ScalarResults[1].ArrayNum = 0;
    local_228.ScalarResults[1].ArrayMax = 0;
    local_228.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.IntegerResults[0].ArrayNum = 0;
    local_228.IntegerResults[0].ArrayMax = 0;
    local_228.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.IntegerResults[1].ArrayNum = 0;
    local_228.IntegerResults[1].ArrayMax = 0;
    local_228.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.IndexResults[0].ArrayNum = 0;
    local_228.IndexResults[0].ArrayMax = 0;
    local_228.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.IndexResults[1].ArrayNum = 0;
    local_228.IndexResults[1].ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,(ForAnyElementType *)&local_228,0,&local_228.SamplePositions.ArrayMax);
    if (((local_228.SamplePositions.AllocatorInstance.Data <= param_2) &&
        (param_2 < local_228.SamplePositions.AllocatorInstance.Data +
                   (longlong)local_228.SamplePositions.ArrayMax * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TVector<double> *)(*pcVar4)();
      return pTVar17;
    }
    iVar15 = local_228.SamplePositions.ArrayNum;
    if (local_228.SamplePositions.ArrayNum == local_228.SamplePositions.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)&local_228,&local_228.SamplePositions.ArrayMax)
      ;
    }
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    local_298 = 0;
    local_228.SamplePositions.ArrayNum = iVar15 + 1;
    *(double *)(local_228.SamplePositions.AllocatorInstance.Data + (longlong)iVar15 * 0x18) =
         (param_2->field0_0x0)._s_0.X;
    *(double *)(local_228.SamplePositions.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) =
         dVar8;
    *(double *)(local_228.SamplePositions.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) =
         (param_2->field0_0x0)._s_0.Z;
    bVar14 = local_228.SampleIndices.ArrayMax != 1;
    local_228.SampleIndices._8_8_ = (ulonglong)(uint)local_228.SampleIndices.ArrayMax << 0x20;
    iVar15 = 0;
    if (bVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,&local_228.SampleIndices.AllocatorInstance,0,
                 &local_228.SampleIndices.ArrayMax);
      iVar15 = local_228.SampleIndices.ArrayNum;
    }
    if ((local_228.SampleIndices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_298) &&
       ((FScriptContainerElement *)&local_298 <
        local_228.SampleIndices.AllocatorInstance.Data +
        (longlong)local_228.SampleIndices.ArrayMax * 8)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        pTVar17 = (TVector<double> *)(*pcVar4)();
        return pTVar17;
      }
      iVar15 = local_228.SampleIndices.ArrayNum;
    }
    if (iVar15 == local_228.SampleIndices.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_228.SampleIndices.AllocatorInstance,
                          &local_228.SampleIndices.ArrayMax);
    }
    local_228.SampleIndices.ArrayNum = iVar15 + 1;
    *(undefined8 *)(local_228.SampleIndices.AllocatorInstance.Data + (longlong)iVar15 * 8) =
         local_298;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (local_228.VectorResults,&UE::Math::TVector<double>::ZeroVector,1);
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 0;
    local_2a8.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,&local_2a8.AllocatorInstance,0,&local_2a8.ArrayMax);
    if (((local_2a8.AllocatorInstance.Data <
          (FScriptContainerElement *)
          ((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1)) &&
        (&UE::Math::TVector<double>::ZeroVector <
         local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayMax * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TVector<double> *)(*pcVar4)();
      return pTVar17;
    }
    iVar15 = local_2a8.ArrayNum;
    if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
    }
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_240 = 0;
    local_2a8.ArrayNum = iVar15 + 1;
    local_278._16_8_ = 0;
    uStack_260 = 0;
    local_230 = 0;
    local_278._0_8_ = (FScriptContainerElement *)0x0;
    local_278._8_8_ = 0;
    *(double *)(local_2a8.AllocatorInstance.Data + (longlong)iVar15 * 0x18) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(local_2a8.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) = uVar9;
    local_258 = (void *)0x0;
    *(double *)(local_2a8.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_250 = 0;
    local_24c = 0x80;
    local_248 = 0xffffffff;
    local_244 = 0;
    local_238 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_108,&local_228,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_278,pUVar16->TimeSeconds);
    local_230 = local_230 & 0xffffffff00000000;
    if (local_238 != (void *)0x0) {
      FMemory::Free(local_238);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_278,0,local_278._8_4_);
    iVar15 = SUB84(local_278._8_8_,4);
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    if (iVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_278,0,(int *)(local_278 + 0xc));
    }
    local_248 = 0xffffffff;
    local_244 = 0;
    local_250 = 0;
    if (0x80 < local_24c) {
      local_24c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),0);
    }
    if (local_258 != (void *)0x0) {
      FMemory::Free(local_258);
    }
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
    uVar12 = _UNK_151aa2748;
    uVar11 = ___xmm_0000001300000012000000110000000d;
    uVar10 = _UNK_151aa2708;
    uVar9 = ___xmm_00000007000000060000000500000002;
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,8,0,&local_290,8,(int *)((longlong)&local_288 + 4));
    FVar13.Data = local_290.Data;
    local_128 = uVar9;
    uStack_120 = uVar10;
    local_118 = uVar11;
    uStack_110 = uVar12;
    *(undefined8 *)local_290.Data = uVar9;
    *(undefined8 *)(local_290.Data + 8) = uVar10;
    *(undefined8 *)(local_290.Data + 0x10) = uVar11;
    *(undefined8 *)(local_290.Data + 0x18) = uVar12;
    iVar15 = (int)local_288;
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 0;
    uVar18 = 0;
    if ((int)param_3 < iVar15) {
      uVar18 = ~param_3 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TVector<double> *)(*pcVar4)();
      return pTVar17;
    }
    EVar1 = *(EFieldPhysicsType *)(FVar13.Data + (longlong)(int)param_3 * 4);
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    pUVar2 = (pUVar16->PhysicsField).field0_0x0.DebugPtr;
    if ((pUVar2 != (UPhysicsFieldComponent *)0x0) &&
       (pFVar3 = pUVar2->FieldInstance, pFVar3 != (FPhysicsFieldInstance *)0x0)) {
      EvaluateFieldNodes<UE::Math::TVector<double>,FVectorFieldAddOperator>
                (&pFVar3->FieldCommands,EVar1,(FFieldContext *)local_108,local_228.VectorResults,
                 &local_2a8);
      if ((local_2a8.ArrayNum < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pTVar17 = (TVector<double> *)(*pcVar4)();
        return pTVar17;
      }
      uVar5 = *(undefined4 *)(local_2a8.AllocatorInstance.Data + 4);
      uVar6 = *(undefined4 *)(local_2a8.AllocatorInstance.Data + 8);
      uVar7 = *(undefined4 *)(local_2a8.AllocatorInstance.Data + 0xc);
      *(undefined4 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined4 *)local_2a8.AllocatorInstance.Data;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar5;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar6;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           *(double *)(local_2a8.AllocatorInstance.Data + 0x10);
      if (local_98.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
        (**(code **)(local_98.Ptr)->_padding_)(local_98.Ptr,1);
      }
      local_a0 = 0;
      if ((void *)local_108._96_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._96_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_108 + 0x20);
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      FFieldExecutionDatas::~FFieldExecutionDatas(&local_228);
      return __return_storage_ptr__;
    }
    if (local_98.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_98.Ptr)->_padding_)(local_98.Ptr,1);
    }
    local_a0 = 0;
    if ((void *)local_108._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_108 + 0x20);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_228);
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1483871d0

UClass * __cdecl UPhysicsFieldStatics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsFieldStatics",
               &Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton,
               StaticRegisterNativesUPhysicsFieldStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsFieldStatics>,
               InternalVTableHelperCtorCaller<UPhysicsFieldStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsFieldStatics.InnerSingleton;
}

// StaticRegisterNativesUPhysicsFieldStatics @ 1483af730

void __cdecl UPhysicsFieldStatics::StaticRegisterNativesUPhysicsFieldStatics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsFieldStatics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEvalPhysicsIntegerField @ 1483bf240

void __cdecl
UPhysicsFieldStatics::execEvalPhysicsIntegerField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  UObject *local_res18 [2];
  TVector<double> local_38;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar3 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = EvalPhysicsIntegerField(local_res18[0],pTVar3,(uint)local_res10[0]);
  *(int *)param_3 = iVar2;
  return;
}

// execEvalPhysicsScalarField @ 1483bf360

void __cdecl
UPhysicsFieldStatics::execEvalPhysicsScalarField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  byte local_res10 [8];
  UObject *local_res18 [2];
  TVector<double> local_38;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar2 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = EvalPhysicsScalarField(local_res18[0],pTVar2,(uint)local_res10[0]);
  *(float *)param_3 = fVar3;
  return;
}

// execEvalPhysicsVectorField @ 1483bf480

void __cdecl
UPhysicsFieldStatics::execEvalPhysicsVectorField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  UObject *local_res18 [2];
  TVector<double> local_48;
  TVector<double> local_30;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pTVar3 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = EvalPhysicsVectorField(&local_30,local_res18[0],pTVar3,(uint)local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

