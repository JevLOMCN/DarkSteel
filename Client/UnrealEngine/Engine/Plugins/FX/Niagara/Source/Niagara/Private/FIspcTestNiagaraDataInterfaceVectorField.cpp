// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// GetTestFlags @ 148ee3c00

EAutomationTestFlags __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetTestFlags
          (FIspcTestNiagaraDataInterfaceVectorField *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148ee3c10

bool __thiscall
FIspcTestNiagaraDataInterfaceVectorField::IsStressTest
          (FIspcTestNiagaraDataInterfaceVectorField *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148ee3c20

uint __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetRequiredDeviceNum
          (FIspcTestNiagaraDataInterfaceVectorField *this)

{
  return 1;
}

// GetTestSourceFileName @ 148ee3c30

FString * __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetTestSourceFileName
          (FIspcTestNiagaraDataInterfaceVectorField *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\IspcTestNiagaraDataInterfaceVectorField.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148ee3c60

int __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetTestSourceFileLine
          (FIspcTestNiagaraDataInterfaceVectorField *this)

{
  return 0xe;
}

// GetTests @ 148ee3c70

/* WARNING: Removing unreachable block (ram,0x000148ee3d5d) */
/* WARNING: Removing unreachable block (ram,0x000148ee3e28) */

void __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetTests
          (FIspcTestNiagaraDataInterfaceVectorField *this,
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
  
  ::FString::FString(&local_18,"Ispc.Graphics.NiagaraDataInterfaceVectorField");
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

// RunTest @ 148ee3e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FIspcTestNiagaraDataInterfaceVectorField::RunTest
          (FIspcTestNiagaraDataInterfaceVectorField *this,FString *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  FAutomationTestBase *this_00;
  UObject *pUVar13;
  UNiagaraDataInterfaceVectorField *pUVar14;
  UVectorFieldStatic *pUVar15;
  void *pvVar16;
  ushort *puVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_1a8 [32];
  ushort local_15e;
  ushort local_15c;
  ushort local_15a;
  ushort local_158 [2];
  uint local_154 [3];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  FAutomationTestBase *local_130;
  FVectorVMExternalFunctionContext local_120;
  undefined1 local_90;
  undefined7 uStack_8f;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  float *local_70;
  float *local_68;
  float *local_60;
  uchar local_58 [8];
  ulonglong local_50;
  
  bVar8 = GNiagaraVectorFieldUseIspc;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_15e = 0;
  local_130 = (FAutomationTestBase *)this;
  FGenericPlatformMath::StoreHalf(&local_15e,__real_40a00000);
  local_15c = 0;
  FGenericPlatformMath::StoreHalf(&local_15c,__real_40c00000);
  local_15a = 0;
  FGenericPlatformMath::StoreHalf(&local_15a,__real_40e00000);
  local_158[0] = 0;
  FGenericPlatformMath::StoreHalf(local_158,0.0);
  local_154[0] = 0x41200000;
  local_154[1] = 0x41200000;
  local_154[2] = 0x41200000;
  GNiagaraVectorFieldUseIspc = true;
  local_144 = 0.0;
  local_13c = 0.0;
  local_134 = 0.0;
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UNiagaraDataInterfaceVectorField>(pUVar13);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UNiagaraDataInterfaceVectorField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar13 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UVectorFieldStatic>(pUVar13);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UVectorFieldStatic *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  lVar7 = _UNK_151d3bdb8;
  lVar6 = ___xmm_40490000000000004024000000000000;
  lVar5 = _UNK_15104e4d8;
  lVar4 = ___xmm_40240000000000004024000000000000;
  lVar3 = _UNK_150b2d2e8;
  lVar2 = ___xmm_40490000000000004049000000000000;
  if ((((pUVar14 != (UNiagaraDataInterfaceVectorField *)0x0) &&
       (((uint)pUVar14->_padding_ >> 0x1e & 1) == 0)) && (pUVar15 != (UVectorFieldStatic *)0x0)) &&
     (((uint)pUVar15->_padding_ >> 0x1e & 1) == 0)) {
    pUVar15->SizeX = 10;
    pUVar15->SizeY = 10;
    pUVar15->SizeZ = 10;
    *(undefined4 *)&pUVar15->_padding_ = 0x41200000;
    pUVar15->_padding_ = lVar4;
    pUVar15->_padding_ = lVar5;
    local_90 = 1;
    pUVar15->_padding_ = lVar6;
    pUVar15->_padding_ = lVar7;
    pUVar15->_padding_ = lVar2;
    pUVar15->_padding_ = lVar3;
    pUVar15->_padding_ = CONCAT71(uStack_8f,1);
    UVectorFieldStatic::InitResource(pUVar15);
    pUVar15->bAllowCPUAccess = true;
    uVar19 = pUVar15->SizeX * pUVar15->SizeZ * pUVar15->SizeY;
    FBulkData::Lock((FBulkData *)&pUVar15->SourceData,2);
    pvVar16 = FBulkData::Realloc((FBulkData *)&pUVar15->SourceData,(ulonglong)(uVar19 * 8),1);
    uVar12 = local_158[0];
    uVar11 = local_15a;
    uVar10 = local_15c;
    uVar9 = local_15e;
    if (uVar19 != 0) {
      puVar17 = (ushort *)((longlong)pvVar16 + 4);
      uVar18 = (ulonglong)uVar19;
      do {
        puVar17[-2] = local_15e;
        puVar17[-1] = local_15c;
        *puVar17 = local_15a;
        puVar17[1] = local_158[0];
        puVar17 = puVar17 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    FBulkData::Unlock((FBulkData *)&pUVar15->SourceData);
    UVectorFieldStatic::UpdateCPUData(pUVar15,true);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (pUVar14->Field).field0_0x0.DebugPtr = (UVectorField *)pUVar15;
    local_88 = local_154;
    local_58[0] = '\0';
    local_58[1] = '\x01';
    local_58[2] = '\x02';
    local_58[3] = '\x03';
    local_80 = local_154 + 1;
    local_78 = local_154 + 2;
    local_70 = &local_144;
    local_68 = &local_13c;
    local_60 = &local_134;
    local_120.RegisterData = &local_88;
    local_120.RegInc = local_58;
    local_120.UserPtrTable = (void **)0x0;
    local_120.NumUserPtrs = 0;
    local_120._52_4_ = 0;
    local_120.RandStream = (FRandomStream *)0x0;
    local_120.StartInstance = 0;
    local_120.NumInstances = 1;
    local_120.RandCounters = (int **)0x0;
    local_120.DataSets.DataPtr = (FDataSetMeta *)0x0;
    local_120.RegReadCount = 0;
    local_120.NumRegisters = 6;
    local_120.DataSets.ArrayNum = 0;
    local_120.DataSets._12_4_ = 0;
    local_120._88_8_ = 0;
    local_120.NumLoops = 0;
    local_120.PerInstanceFnInstanceIdx = 0;
    local_58[4] = '\x04';
    local_58[5] = '\x05';
    UNiagaraDataInterfaceVectorField::SampleVectorField(pUVar14,&local_120);
    GNiagaraVectorFieldUseIspc = false;
    local_148 = 0.0;
    local_140 = 0.0;
    local_138 = 0.0;
    pUVar13 = GetTransientPackageAsObject();
    pUVar14 = NewObject<UNiagaraDataInterfaceVectorField>(pUVar13);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UNiagaraDataInterfaceVectorField *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pUVar13 = GetTransientPackageAsObject();
    pUVar15 = NewObject<UVectorFieldStatic>(pUVar13);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UVectorFieldStatic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    lVar7 = _UNK_151d3bdb8;
    lVar6 = ___xmm_40490000000000004024000000000000;
    lVar5 = _UNK_15104e4d8;
    lVar4 = ___xmm_40240000000000004024000000000000;
    lVar3 = _UNK_150b2d2e8;
    lVar2 = ___xmm_40490000000000004049000000000000;
    if ((((pUVar14 != (UNiagaraDataInterfaceVectorField *)0x0) &&
         (((uint)pUVar14->_padding_ >> 0x1e & 1) == 0)) && (pUVar15 != (UVectorFieldStatic *)0x0))
       && (((uint)pUVar15->_padding_ >> 0x1e & 1) == 0)) {
      pUVar15->SizeX = 10;
      pUVar15->SizeY = 10;
      pUVar15->SizeZ = 10;
      *(undefined4 *)&pUVar15->_padding_ = 0x41200000;
      pUVar15->_padding_ = lVar4;
      pUVar15->_padding_ = lVar5;
      local_90 = 1;
      pUVar15->_padding_ = lVar6;
      pUVar15->_padding_ = lVar7;
      pUVar15->_padding_ = lVar2;
      pUVar15->_padding_ = lVar3;
      pUVar15->_padding_ = CONCAT71(uStack_8f,1);
      UVectorFieldStatic::InitResource(pUVar15);
      pUVar15->bAllowCPUAccess = true;
      uVar19 = pUVar15->SizeZ * pUVar15->SizeY * pUVar15->SizeX;
      FBulkData::Lock((FBulkData *)&pUVar15->SourceData,2);
      pvVar16 = FBulkData::Realloc((FBulkData *)&pUVar15->SourceData,(ulonglong)(uVar19 * 8),1);
      if (uVar19 != 0) {
        puVar17 = (ushort *)((longlong)pvVar16 + 4);
        uVar18 = (ulonglong)uVar19;
        do {
          puVar17[-2] = uVar9;
          puVar17[-1] = uVar10;
          *puVar17 = uVar11;
          puVar17[1] = uVar12;
          puVar17 = puVar17 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      FBulkData::Unlock((FBulkData *)&pUVar15->SourceData);
      UVectorFieldStatic::UpdateCPUData(pUVar15,true);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      (pUVar14->Field).field0_0x0.DebugPtr = (UVectorField *)pUVar15;
      local_88 = local_154;
      local_58[0] = '\0';
      local_58[1] = '\x01';
      local_58[2] = '\x02';
      local_58[3] = '\x03';
      local_80 = local_154 + 1;
      local_78 = local_154 + 2;
      local_70 = &local_148;
      local_68 = &local_140;
      local_60 = &local_138;
      local_120.RegisterData = &local_88;
      local_120.RegInc = local_58;
      local_120.UserPtrTable = (void **)0x0;
      local_120.NumUserPtrs = 0;
      local_120._52_4_ = 0;
      local_120.RandStream = (FRandomStream *)0x0;
      local_120.StartInstance = 0;
      local_120.NumInstances = 1;
      local_120.RandCounters = (int **)0x0;
      local_120.DataSets.DataPtr = (FDataSetMeta *)0x0;
      local_120.RegReadCount = 0;
      local_120.NumRegisters = 6;
      local_120.DataSets.ArrayNum = 0;
      local_120.DataSets._12_4_ = 0;
      local_120._88_8_ = 0;
      local_120.NumLoops = 0;
      local_120.PerInstanceFnInstanceIdx = 0;
      local_58[4] = '\x04';
      local_58[5] = '\x05';
      UNiagaraDataInterfaceVectorField::SampleVectorField(pUVar14,&local_120);
      this_00 = local_130;
      fVar1 = __real_38d1b717;
      GNiagaraVectorFieldUseIspc = bVar8;
      FAutomationTestBase::TestEqual(local_130,L"X",local_144,local_148,__real_38d1b717);
      FAutomationTestBase::TestEqual(this_00,L"Y",local_13c,local_140,fVar1);
      FAutomationTestBase::TestEqual(this_00,L"Z",local_134,local_138,fVar1);
      return true;
    }
  }
  return false;
}

// GetBeautifiedTestName @ 148ee4440

FString * __thiscall
FIspcTestNiagaraDataInterfaceVectorField::GetBeautifiedTestName
          (FIspcTestNiagaraDataInterfaceVectorField *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Graphics.NiagaraDataInterfaceVectorField");
  return __return_storage_ptr__;
}

