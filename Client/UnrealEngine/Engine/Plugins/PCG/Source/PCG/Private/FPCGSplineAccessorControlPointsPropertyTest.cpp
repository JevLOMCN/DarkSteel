// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// GetTestFlags @ 149f877c0

EAutomationTestFlags __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetTestFlags
          (FPCGSplineAccessorControlPointsPropertyTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f877d0

bool __thiscall
FPCGSplineAccessorControlPointsPropertyTest::IsStressTest
          (FPCGSplineAccessorControlPointsPropertyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f877e0

uint __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetRequiredDeviceNum
          (FPCGSplineAccessorControlPointsPropertyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f877f0

FString * __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetTestSourceFileName
          (FPCGSplineAccessorControlPointsPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Accessors\\PCGSplineAccessorTests.cpp.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f87820

int __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetTestSourceFileLine
          (FPCGSplineAccessorControlPointsPropertyTest *this)

{
  return 0xe;
}

// GetTests @ 149f87830

/* WARNING: Removing unreachable block (ram,0x000149f8791d) */
/* WARNING: Removing unreachable block (ram,0x000149f879e8) */

void __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetTests
          (FPCGSplineAccessorControlPointsPropertyTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Accessor.Splines.ControlPointProperty");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 149f87a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGSplineAccessorControlPointsPropertyTest::RunTest
          (FPCGSplineAccessorControlPointsPropertyTest *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  IPCGAttributeAccessorKeys *pIVar3;
  IPCGAttributeAccessor *this_00;
  undefined8 this_01;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  UPCGSplineData *this_02;
  FName *pFVar9;
  TQuat<double> *pTVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  IPCGAttributeAccessorKeys *local_res18;
  IPCGAttributeAccessor *local_res20;
  ForAnyElementType local_4a8;
  int local_4a0 [2];
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_498;
  TArray<int,TSizedDefaultAllocator<32>_> local_488;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  FPCGCrc local_438;
  TObjectPtr<UPCGMetadata>_u_0 local_430;
  uint local_428;
  TObjectPtr<UPCGMetadata>_u_0 local_420;
  TObjectPtr<UPCGMetadata>_u_0 local_418;
  EPCGExtraProperties local_410;
  FPCGAttributePropertySelector local_408;
  FPCGAttributePropertySelector local_3c8;
  FPCGAttributePropertySelector local_388;
  FPCGAttributePropertySelector local_348;
  FPCGAttributePropertySelector local_308;
  FPCGAttributePropertySelector local_2c8;
  FPCGAttributePropertySelector local_288;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  FPCGSplineAccessorControlPointsPropertyTest *local_208;
  undefined4 local_200;
  IPCGAttributeAccessorKeys **local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_140;
  FString local_130;
  FString local_120;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  FName local_e0;
  FName local_d8 [2];
  TArrayView<int,int> local_c8;
  TArrayView<__int64,int> local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  TQuat<double> local_88 [2];
  ulonglong uVar16;
  
  pUVar8 = GetTransientPackageAsObject();
  this_02 = NewObject<UPCGSplineData>(pUVar8);
  uVar17 = 0;
  local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.ArrayNum = 0;
  local_498.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,10,&local_498.AllocatorInstance,0,&local_498.ArrayMax);
  uVar14 = uVar17;
  uVar16 = uVar17;
  uVar19 = uVar17;
  do {
    iVar6 = (int)uVar14;
    dVar21 = (double)iVar6;
    dVar22 = (double)(int)uVar16;
    dVar23 = (double)(int)uVar19;
    if (local_498.ArrayNum == local_498.ArrayMax) {
      local_498.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x888,&local_498.AllocatorInstance,&local_498.ArrayMax);
    }
    iVar18 = local_498.ArrayNum + 1;
    uVar14 = (ulonglong)(iVar6 + 1);
    uVar15 = (int)uVar16 + 3;
    uVar16 = (ulonglong)uVar15;
    lVar11 = (longlong)local_498.ArrayNum * 0x88;
    uVar19 = (ulonglong)((int)uVar19 + 2);
    *(float *)(local_498.AllocatorInstance.Data + lVar11) = (float)iVar6;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 8) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 8 + 8) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x18) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x20) = dVar23;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x20 + 8) = dVar23;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x30) = dVar23;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x38) = dVar22;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x38 + 8) = dVar22;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x48) = dVar22;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x50) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x50 + 8) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x60) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x60 + 8) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x70) = dVar21;
    *(double *)(local_498.AllocatorInstance.Data + lVar11 + 0x70 + 8) = dVar21;
    local_498.AllocatorInstance.Data[lVar11 + 0x80] = (FScriptContainerElement)0x4;
    local_498.ArrayNum = iVar18;
  } while ((int)uVar15 < 0x1e);
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  UPCGSplineData::Initialize
            (this_02,&local_498,false,&UE::Math::TTransform<double>::Identity,&local_140);
  local_210 = 0;
  local_308._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_308.Selection = Attribute;
  local_308.DomainName.ComparisonIndex.Value = 0;
  local_308.DomainName.Number = 0;
  local_308.AttributeName.ComparisonIndex.Value = 0;
  local_308.AttributeName.Number = 0;
  local_308.PropertyName.ComparisonIndex.Value = 0;
  local_308.PropertyName.Number = 0;
  local_308.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.ExtraNames.ArrayNum = 0;
  local_308.ExtraNames.ArrayMax = 0;
  local_308.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_308,(FName)0x0,true);
  FPCGAttributePropertySelector::SetExtraProperty(&local_308,Index,true);
  DestructItems<FString,int>
            ((FString *)local_308.ExtraNames.AllocatorInstance.Data,local_308.ExtraNames.ArrayNum);
  iVar6 = local_308.ExtraNames.ArrayMax;
  local_308.ExtraNames._8_8_ = (ulonglong)(uint)local_308.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_308.ExtraNames.ArrayNum = 0;
    local_308.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_308.ExtraNames.AllocatorInstance,0,
               &local_308.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_308.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)(local_458 + 8),(FPCGAttributePropertySelector *)this_02,
             SUB81(&local_308,0));
  DestructItems<FString,int>
            ((FString *)local_308.ExtraNames.AllocatorInstance.Data,local_308.ExtraNames.ArrayNum);
  if (local_308.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.ExtraNames.AllocatorInstance.Data);
  }
  local_248 = 0;
  pFVar9 = ::FName::FName(&local_e8,L"Position");
  FVar1 = *pFVar9;
  local_2c8._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_2c8.Selection = Attribute;
  local_2c8.DomainName.ComparisonIndex.Value = 0;
  local_2c8.DomainName.Number = 0;
  local_2c8.AttributeName.ComparisonIndex.Value = 0;
  local_2c8.AttributeName.Number = 0;
  local_2c8.PropertyName.ComparisonIndex.Value = 0;
  local_2c8.PropertyName.Number = 0;
  local_2c8.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ExtraNames.ArrayNum = 0;
  local_2c8.ExtraNames.ArrayMax = 0;
  local_2c8.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_2c8,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_2c8,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_2c8.ExtraNames.AllocatorInstance.Data,local_2c8.ExtraNames.ArrayNum);
  iVar6 = local_2c8.ExtraNames.ArrayMax;
  local_2c8.ExtraNames._8_8_ = (ulonglong)(uint)local_2c8.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_2c8.ExtraNames.ArrayNum = 0;
    local_2c8.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_2c8.ExtraNames.AllocatorInstance,0,
               &local_2c8.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_2c8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)local_458,(FPCGAttributePropertySelector *)this_02,SUB81(&local_2c8,0));
  DestructItems<FString,int>
            ((FString *)local_2c8.ExtraNames.AllocatorInstance.Data,local_2c8.ExtraNames.ArrayNum);
  if (local_2c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.ExtraNames.AllocatorInstance.Data);
  }
  local_240 = 0;
  pFVar9 = ::FName::FName(&local_e0,L"ArriveTangent");
  FVar1 = *pFVar9;
  local_348._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_348.Selection = Attribute;
  local_348.DomainName.ComparisonIndex.Value = 0;
  local_348.DomainName.Number = 0;
  local_348.AttributeName.ComparisonIndex.Value = 0;
  local_348.AttributeName.Number = 0;
  local_348.PropertyName.ComparisonIndex.Value = 0;
  local_348.PropertyName.Number = 0;
  local_348.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.ExtraNames.ArrayNum = 0;
  local_348.ExtraNames.ArrayMax = 0;
  local_348.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_348,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_348,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_348.ExtraNames.AllocatorInstance.Data,local_348.ExtraNames.ArrayNum);
  iVar6 = local_348.ExtraNames.ArrayMax;
  local_348.ExtraNames._8_8_ = (ulonglong)(uint)local_348.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_348.ExtraNames.ArrayNum = 0;
    local_348.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_348.ExtraNames.AllocatorInstance,0,
               &local_348.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_348.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)(local_468 + 8),(FPCGAttributePropertySelector *)this_02,
             SUB81(&local_348,0));
  DestructItems<FString,int>
            ((FString *)local_348.ExtraNames.AllocatorInstance.Data,local_348.ExtraNames.ArrayNum);
  if (local_348.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.ExtraNames.AllocatorInstance.Data);
  }
  local_238 = 0;
  pFVar9 = ::FName::FName(&local_90,L"LeaveTangent");
  FVar1 = *pFVar9;
  local_388._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_388.Selection = Attribute;
  local_388.DomainName.ComparisonIndex.Value = 0;
  local_388.DomainName.Number = 0;
  local_388.AttributeName.ComparisonIndex.Value = 0;
  local_388.AttributeName.Number = 0;
  local_388.PropertyName.ComparisonIndex.Value = 0;
  local_388.PropertyName.Number = 0;
  local_388.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.ExtraNames.ArrayNum = 0;
  local_388.ExtraNames.ArrayMax = 0;
  local_388.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_388,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_388,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_388.ExtraNames.AllocatorInstance.Data,local_388.ExtraNames.ArrayNum);
  iVar6 = local_388.ExtraNames.ArrayMax;
  local_388.ExtraNames._8_8_ = (ulonglong)(uint)local_388.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_388.ExtraNames.ArrayNum = 0;
    local_388.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_388.ExtraNames.AllocatorInstance,0,
               &local_388.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_388.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)local_468,(FPCGAttributePropertySelector *)this_02,SUB81(&local_388,0));
  DestructItems<FString,int>
            ((FString *)local_388.ExtraNames.AllocatorInstance.Data,local_388.ExtraNames.ArrayNum);
  if (local_388.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.ExtraNames.AllocatorInstance.Data);
  }
  local_230 = 0;
  pFVar9 = ::FName::FName(&local_98,L"Rotation");
  FVar1 = *pFVar9;
  local_3c8._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_3c8.Selection = Attribute;
  local_3c8.DomainName.ComparisonIndex.Value = 0;
  local_3c8.DomainName.Number = 0;
  local_3c8.AttributeName.ComparisonIndex.Value = 0;
  local_3c8.AttributeName.Number = 0;
  local_3c8.PropertyName.ComparisonIndex.Value = 0;
  local_3c8.PropertyName.Number = 0;
  local_3c8.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.ExtraNames.ArrayNum = 0;
  local_3c8.ExtraNames.ArrayMax = 0;
  local_3c8.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_3c8,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_3c8,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_3c8.ExtraNames.AllocatorInstance.Data,local_3c8.ExtraNames.ArrayNum);
  iVar6 = local_3c8.ExtraNames.ArrayMax;
  local_3c8.ExtraNames._8_8_ = (ulonglong)(uint)local_3c8.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_3c8.ExtraNames.ArrayNum = 0;
    local_3c8.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_3c8.ExtraNames.AllocatorInstance,0,
               &local_3c8.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_3c8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)(local_478 + 8),(FPCGAttributePropertySelector *)this_02,
             SUB81(&local_3c8,0));
  DestructItems<FString,int>
            ((FString *)local_3c8.ExtraNames.AllocatorInstance.Data,local_3c8.ExtraNames.ArrayNum);
  if (local_3c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ExtraNames.AllocatorInstance.Data);
  }
  local_228 = 0;
  pFVar9 = ::FName::FName(&local_a0,L"Scale");
  FVar1 = *pFVar9;
  local_408._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_408.Selection = Attribute;
  local_408.DomainName.ComparisonIndex.Value = 0;
  local_408.DomainName.Number = 0;
  local_408.AttributeName.ComparisonIndex.Value = 0;
  local_408.AttributeName.Number = 0;
  local_408.PropertyName.ComparisonIndex.Value = 0;
  local_408.PropertyName.Number = 0;
  local_408.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ExtraNames.ArrayNum = 0;
  local_408.ExtraNames.ArrayMax = 0;
  local_408.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_408,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_408,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_408.ExtraNames.AllocatorInstance.Data,local_408.ExtraNames.ArrayNum);
  iVar6 = local_408.ExtraNames.ArrayMax;
  local_408.ExtraNames._8_8_ = (ulonglong)(uint)local_408.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_408.ExtraNames.ArrayNum = 0;
    local_408.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_408.ExtraNames.AllocatorInstance,0,
               &local_408.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_408.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)local_478,(FPCGAttributePropertySelector *)this_02,SUB81(&local_408,0));
  DestructItems<FString,int>
            ((FString *)local_408.ExtraNames.AllocatorInstance.Data,local_408.ExtraNames.ArrayNum);
  if (local_408.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.ExtraNames.AllocatorInstance.Data);
  }
  local_220 = 0;
  pFVar9 = ::FName::FName(&local_a8,L"InterpType");
  FVar1 = *pFVar9;
  local_288._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_288.Selection = Attribute;
  local_288.DomainName.ComparisonIndex.Value = 0;
  local_288.DomainName.Number = 0;
  local_288.AttributeName.ComparisonIndex.Value = 0;
  local_288.AttributeName.Number = 0;
  local_288.PropertyName.ComparisonIndex.Value = 0;
  local_288.PropertyName.Number = 0;
  local_288.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ExtraNames.ArrayNum = 0;
  local_288.ExtraNames.ArrayMax = 0;
  local_288.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetDomainName(&local_288,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName(&local_288,FVar1,true);
  DestructItems<FString,int>
            ((FString *)local_288.ExtraNames.AllocatorInstance.Data,local_288.ExtraNames.ArrayNum);
  iVar6 = local_288.ExtraNames.ArrayMax;
  local_288.ExtraNames._8_8_ = (ulonglong)(uint)local_288.ExtraNames.ArrayMax << 0x20;
  if (iVar6 == 0) {
    local_288.ExtraNames.ArrayNum = 0;
    local_288.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar6,&local_288.ExtraNames.AllocatorInstance,0,
               &local_288.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_288.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)&local_res20,(FPCGAttributePropertySelector *)this_02,SUB81(&local_288,0));
  DestructItems<FString,int>
            ((FString *)local_288.ExtraNames.AllocatorInstance.Data,local_288.ExtraNames.ArrayNum);
  if (local_288.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.ExtraNames.AllocatorInstance.Data);
  }
  local_218 = 0;
  pFVar9 = ::FName::FName(local_d8,L"Position");
  FVar1 = *pFVar9;
  local_448._0_8_ = &___7FPCGAttributePropertySelector__6B_;
  local_448._8_8_ = (UPCGMetadata *)0x0;
  local_438.Value = 0;
  local_438.bValid = false;
  local_438._5_3_ = 0;
  local_430.DebugPtr = (UPCGMetadata *)0x0;
  local_428 = 0;
  local_420.DebugPtr = (UPCGMetadata *)0x0;
  local_418.DebugPtr = (UPCGMetadata *)0x0;
  local_410 = Index;
  FPCGAttributePropertySelector::SetDomainName
            ((FPCGAttributePropertySelector *)local_448,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPropertyName
            ((FPCGAttributePropertySelector *)local_448,FVar1,true);
  DestructItems<FString,int>((FString *)local_420.DebugPtr,local_418._0_4_);
  uVar4 = local_418._4_4_;
  local_418.DebugPtr = (UPCGMetadata *)((ulonglong)(uint)local_418._4_4_ << 0x20);
  if ((atomic<int>)uVar4 == (atomic<int>)0x0) {
    local_418.DebugPtr = (UPCGMetadata *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,uVar4,(ForAnyElementType *)&local_420.ObjectPtr,0,
               (int *)((longlong)&local_418.ObjectPtr.field0_0x0 + 4));
    ConstructItems<FString,FString,int>(local_420.DebugPtr,(FString *)0x0,0);
  }
  PCGAttributeAccessorHelpers::CreateKeys
            ((UPCGData *)&local_res18,(FPCGAttributePropertySelector *)this_02);
  DestructItems<FString,int>((FString *)local_420.DebugPtr,local_418._0_4_);
  if (local_420.DebugPtr != (UPCGMetadata *)0x0) {
    FMemory::Free(local_420.DebugPtr);
  }
  bVar20 = (IPCGAttributeAccessor *)local_458._8_8_ != (IPCGAttributeAccessor *)0x0;
  ::FString::FString(&local_150,"Index accessor is valid");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar12.Data = local_150.Data.AllocatorInstance.Data;
  }
  bVar20 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (bVar20) {
    bVar20 = (IPCGAttributeAccessor *)local_458._0_8_ != (IPCGAttributeAccessor *)0x0;
    ::FString::FString(&local_120,"Position accessor is valid");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar12.Data = local_120.Data.AllocatorInstance.Data;
    }
    bVar20 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar20) {
      bVar20 = (undefined8 *)local_468._8_8_ != (undefined8 *)0x0;
      ::FString::FString(&local_1f0,"ArriveTangent accessor is valid");
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_1f0.Data.ArrayNum != 0) {
        FVar12.Data = local_1f0.Data.AllocatorInstance.Data;
      }
      bVar20 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (bVar20) {
        bVar20 = (IPCGAttributeAccessor *)local_468._0_8_ != (IPCGAttributeAccessor *)0x0;
        ::FString::FString(&local_1e0,"LeaveTangent accessor is valid");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_1e0.Data.ArrayNum != 0) {
          FVar12.Data = local_1e0.Data.AllocatorInstance.Data;
        }
        bVar20 = FAutomationTestBase::TestTrue
                           ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (bVar20) {
          bVar20 = (undefined8 *)local_478._8_8_ != (undefined8 *)0x0;
          ::FString::FString(&local_1d0,"Rotation accessor is valid");
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_1d0.Data.ArrayNum != 0) {
            FVar12.Data = local_1d0.Data.AllocatorInstance.Data;
          }
          bVar20 = FAutomationTestBase::TestTrue
                             ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (bVar20) {
            bVar20 = (IPCGAttributeAccessor *)local_478._0_8_ != (IPCGAttributeAccessor *)0x0;
            ::FString::FString(&local_1c0,"Scale accessor is valid");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_1c0.Data.ArrayNum != 0) {
              FVar12.Data = local_1c0.Data.AllocatorInstance.Data;
            }
            bVar20 = FAutomationTestBase::TestTrue
                               ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
            if (bVar20) {
              bVar20 = local_res20 != (IPCGAttributeAccessor *)0x0;
              ::FString::FString(&local_1b0,"InterpType accessor is valid");
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_1b0.Data.ArrayNum != 0) {
                FVar12.Data = local_1b0.Data.AllocatorInstance.Data;
              }
              bVar20 = FAutomationTestBase::TestTrue
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
              if (bVar20) {
                bVar20 = local_res18 != (IPCGAttributeAccessorKeys *)0x0;
                ::FString::FString(&local_130,"Keys are valid");
                FVar12.Data = (FScriptContainerElement *)L"";
                if (local_130.Data.ArrayNum != 0) {
                  FVar12.Data = local_130.Data.AllocatorInstance.Data;
                }
                bVar20 = FAutomationTestBase::TestTrue
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
                if (bVar20) {
                  iVar6 = (**(code **)(local_res18->_padding_ + 0x10))();
                  ::FString::FString(&local_1a0,"Number of keys");
                  FVar12.Data = (FScriptContainerElement *)L"";
                  if (local_1a0.Data.ArrayNum != 0) {
                    FVar12.Data = local_1a0.Data.AllocatorInstance.Data;
                  }
                  bVar20 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar6,10);
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                  if (bVar20) {
                    local_1f8 = &local_res18;
                    local_200 = 10;
                    local_208 = this;
                    `FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
                    operator()<UE::Math::TVector<double>_>
                              (&local_208,
                               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>
                                *)local_458,&UE::Math::TVector<double>::OneVector,L"Position");
                    `FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
                    operator()<UE::Math::TVector<double>_>
                              (&local_208,
                               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>
                                *)(local_468 + 8),&UE::Math::TVector<double>::OneVector,
                               L"ArriveTangent");
                    `FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
                    operator()<UE::Math::TVector<double>_>
                              (&local_208,
                               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>
                                *)local_468,&UE::Math::TVector<double>::OneVector,L"LeaveTangent");
                    pTVar10 = UE::Math::TQuat<double>::MakeFromEuler
                                        (local_88,&UE::Math::TVector<double>::OneVector);
                    `FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
                    operator()<UE::Math::TQuat<double>_>
                              (&local_208,
                               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>
                                *)(local_478 + 8),pTVar10,L"Rotation");
                    `FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
                    operator()<UE::Math::TVector<double>_>
                              (&local_208,
                               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>
                                *)local_478,&UE::Math::TVector<double>::OneVector,L"Scale");
                    local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_488.ArrayNum = 0;
                    local_488.ArrayMax = 0;
                    local_4a8.Data = (FScriptContainerElement *)0x0;
                    local_4a0[0] = 0;
                    local_4a0[1] = 0;
                    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_488,10,Default);
                    if (local_4a0[0] < 10) {
                      iVar18 = 10 - local_4a0[0];
                      iVar6 = UE::Core::Private::
                              ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (8,8,iVar18,&local_4a8,local_4a0,local_4a0 + 1);
                      memset(local_4a8.Data + (longlong)iVar6 * 8,0,(longlong)iVar18 << 3);
                    }
                    else if (10 < local_4a0[0]) {
                      iVar6 = local_4a0[0] + -10;
                      if (iVar6 < 0) {
                        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           );
                        if (bVar20) {
                          pcVar2 = (code *)swi(3);
                          uVar5 = (*pcVar2)();
                          return (bool)uVar5;
                        }
                      }
                      else if (iVar6 == 0) goto LAB_149f88866;
                      iVar7 = (local_4a0[0] - iVar6) + -10;
                      iVar18 = local_4a0[0];
                      if (iVar7 != 0) {
                        memmove(local_4a8.Data + 0x50,local_4a8.Data + 0x50 + (longlong)iVar6 * 8,
                                (longlong)iVar7 << 3);
                        iVar18 = local_4a0[0];
                      }
                      local_4a0[0] = iVar18 - iVar6;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,&local_4a8,iVar18 - iVar6,local_4a0 + 1);
                    }
LAB_149f88866:
                    this_01 = local_458._8_8_;
                    pIVar3 = local_res18;
                    iVar6 = local_488.ArrayNum;
                    local_108 = local_488.AllocatorInstance.Data;
                    if ((local_488.ArrayNum < 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar20)) {
                      pcVar2 = (code *)swi(3);
                      uVar5 = (*pcVar2)();
                      return (bool)uVar5;
                    }
                    iStack_100 = iVar6;
                    local_c8._12_4_ = uStack_fc;
                    local_c8.ArrayNum = iVar6;
                    local_c8.DataPtr = (int *)local_108;
                    bVar20 = IPCGAttributeAccessor::GetRange<int>
                                       ((IPCGAttributeAccessor *)this_01,&local_c8,0,pIVar3,
                                        StrictType);
                    ::FString::FString(&local_190,"GetRange on Index succeeded");
                    FVar12.Data = (FScriptContainerElement *)L"";
                    if (local_190.Data.ArrayNum != 0) {
                      FVar12.Data = local_190.Data.AllocatorInstance.Data;
                    }
                    bVar20 = FAutomationTestBase::TestTrue
                                       ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20);
                    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_190.Data.AllocatorInstance.Data);
                    }
                    this_00 = local_res20;
                    pIVar3 = local_res18;
                    if (bVar20) {
                      iVar6 = local_4a0[0];
                      local_f8 = local_4a8.Data;
                      if ((local_4a0[0] < 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar20)) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                      iStack_f0 = iVar6;
                      local_b8._12_4_ = uStack_ec;
                      local_b8.ArrayNum = iVar6;
                      local_b8.DataPtr = (long64 *)local_f8;
                      bVar20 = IPCGAttributeAccessor::GetRange<__int64>
                                         (this_00,&local_b8,0,pIVar3,StrictType);
                      ::FString::FString(&local_180,"GetRange on InterpTypes succeeded");
                      FVar12.Data = (FScriptContainerElement *)L"";
                      if (local_180.Data.ArrayNum != 0) {
                        FVar12.Data = local_180.Data.AllocatorInstance.Data;
                      }
                      bVar20 = FAutomationTestBase::TestTrue
                                         ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar20)
                      ;
                      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_180.Data.AllocatorInstance.Data);
                      }
                      uVar14 = uVar17;
                      uVar16 = uVar17;
                      if (!bVar20) goto LAB_149f88b44;
                      do {
                        iVar6 = (int)uVar14;
                        if ((local_488.ArrayNum <= iVar6) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar20)) {
                          pcVar2 = (code *)swi(3);
                          uVar5 = (*pcVar2)();
                          return (bool)uVar5;
                        }
                        iVar18 = *(int *)(local_488.AllocatorInstance.Data + uVar16);
                        ::FString::FString(&local_170,"Index");
                        FVar12.Data = (FScriptContainerElement *)L"";
                        if (local_170.Data.ArrayNum != 0) {
                          FVar12.Data = local_170.Data.AllocatorInstance.Data;
                        }
                        bVar20 = FAutomationTestBase::TestEqual
                                           ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,
                                            iVar18,iVar6);
                        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_170.Data.AllocatorInstance.Data);
                        }
                        if (!bVar20) goto LAB_149f88b44;
                        if ((local_4a0[0] <= iVar6) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar20)) {
                          pcVar2 = (code *)swi(3);
                          uVar5 = (*pcVar2)();
                          return (bool)uVar5;
                        }
                        FVar12.Data = local_4a8.Data;
                        ::FString::FString(&local_160,"InterpType");
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_160.Data.ArrayNum != 0) {
                          FVar13.Data = local_160.Data.AllocatorInstance.Data;
                        }
                        bVar20 = FAutomationTestBase::TestEqual
                                           ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                            *(long64 *)(FVar12.Data + uVar17),4);
                        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_160.Data.AllocatorInstance.Data);
                        }
                        if (!bVar20) goto LAB_149f88b44;
                        uVar17 = uVar17 + 8;
                        uVar14 = (ulonglong)(iVar6 + 1U);
                        uVar16 = uVar16 + 4;
                      } while ((int)(iVar6 + 1U) < 10);
                      bVar20 = true;
                    }
                    else {
LAB_149f88b44:
                      bVar20 = false;
                    }
                    if (local_4a8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4a8.Data);
                    }
                    if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_488.AllocatorInstance.Data);
                    }
                    goto LAB_149f88b68;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar20 = false;
LAB_149f88b68:
  if (local_res18 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  if (local_res20 != (IPCGAttributeAccessor *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  if ((IPCGAttributeAccessor *)local_478._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_478._0_8_)(local_478._0_8_,1);
  }
  if ((undefined8 *)local_478._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_478._8_8_)(local_478._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_468._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_468._0_8_)(local_468._0_8_,1);
  }
  if ((undefined8 *)local_468._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_468._8_8_)(local_468._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_458._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_458._0_8_)(local_458._0_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_458._8_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_458._8_8_)(local_458._8_8_,1);
  }
  if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  return bVar20;
}

// GetBeautifiedTestName @ 149f88c90

FString * __thiscall
FPCGSplineAccessorControlPointsPropertyTest::GetBeautifiedTestName
          (FPCGSplineAccessorControlPointsPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Accessor.Splines.ControlPointProperty");
  return __return_storage_ptr__;
}

// operator()<UE::Math::TQuat<double>_> @ 149f899f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
operator()<UE::Math::TQuat<double>_>
          (void *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *param_1,
          TQuat<double> *param_2,wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FAutomationTestBase *pFVar5;
  IPCGAttributeAccessor *pIVar6;
  IPCGAttributeAccessorKeys *pIVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  FString *pFVar25;
  ForAnyElementType FVar26;
  TQuat<double> *pTVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 local_res10 [8];
  ForAnyElementType local_178;
  undefined8 local_170;
  ForAnyElementType local_168;
  int local_160 [2];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TQuat<double> *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TQuat<double> *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TQuat<double> *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FString local_b8;
  TArrayView<UE::Math::TQuat<double>,int> local_a8;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_98;
  TArrayView<UE::Math::TQuat<double>,int> local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  uVar28 = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_158,10,Default);
  if (local_170._4_4_ < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,10,&local_178,(int)local_170,(int *)((longlong)&local_170 + 4));
  }
  pFVar5 = *(FAutomationTestBase **)this;
  iVar29 = local_158.ArrayNum;
  pIVar6 = param_1->Ptr;
  pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
  local_f8 = (TQuat<double> *)local_158.AllocatorInstance.Data;
  if ((local_158.ArrayNum < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    uVar21 = (*pcVar9)();
    return (bool)uVar21;
  }
  iStack_f0 = iVar29;
  local_a8._12_4_ = uStack_ec;
  local_a8.ArrayNum = iVar29;
  local_a8.DataPtr = local_f8;
  bVar20 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                     (pIVar6,&local_a8,0,pIVar7,StrictType);
  ::FString::PrintfImpl(&local_148,L"GetRange on \'%s\' succeeded.");
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar26.Data = local_148.Data.AllocatorInstance.Data;
  }
  bVar20 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar26.Data,bVar20);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (bVar20) {
    iVar29 = local_158.ArrayNum;
    uVar24 = (ulonglong)local_158.ArrayNum;
    pTVar27 = (TQuat<double> *)(local_158.AllocatorInstance.Data + uVar24 * 0x20);
    FVar26.Data = local_158.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar24 != iVar29) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Math::TQuat<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      iVar22 = (int)local_170;
      if ((TQuat<double> *)FVar26.Data == pTVar27) break;
      dVar15 = param_2->X + ((TQuat<double> *)FVar26.Data)->X;
      dVar16 = param_2->Y + ((TQuat<double> *)FVar26.Data)->Y;
      uVar32 = SUB84(dVar16,0);
      uVar33 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar16 = ((TQuat<double> *)FVar26.Data)->Z + param_2->Z;
      dVar18 = ((TQuat<double> *)FVar26.Data)->W + param_2->W;
      uVar34 = SUB84(dVar18,0);
      uVar35 = (undefined4)((ulonglong)dVar18 >> 0x20);
      local_78._8_4_ = uVar32;
      local_78._0_8_ = dVar15;
      local_78._12_4_ = uVar33;
      local_68._8_4_ = uVar34;
      local_68._0_8_ = dVar16;
      local_68._12_4_ = uVar35;
      if ((int)local_170 == local_170._4_4_) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&local_178,(int *)((longlong)&local_170 + 4));
      }
      local_170 = CONCAT44(local_170._4_4_,iVar22 + 1);
      FVar26.Data = FVar26.Data + 0x20;
      auVar14._8_4_ = uVar32;
      auVar14._0_8_ = dVar15;
      auVar14._12_4_ = uVar33;
      *(undefined1 (*) [16])(local_178.Data + (longlong)iVar22 * 0x20) = auVar14;
      auVar17._8_4_ = uVar34;
      auVar17._0_8_ = dVar16;
      auVar17._12_4_ = uVar35;
      *(undefined1 (*) [16])(local_178.Data + (longlong)iVar22 * 0x20 + 0x10) = auVar17;
      uVar24 = local_158._8_8_ & 0xffffffff;
    }
    pIVar6 = param_1->Ptr;
    pFVar5 = *(FAutomationTestBase **)this;
    pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
    local_e8 = (TQuat<double> *)local_178.Data;
    if (((int)local_170 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      uVar21 = (*pcVar9)();
      return (bool)uVar21;
    }
    iStack_e0 = iVar22;
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iVar22;
    local_98.DataPtr = local_e8;
    bVar20 = IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
                       (pIVar6,&local_98,0,pIVar7,StrictType);
    ::FString::PrintfImpl(&local_138,L"SetRange on \'%s\' succeeded.");
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar26.Data = local_138.Data.AllocatorInstance.Data;
    }
    bVar20 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar26.Data,bVar20);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar20) {
      local_168.Data = (FScriptContainerElement *)0x0;
      local_160[0] = 0;
      local_160[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,10,&local_168,local_160,local_160 + 1);
      pIVar6 = param_1->Ptr;
      iStack_d0 = local_160[0];
      pFVar5 = *(FAutomationTestBase **)this;
      pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
      local_d8 = (TQuat<double> *)local_168.Data;
      if ((local_160[0] < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar9 = (code *)swi(3);
        uVar21 = (*pcVar9)();
        return (bool)uVar21;
      }
      local_88._12_4_ = uStack_cc;
      local_88.ArrayNum = iStack_d0;
      local_88.DataPtr = local_d8;
      bVar20 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                         (pIVar6,&local_88,0,pIVar7,StrictType);
      ::FString::FString(&local_128,"Second GetRange succeeded.");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar26.Data = local_128.Data.AllocatorInstance.Data;
      }
      bVar20 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar26.Data,bVar20);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      uVar24 = uVar28;
      if (bVar20) {
        do {
          plVar8 = *(longlong **)this;
          iVar29 = (int)uVar24;
          if ((local_158.ArrayNum <= iVar29) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          FVar26.Data = local_158.AllocatorInstance.Data;
          if ((local_160[0] <= iVar29) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          FVar19.Data = local_168.Data;
          uVar32 = 0x5201e3d0;
          pFVar25 = ::FString::PrintfImpl
                              (&local_118,
                               L"Value for \'%s\' at index \'%d\' was is different from the first get"
                              );
          pFVar3 = FVar26.Data + uVar28 + 0x10;
          pFVar4 = FVar19.Data + uVar28 + 0x10;
          lVar30 = -(ulonglong)(*(double *)(pFVar3 + 8) == *(double *)(pFVar4 + 8));
          pFVar1 = FVar26.Data + uVar28;
          pFVar2 = FVar19.Data + uVar28;
          lVar31 = -(ulonglong)(*(double *)(pFVar1 + 8) == *(double *)(pFVar2 + 8));
          auVar10._8_4_ = (int)lVar30;
          auVar10._0_8_ = -(ulonglong)(*(double *)pFVar3 == *(double *)pFVar4);
          auVar10._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
          iVar22 = movmskpd(uVar32,auVar10);
          auVar12._8_4_ = (int)lVar31;
          auVar12._0_8_ = -(ulonglong)(*(double *)pFVar1 == *(double *)pFVar2);
          auVar12._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          uVar23 = movmskpd((int)pFVar25,auVar12);
          if ((iVar22 << 2 | uVar23) == 0xf) {
            pcVar9 = *(code **)(*plVar8 + 0x28);
            ::FString::PrintfImpl(&local_c8,L"%s: The two values are equal.");
            (*pcVar9)(plVar8,&local_c8,0);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (bVar20) goto LAB_149f8a019;
          plVar8 = *(longlong **)this;
          if (((int)local_170 <= iVar29) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          FVar26.Data = local_178.Data;
          if ((local_160[0] <= iVar29) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          FVar19.Data = local_168.Data;
          uVar32 = 0x5201e460;
          pFVar25 = ::FString::PrintfImpl
                              (&local_108,L"Value for \'%s\' at index \'%d\' was set correctly");
          pFVar3 = FVar26.Data + uVar28 + 0x10;
          pFVar4 = FVar19.Data + uVar28 + 0x10;
          lVar30 = -(ulonglong)(*(double *)(pFVar3 + 8) != *(double *)(pFVar4 + 8));
          pFVar1 = FVar19.Data + uVar28;
          pFVar2 = FVar26.Data + uVar28;
          lVar31 = -(ulonglong)(*(double *)(pFVar1 + 8) != *(double *)(pFVar2 + 8));
          auVar11._8_4_ = (int)lVar30;
          auVar11._0_8_ = -(ulonglong)(*(double *)pFVar3 != *(double *)pFVar4);
          auVar11._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
          uVar23 = movmskpd(uVar32,auVar11);
          auVar13._8_4_ = (int)lVar31;
          auVar13._0_8_ = -(ulonglong)(*(double *)pFVar1 != *(double *)pFVar2);
          auVar13._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          iVar22 = movmskpd((int)pFVar25,auVar13);
          if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) {
            bVar20 = false;
          }
          else {
            pcVar9 = *(code **)(*plVar8 + 0x28);
            ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
            (*pcVar9)(plVar8,&local_b8,0);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            bVar20 = true;
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (bVar20) goto LAB_149f8a019;
          uVar28 = uVar28 + 0x20;
          uVar24 = (ulonglong)(iVar29 + 1U);
        } while ((int)(iVar29 + 1U) < 10);
        bVar20 = true;
      }
      else {
LAB_149f8a019:
        bVar20 = false;
      }
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      goto LAB_149f8a02e;
    }
  }
  bVar20 = false;
LAB_149f8a02e:
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if ((TQuat<double> *)local_158.AllocatorInstance.Data != (TQuat<double> *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return bVar20;
}

// operator()<UE::Math::TVector<double>_> @ 149f8a090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGSplineAccessorControlPointsPropertyTest::RunTest'::__l2::<lambda_1>::
operator()<UE::Math::TVector<double>_>
          (void *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *param_1,
          TVector<double> *param_2,wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  IPCGAttributeAccessor *pIVar5;
  FAutomationTestBase *pFVar6;
  IPCGAttributeAccessorKeys *pIVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *pTVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 local_res8 [8];
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *local_res10;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  int local_1a0 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  TArrayView<UE::Math::TVector<double>,int> local_f8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e8;
  TArrayView<UE::Math::TVector<double>,int> local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8 [4];
  
  uVar22 = 0;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  local_res10 = param_1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_198,10,Default);
  if (local_1b0._4_4_ < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,10,&local_1b8,(int)local_1b0,(int *)((longlong)&local_1b0 + 4));
  }
  pIVar5 = param_1->Ptr;
  iVar23 = local_198.ArrayNum;
  pFVar6 = *(FAutomationTestBase **)this;
  pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
  local_138 = local_198.AllocatorInstance.Data;
  if ((local_198.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    uVar18 = (*pcVar9)();
    return (bool)uVar18;
  }
  iStack_130 = iVar23;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = iVar23;
  local_f8.DataPtr = (TVector<double> *)local_138;
  bVar17 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                     (pIVar5,&local_f8,0,pIVar7,StrictType);
  ::FString::PrintfImpl(&local_188,L"GetRange on \'%s\' succeeded.");
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar21.Data = local_188.Data.AllocatorInstance.Data;
  }
  bVar17 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar21.Data,bVar17);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (bVar17) {
    iVar23 = local_198.ArrayNum;
    uVar20 = (ulonglong)local_198.ArrayNum;
    pFVar1 = local_198.AllocatorInstance.Data + uVar20 * 0x18;
    FVar21.Data = local_198.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar20 != iVar23) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pTVar15 = local_res10;
      iVar19 = (int)local_1b0;
      if (FVar21.Data == pFVar1) break;
      dVar4 = *(double *)(FVar21.Data + 8);
      dVar12 = (param_2->field0_0x0)._s_0.Y;
      dVar2 = (param_2->field0_0x0)._s_0.X;
      dVar3 = *(double *)FVar21.Data;
      dVar11 = *(double *)(FVar21.Data + 0x10) + (param_2->field0_0x0)._s_0.Z;
      if ((int)local_1b0 == local_1b0._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_1b8,(int *)((longlong)&local_1b0 + 4));
      }
      FVar21.Data = FVar21.Data + 0x18;
      local_1b0 = CONCAT44(local_1b0._4_4_,iVar19 + 1);
      *(double *)(local_1b8.Data + (longlong)iVar19 * 0x18) = dVar2 + dVar3;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ = dVar4 + dVar12;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(local_1b8.Data + (longlong)iVar19 * 0x18 + 8) = auVar10;
      uVar20 = local_198._8_8_ & 0xffffffff;
    }
    pFVar6 = *(FAutomationTestBase **)this;
    pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
    pIVar5 = local_res10->Ptr;
    local_128 = local_1b8.Data;
    if (((int)local_1b0 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      uVar18 = (*pcVar9)();
      return (bool)uVar18;
    }
    iStack_120 = iVar19;
    local_e8._12_4_ = uStack_11c;
    local_e8.ArrayNum = iVar19;
    local_e8.DataPtr = (TVector<double> *)local_128;
    bVar17 = IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
                       (pIVar5,&local_e8,0,pIVar7,StrictType);
    ::FString::PrintfImpl(&local_178,L"SetRange on \'%s\' succeeded.");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar21.Data = local_178.Data.AllocatorInstance.Data;
    }
    bVar17 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar21.Data,bVar17);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0[0] = 0;
      local_1a0[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,10,&local_1a8,local_1a0,local_1a0 + 1);
      iStack_110 = local_1a0[0];
      pFVar6 = *(FAutomationTestBase **)this;
      pIVar5 = pTVar15->Ptr;
      pIVar7 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10);
      local_118 = local_1a8.Data;
      if ((local_1a0[0] < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        uVar18 = (*pcVar9)();
        return (bool)uVar18;
      }
      local_d8._12_4_ = uStack_10c;
      local_d8.ArrayNum = iStack_110;
      local_d8.DataPtr = (TVector<double> *)local_118;
      bVar17 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                         (pIVar5,&local_d8,0,pIVar7,StrictType);
      ::FString::FString(&local_168,"Second GetRange succeeded.");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar21.Data = local_168.Data.AllocatorInstance.Data;
      }
      bVar17 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar21.Data,bVar17);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      fVar14 = __real_38d1b717;
      uVar20 = uVar22;
      if (bVar17) {
        do {
          plVar8 = *(longlong **)this;
          iVar23 = (int)uVar20;
          if ((local_198.ArrayNum <= iVar23) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar18 = (*pcVar9)();
            return (bool)uVar18;
          }
          FVar21.Data = local_198.AllocatorInstance.Data;
          if ((local_1a0[0] <= iVar23) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar18 = (*pcVar9)();
            return (bool)uVar18;
          }
          FVar16.Data = local_1a8.Data;
          ::FString::PrintfImpl
                    (&local_158,
                     L"Value for \'%s\' at index \'%d\' was is different from the first get");
          if (((*(double *)(FVar21.Data + uVar22) == *(double *)(FVar16.Data + uVar22)) &&
              (*(double *)(FVar21.Data + uVar22 + 8) == *(double *)(FVar16.Data + uVar22 + 8))) &&
             (*(double *)(FVar21.Data + uVar22 + 0x10) == *(double *)(FVar16.Data + uVar22 + 0x10)))
          {
            pcVar9 = *(code **)(*plVar8 + 0x28);
            ::FString::PrintfImpl(&local_108,L"%s: The two values are equal.");
            (*pcVar9)(plVar8,&local_108,0);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (bVar17) goto LAB_149f8a6a0;
          pFVar6 = *(FAutomationTestBase **)this;
          if (((int)local_1b0 <= iVar23) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar18 = (*pcVar9)();
            return (bool)uVar18;
          }
          dVar3 = *(double *)(local_1b8.Data + uVar22);
          dVar11 = *(double *)(local_1b8.Data + uVar22 + 8);
          dVar2 = *(double *)(local_1b8.Data + uVar22 + 0x10);
          if ((local_1a0[0] <= iVar23) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar18 = (*pcVar9)();
            return (bool)uVar18;
          }
          dVar12 = *(double *)(local_1a8.Data + uVar22);
          dVar13 = *(double *)(local_1a8.Data + uVar22 + 8);
          dVar4 = *(double *)(local_1a8.Data + uVar22 + 0x10);
          ::FString::PrintfImpl(&local_148,L"Value for \'%s\' at index \'%d\' was set correctly");
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_148.Data.ArrayNum != 0) {
            FVar21.Data = local_148.Data.AllocatorInstance.Data;
          }
          local_c8._s_0.X = dVar3;
          local_c8._s_0.Y = dVar11;
          local_c8._s_0.Z = dVar2;
          local_a8[0]._0_8_ = dVar12;
          local_a8[0]._8_8_ = dVar13;
          local_a8[0]._16_8_ = dVar4;
          bVar17 = FAutomationTestBase::TestEqual
                             (pFVar6,(wchar_t *)FVar21.Data,(TVector<double> *)&local_a8[0]._s_0,
                              (TVector<double> *)&local_c8._s_0,fVar14);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (!bVar17) goto LAB_149f8a6a0;
          uVar22 = uVar22 + 0x18;
          uVar20 = (ulonglong)(iVar23 + 1U);
        } while ((int)(iVar23 + 1U) < 10);
        bVar17 = true;
      }
      else {
LAB_149f8a6a0:
        bVar17 = false;
      }
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      goto LAB_149f8a6d0;
    }
  }
  bVar17 = false;
LAB_149f8a6d0:
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return bVar17;
}

