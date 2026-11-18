// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// DoMultiSourceMultiDestinations2D<1> @ 146f17e10

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
FEQSHelpers::FBatchTrace::DoMultiSourceMultiDestinations2D<1>
          (FBatchTrace *this,TArray<FRayStartEnd,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TVector<double>_u_0 *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  uVar9 = 0;
  iVar6 = param_1->ArrayNum;
  local_70._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_70._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = uVar9;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + uVar10;
      local_88._s_0.X = (double)*(undefined8 *)pFVar1;
      local_88._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_88._s_0.Z = (double)*(undefined8 *)(pFVar2 + uVar10 + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + uVar10 + 0x18;
      local_58._s_0.X = (double)*(undefined8 *)pFVar1;
      local_58._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      local_58._s_0.Z = local_88._s_0.Z;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = RunBoxTrace(this,(TVector<double> *)&local_88._s_0,
                          (TVector<double> *)
                          ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30 + 0x18),
                          (TVector<double> *)&local_70._s_0);
      if ((bVar4) || (this->TraceMode != Discard)) {
        dStack_28 = 0.0;
        pTVar7 = &local_70;
        if (!bVar4) {
          pTVar7 = &local_58;
        }
        local_40 = (pTVar7->_s_0).X;
        dStack_38 = pTVar7->XYZ[1];
        local_30 = pTVar7->XYZ[2];
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)iVar6 * 0x20;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
        pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
        *(double *)pFVar2 = local_30;
        *(double *)(pFVar2 + 8) = dStack_28;
      }
      iVar6 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x30;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return;
}

// DoMultiSourceMultiDestinations2D<2> @ 146f180f0

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
FEQSHelpers::FBatchTrace::DoMultiSourceMultiDestinations2D<2>
          (FBatchTrace *this,TArray<FRayStartEnd,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TVector<double>_u_0 *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  uVar9 = 0;
  iVar6 = param_1->ArrayNum;
  local_70._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_70._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = uVar9;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + uVar10;
      local_88._s_0.X = (double)*(undefined8 *)pFVar1;
      local_88._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_88._s_0.Z = (double)*(undefined8 *)(pFVar2 + uVar10 + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + uVar10 + 0x18;
      local_58._s_0.X = (double)*(undefined8 *)pFVar1;
      local_58._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      local_58._s_0.Z = local_88._s_0.Z;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = RunSphereTrace(this,(TVector<double> *)&local_88._s_0,
                             (TVector<double> *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30 + 0x18
                             ),(TVector<double> *)&local_70._s_0);
      if ((bVar4) || (this->TraceMode != Discard)) {
        dStack_28 = 0.0;
        pTVar7 = &local_70;
        if (!bVar4) {
          pTVar7 = &local_58;
        }
        local_40 = (pTVar7->_s_0).X;
        dStack_38 = pTVar7->XYZ[1];
        local_30 = pTVar7->XYZ[2];
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)iVar6 * 0x20;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
        pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
        *(double *)pFVar2 = local_30;
        *(double *)(pFVar2 + 8) = dStack_28;
      }
      iVar6 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x30;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return;
}

// DoMultiSourceMultiDestinations2D<3> @ 146f183d0

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
FEQSHelpers::FBatchTrace::DoMultiSourceMultiDestinations2D<3>
          (FBatchTrace *this,TArray<FRayStartEnd,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TVector<double>_u_0 *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  uVar9 = 0;
  iVar6 = param_1->ArrayNum;
  local_70._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_70._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = uVar9;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + uVar10;
      local_88._s_0.X = (double)*(undefined8 *)pFVar1;
      local_88._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_88._s_0.Z = (double)*(undefined8 *)(pFVar2 + uVar10 + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + uVar10 + 0x18;
      local_58._s_0.X = (double)*(undefined8 *)pFVar1;
      local_58._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      local_58._s_0.Z = local_88._s_0.Z;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = RunCapsuleTrace(this,(TVector<double> *)&local_88._s_0,
                              (TVector<double> *)
                              ((param_1->AllocatorInstance).Data +
                              (longlong)(int)uVar8 * 0x30 + 0x18),(TVector<double> *)&local_70._s_0)
      ;
      if ((bVar4) || (this->TraceMode != Discard)) {
        dStack_28 = 0.0;
        pTVar7 = &local_70;
        if (!bVar4) {
          pTVar7 = &local_58;
        }
        local_40 = (pTVar7->_s_0).X;
        dStack_38 = pTVar7->XYZ[1];
        local_30 = pTVar7->XYZ[2];
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)iVar6 * 0x20;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
        pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
        *(double *)pFVar2 = local_30;
        *(double *)(pFVar2 + 8) = dStack_28;
      }
      iVar6 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x30;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return;
}

// DoMultiSourceMultiDestinations2D<0> @ 146f186b0

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
FEQSHelpers::FBatchTrace::DoMultiSourceMultiDestinations2D<0>
          (FBatchTrace *this,TArray<FRayStartEnd,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double>_u_0 local_160;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  undefined1 local_128 [24];
  double dStack_110;
  double local_108;
  int local_84;
  FWeakObjectPtr local_70;
  FWeakObjectPtr FStack_68;
  IActorInstanceManagerInterface *local_60;
  undefined8 uStack_58;
  
  uVar8 = 0;
  iVar6 = param_1->ArrayNum;
  local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar10;
      local_160._s_0.X = (double)*(undefined8 *)pFVar1;
      local_160._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_160._s_0.Z = (double)*(undefined8 *)(pFVar2 + lVar10 + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar10 + 0x18;
      local_148 = *(double *)pFVar1;
      uStack_140 = *(undefined8 *)(pFVar1 + 8);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      local_138 = local_160._s_0.Z;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memset(local_128,0,0x100);
      local_198 = 0;
      uStack_190 = 0;
      uStack_17b = 0;
      uStack_179 = 0;
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      FStack_68.ObjectIndex = 0;
      FStack_68.ObjectSerialNumber = 0;
      local_188 = 0;
      uStack_180 = 0xffffffff;
      uStack_17c = 0;
      uStack_58._0_4_ = -1;
      uStack_58._4_1_ = Invalid;
      uStack_58._5_3_ = 0;
      local_128._4_4_ = 1.0;
      local_84 = -1;
      local_60 = (IActorInstanceManagerInterface *)0x0;
      bVar4 = UWorld::LineTraceSingleByChannel
                        (this->World,(FHitResult *)local_128,(TVector<double> *)&local_160._s_0,
                         (TVector<double> *)
                         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30 + 0x18),
                         this->Channel,&this->QueryParams,&this->ResponseParams);
      local_168 = local_108;
      local_178 = (double)local_128._16_8_;
      dStack_170 = dStack_110;
      if ((bVar4) || (this->TraceMode != Discard)) {
        dStack_1a0 = 0.0;
        pdVar7 = &local_178;
        if (!bVar4) {
          pdVar7 = &local_148;
        }
        local_1b8 = *pdVar7;
        dStack_1b0 = pdVar7[1];
        local_1a8 = pdVar7[2];
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)iVar6 * 0x20;
        *(double *)pFVar1 = local_1b8;
        *(double *)(pFVar1 + 8) = dStack_1b0;
        pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
        *(double *)pFVar2 = local_1a8;
        *(double *)(pFVar2 + 8) = dStack_1a0;
      }
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// DoProject<1> @ 146f189e0

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
FEQSHelpers::FBatchTrace::DoProject<1>
          (FBatchTrace *this,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,float param_2
          ,float param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [5];
  
  uVar10 = param_1->ArrayNum - 1;
  local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10;
    lVar12 = lVar13 << 5;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_c0._s_0.Z = (double)param_3 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_c0._s_0.X = (double)*(undefined8 *)pFVar8;
      local_c0._s_0.Y = (double)*(undefined8 *)(pFVar8 + 8);
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_a8[0]._16_8_ = (double)param_2 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_a8[0]._0_8_ = *(undefined8 *)pFVar8;
      local_a8[0]._8_8_ = *(undefined8 *)(pFVar8 + 8);
      FVar6 = (FScriptContainerElement)
              RunBoxTrace(this,(TVector<double> *)&local_a8[0]._s_0,
                          (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
      uVar4 = local_d8._s_0.Y;
      uVar3 = local_d8._s_0.X;
      if ((bool)FVar6) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        dVar2 = (double)param_4 + local_d8._s_0.Z;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar12) = uVar3;
        *(undefined8 *)(pFVar8 + lVar12 + 8) = uVar4;
        *(double *)(pFVar8 + lVar12 + 0x10) = dVar2;
        *(undefined8 *)(pFVar8 + lVar12 + 0x18) = 0;
      }
      else if (this->TraceMode == Discard) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar12;
        iVar9 = param_1->ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar8,pFVar8 + 0x20,(longlong)iVar9 << 5);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
      }
      if ((int)uVar10 < (this->TraceHits).ArrayNum) {
        uVar7 = 0;
        if ((int)uVar10 < (this->TraceHits).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->TraceHits).AllocatorInstance.Data[lVar13] = FVar6;
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + -0x20;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// DoProject<2> @ 146f18d20

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
FEQSHelpers::FBatchTrace::DoProject<2>
          (FBatchTrace *this,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,float param_2
          ,float param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [5];
  
  uVar10 = param_1->ArrayNum - 1;
  local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10;
    lVar12 = lVar13 << 5;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_c0._s_0.Z = (double)param_3 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_c0._s_0.X = (double)*(undefined8 *)pFVar8;
      local_c0._s_0.Y = (double)*(undefined8 *)(pFVar8 + 8);
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_a8[0]._16_8_ = (double)param_2 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_a8[0]._0_8_ = *(undefined8 *)pFVar8;
      local_a8[0]._8_8_ = *(undefined8 *)(pFVar8 + 8);
      FVar6 = (FScriptContainerElement)
              RunSphereTrace(this,(TVector<double> *)&local_a8[0]._s_0,
                             (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
      uVar4 = local_d8._s_0.Y;
      uVar3 = local_d8._s_0.X;
      if ((bool)FVar6) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        dVar2 = (double)param_4 + local_d8._s_0.Z;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar12) = uVar3;
        *(undefined8 *)(pFVar8 + lVar12 + 8) = uVar4;
        *(double *)(pFVar8 + lVar12 + 0x10) = dVar2;
        *(undefined8 *)(pFVar8 + lVar12 + 0x18) = 0;
      }
      else if (this->TraceMode == Discard) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar12;
        iVar9 = param_1->ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar8,pFVar8 + 0x20,(longlong)iVar9 << 5);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
      }
      if ((int)uVar10 < (this->TraceHits).ArrayNum) {
        uVar7 = 0;
        if ((int)uVar10 < (this->TraceHits).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->TraceHits).AllocatorInstance.Data[lVar13] = FVar6;
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + -0x20;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// DoProject<3> @ 146f19060

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
FEQSHelpers::FBatchTrace::DoProject<3>
          (FBatchTrace *this,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,float param_2
          ,float param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [5];
  
  uVar10 = param_1->ArrayNum - 1;
  local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10;
    lVar12 = lVar13 << 5;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_c0._s_0.Z = (double)param_3 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_c0._s_0.X = (double)*(undefined8 *)pFVar8;
      local_c0._s_0.Y = (double)*(undefined8 *)(pFVar8 + 8);
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_a8[0]._16_8_ = (double)param_2 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_a8[0]._0_8_ = *(undefined8 *)pFVar8;
      local_a8[0]._8_8_ = *(undefined8 *)(pFVar8 + 8);
      FVar6 = (FScriptContainerElement)
              RunCapsuleTrace(this,(TVector<double> *)&local_a8[0]._s_0,
                              (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
      uVar4 = local_d8._s_0.Y;
      uVar3 = local_d8._s_0.X;
      if ((bool)FVar6) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        dVar2 = (double)param_4 + local_d8._s_0.Z;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar12) = uVar3;
        *(undefined8 *)(pFVar8 + lVar12 + 8) = uVar4;
        *(double *)(pFVar8 + lVar12 + 0x10) = dVar2;
        *(undefined8 *)(pFVar8 + lVar12 + 0x18) = 0;
      }
      else if (this->TraceMode == Discard) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar12;
        iVar9 = param_1->ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar8,pFVar8 + 0x20,(longlong)iVar9 << 5);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
      }
      if ((int)uVar10 < (this->TraceHits).ArrayNum) {
        uVar7 = 0;
        if ((int)uVar10 < (this->TraceHits).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->TraceHits).AllocatorInstance.Data[lVar13] = FVar6;
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + -0x20;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// DoProject<0> @ 146f193a0

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
FEQSHelpers::FBatchTrace::DoProject<0>
          (FBatchTrace *this,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,float param_2
          ,float param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [5];
  
  uVar10 = param_1->ArrayNum - 1;
  local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10;
    lVar12 = lVar13 << 5;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_c0._s_0.Z = (double)param_3 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_c0._s_0.X = (double)*(undefined8 *)pFVar8;
      local_c0._s_0.Y = (double)*(undefined8 *)(pFVar8 + 8);
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      local_a8[0]._16_8_ = (double)param_2 + *(double *)(pFVar8 + lVar12 + 0x10);
      pFVar8 = pFVar8 + lVar12;
      local_a8[0]._0_8_ = *(undefined8 *)pFVar8;
      local_a8[0]._8_8_ = *(undefined8 *)(pFVar8 + 8);
      FVar6 = (FScriptContainerElement)
              RunLineTrace(this,(TVector<double> *)&local_a8[0]._s_0,
                           (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
      uVar4 = local_d8._s_0.Y;
      uVar3 = local_d8._s_0.X;
      if ((bool)FVar6) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        dVar2 = (double)param_4 + local_d8._s_0.Z;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar12) = uVar3;
        *(undefined8 *)(pFVar8 + lVar12 + 8) = uVar4;
        *(double *)(pFVar8 + lVar12 + 0x10) = dVar2;
        *(undefined8 *)(pFVar8 + lVar12 + 0x18) = 0;
      }
      else if (this->TraceMode == Discard) {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar12;
        iVar9 = param_1->ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar8,pFVar8 + 0x20,(longlong)iVar9 << 5);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
      }
      if ((int)uVar10 < (this->TraceHits).ArrayNum) {
        uVar7 = 0;
        if ((int)uVar10 < (this->TraceHits).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->TraceHits).AllocatorInstance.Data[lVar13] = FVar6;
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + -0x20;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// DoSingleSourceMultiDestinations<1> @ 146f196e0

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
FEQSHelpers::FBatchTrace::DoSingleSourceMultiDestinations<1>
          (FBatchTrace *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  
  uVar13 = param_2->ArrayNum - 1;
  local_68._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_68._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar13) {
    lVar12 = (longlong)(int)uVar13 << 5;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar7 = RunBoxTrace(this,param_1,
                          (TVector<double> *)((param_2->AllocatorInstance).Data + lVar12),
                          (TVector<double> *)&local_68._s_0);
      if (bVar7) {
        dStack_38 = 0.0;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        local_50 = local_68._s_0.X;
        dStack_48 = local_68._s_0.Y;
        local_40 = local_68._s_0.Z;
        uVar3 = local_68._0_4_;
        uVar4 = local_68._4_4_;
        uVar5 = local_68._8_4_;
        uVar6 = local_68._12_4_;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar9 = pFVar1 + lVar12;
        *(undefined4 *)pFVar9 = uVar3;
        *(undefined4 *)(pFVar9 + 4) = uVar4;
        *(undefined4 *)(pFVar9 + 8) = uVar5;
        *(undefined4 *)(pFVar9 + 0xc) = uVar6;
        pFVar1 = pFVar1 + lVar12 + 0x10;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
      }
      else if (this->TraceMode == Discard) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data + lVar12;
        iVar10 = param_2->ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar9,pFVar9 + 0x20,(longlong)iVar10 << 5);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
      }
      lVar12 = lVar12 + -0x20;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return;
}

// DoSingleSourceMultiDestinations<2> @ 146f198f0

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
FEQSHelpers::FBatchTrace::DoSingleSourceMultiDestinations<2>
          (FBatchTrace *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  
  uVar13 = param_2->ArrayNum - 1;
  local_68._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_68._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar13) {
    lVar12 = (longlong)(int)uVar13 << 5;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar7 = RunSphereTrace(this,param_1,
                             (TVector<double> *)((param_2->AllocatorInstance).Data + lVar12),
                             (TVector<double> *)&local_68._s_0);
      if (bVar7) {
        dStack_38 = 0.0;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        local_50 = local_68._s_0.X;
        dStack_48 = local_68._s_0.Y;
        local_40 = local_68._s_0.Z;
        uVar3 = local_68._0_4_;
        uVar4 = local_68._4_4_;
        uVar5 = local_68._8_4_;
        uVar6 = local_68._12_4_;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar9 = pFVar1 + lVar12;
        *(undefined4 *)pFVar9 = uVar3;
        *(undefined4 *)(pFVar9 + 4) = uVar4;
        *(undefined4 *)(pFVar9 + 8) = uVar5;
        *(undefined4 *)(pFVar9 + 0xc) = uVar6;
        pFVar1 = pFVar1 + lVar12 + 0x10;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
      }
      else if (this->TraceMode == Discard) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data + lVar12;
        iVar10 = param_2->ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar9,pFVar9 + 0x20,(longlong)iVar10 << 5);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
      }
      lVar12 = lVar12 + -0x20;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return;
}

// DoSingleSourceMultiDestinations<3> @ 146f19b00

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
FEQSHelpers::FBatchTrace::DoSingleSourceMultiDestinations<3>
          (FBatchTrace *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  
  uVar13 = param_2->ArrayNum - 1;
  local_68._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_68._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar13) {
    lVar12 = (longlong)(int)uVar13 << 5;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar7 = RunCapsuleTrace(this,param_1,
                              (TVector<double> *)((param_2->AllocatorInstance).Data + lVar12),
                              (TVector<double> *)&local_68._s_0);
      if (bVar7) {
        dStack_38 = 0.0;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        local_50 = local_68._s_0.X;
        dStack_48 = local_68._s_0.Y;
        local_40 = local_68._s_0.Z;
        uVar3 = local_68._0_4_;
        uVar4 = local_68._4_4_;
        uVar5 = local_68._8_4_;
        uVar6 = local_68._12_4_;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar9 = pFVar1 + lVar12;
        *(undefined4 *)pFVar9 = uVar3;
        *(undefined4 *)(pFVar9 + 4) = uVar4;
        *(undefined4 *)(pFVar9 + 8) = uVar5;
        *(undefined4 *)(pFVar9 + 0xc) = uVar6;
        pFVar1 = pFVar1 + lVar12 + 0x10;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
      }
      else if (this->TraceMode == Discard) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data + lVar12;
        iVar10 = param_2->ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar9,pFVar9 + 0x20,(longlong)iVar10 << 5);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
      }
      lVar12 = lVar12 + -0x20;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return;
}

// DoSingleSourceMultiDestinations<0> @ 146f19d10

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
FEQSHelpers::FBatchTrace::DoSingleSourceMultiDestinations<0>
          (FBatchTrace *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  
  uVar13 = param_2->ArrayNum - 1;
  local_68._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_68._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (-1 < (int)uVar13) {
    lVar12 = (longlong)(int)uVar13 << 5;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar7 = RunLineTrace(this,param_1,
                           (TVector<double> *)((param_2->AllocatorInstance).Data + lVar12),
                           (TVector<double> *)&local_68._s_0);
      if (bVar7) {
        dStack_38 = 0.0;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        local_50 = local_68._s_0.X;
        dStack_48 = local_68._s_0.Y;
        local_40 = local_68._s_0.Z;
        uVar3 = local_68._0_4_;
        uVar4 = local_68._4_4_;
        uVar5 = local_68._8_4_;
        uVar6 = local_68._12_4_;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar9 = pFVar1 + lVar12;
        *(undefined4 *)pFVar9 = uVar3;
        *(undefined4 *)(pFVar9 + 4) = uVar4;
        *(undefined4 *)(pFVar9 + 8) = uVar5;
        *(undefined4 *)(pFVar9 + 0xc) = uVar6;
        pFVar1 = pFVar1 + lVar12 + 0x10;
        *(double *)pFVar1 = local_40;
        *(double *)(pFVar1 + 8) = dStack_38;
      }
      else if (this->TraceMode == Discard) {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data + lVar12;
        iVar10 = param_2->ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar9,pFVar9 + 0x20,(longlong)iVar10 << 5);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
      }
      lVar12 = lVar12 + -0x20;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return;
}

// RunBoxTrace @ 146f67460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEQSHelpers::FBatchTrace::RunBoxTrace
          (FBatchTrace *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  ECollisionChannel EVar1;
  UWorld *this_00;
  double dVar2;
  bool bVar3;
  TQuat<double> *pTVar4;
  FCollisionShape local_1a8;
  TRotator<double> local_198;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  TQuat<double> local_138;
  undefined1 local_118 [24];
  double dStack_100;
  double local_f8;
  int local_74;
  FWeakObjectPtr local_60;
  FWeakObjectPtr FStack_58;
  IActorInstanceManagerInterface *local_50;
  undefined8 uStack_48;
  
  memset(local_118,0,0x100);
  this_00 = this->World;
  EVar1 = this->Channel;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  FStack_58.ObjectIndex = 0;
  FStack_58.ObjectSerialNumber = 0;
  uStack_180 = 0xffffffff;
  local_1a8.field1_0x4.Box.HalfExtentY = (float)(this->Extent).field0_0x0._s_0.Y;
  uStack_17b = 0;
  uStack_179 = 0;
  local_198.Roll = 0.0;
  uStack_17c = 0;
  local_118._4_4_ = 1.0;
  uStack_48._0_4_ = -1;
  uStack_48._4_1_ = Invalid;
  uStack_48._5_3_ = 0;
  local_74 = -1;
  local_1a8.ShapeType = Box;
  local_50 = (IActorInstanceManagerInterface *)0x0;
  local_1a8.field1_0x4.Box.HalfExtentX = (float)(this->Extent).field0_0x0._s_0.X;
  local_1a8.field1_0x4.Box.HalfExtentZ = (float)(this->Extent).field0_0x0._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_178._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_178._8_4_ = SUB84(dVar2,0);
  local_178._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_178._s_0,&local_198);
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_198,&local_138);
  local_158.X = pTVar4->X;
  local_158.Y = pTVar4->Y;
  local_158.Z = pTVar4->Z;
  local_158.W = pTVar4->W;
  bVar3 = UWorld::SweepSingleByChannel
                    (this_00,(FHitResult *)local_118,param_1,param_2,&local_158,EVar1,&local_1a8,
                     &this->QueryParams,&this->ResponseParams);
  (param_3->field0_0x0)._s_0.X = (double)local_118._16_8_;
  (param_3->field0_0x0)._s_0.Y = dStack_100;
  (param_3->field0_0x0)._s_0.Z = local_f8;
  return bVar3;
}

// RunCapsuleTrace @ 146f67930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEQSHelpers::FBatchTrace::RunCapsuleTrace
          (FBatchTrace *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  UWorld *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  FCollisionShape local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined1 local_138 [24];
  double dStack_120;
  double local_118;
  int local_94;
  FWeakObjectPtr local_80;
  FWeakObjectPtr FStack_78;
  IActorInstanceManagerInterface *local_70;
  undefined8 uStack_68;
  
  memset(local_138,0,0x100);
  dVar2 = __real_3fb0000000000000;
  this_00 = this->World;
  local_158 = 0;
  uStack_150 = 0;
  uStack_13b = 0;
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  FStack_78.ObjectIndex = 0;
  FStack_78.ObjectSerialNumber = 0;
  uStack_139 = 0;
  local_148 = 0;
  uStack_13c = 0;
  uStack_140 = 0xffffffff;
  uStack_68._0_4_ = -1;
  uStack_68._4_1_ = Invalid;
  uStack_68._5_3_ = 0;
  local_138._4_4_ = 1.0;
  local_94 = -1;
  local_70 = (IActorInstanceManagerInterface *)0x0;
  dVar5 = (this->Extent).field0_0x0._s_0.Z;
  fVar7 = (float)dVar5;
  dVar5 = (double)fVar7 - dVar5;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  dVar5 = (this->Extent).field0_0x0._s_0.X;
  fVar6 = (float)dVar5;
  dVar5 = (double)fVar6 - dVar5;
  if ((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_168.ShapeType = Capsule;
  local_168.field1_0x4.Box.HalfExtentX = fVar6;
  local_168.field1_0x4.Box.HalfExtentY = fVar7;
  bVar3 = UWorld::SweepSingleByChannel
                    (this_00,(FHitResult *)local_138,param_1,param_2,
                     &UE::Math::TQuat<double>::Identity,this->Channel,&local_168,&this->QueryParams,
                     &this->ResponseParams);
  (param_3->field0_0x0)._s_0.X = (double)local_138._16_8_;
  (param_3->field0_0x0)._s_0.Y = dStack_120;
  (param_3->field0_0x0)._s_0.Z = local_118;
  return bVar3;
}

// RunLineTrace @ 146f68740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEQSHelpers::FBatchTrace::RunLineTrace
          (FBatchTrace *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  bool bVar1;
  undefined1 local_108 [24];
  double dStack_f0;
  double local_e8;
  int local_64;
  FWeakObjectPtr local_50;
  FWeakObjectPtr FStack_48;
  IActorInstanceManagerInterface *local_40;
  undefined8 uStack_38;
  
  memset(local_108,0,0x100);
  local_108._4_4_ = 1.0;
  local_50.ObjectIndex = 0;
  local_50.ObjectSerialNumber = 0;
  FStack_48.ObjectIndex = 0;
  FStack_48.ObjectSerialNumber = 0;
  local_64 = -1;
  uStack_38._0_4_ = -1;
  uStack_38._4_1_ = Invalid;
  uStack_38._5_3_ = 0;
  local_40 = (IActorInstanceManagerInterface *)0x0;
  bVar1 = UWorld::LineTraceSingleByChannel
                    (this->World,(FHitResult *)local_108,param_1,param_2,this->Channel,
                     &this->QueryParams,&this->ResponseParams);
  (param_3->field0_0x0)._s_0.X = (double)local_108._16_8_;
  (param_3->field0_0x0)._s_0.Y = dStack_f0;
  (param_3->field0_0x0)._s_0.Z = local_e8;
  return bVar1;
}

// RunSphereTrace @ 146f6b6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEQSHelpers::FBatchTrace::RunSphereTrace
          (FBatchTrace *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  UWorld *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  double dVar4;
  FCollisionShape local_128;
  undefined1 local_118 [24];
  double dStack_100;
  double local_f8;
  int local_74;
  FWeakObjectPtr local_60;
  FWeakObjectPtr FStack_58;
  IActorInstanceManagerInterface *local_50;
  undefined8 uStack_48;
  
  memset(local_118,0,0x100);
  this_00 = this->World;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  FStack_58.ObjectIndex = 0;
  FStack_58.ObjectSerialNumber = 0;
  uStack_48._0_4_ = -1;
  uStack_48._4_1_ = Invalid;
  uStack_48._5_3_ = 0;
  local_118._4_4_ = 1.0;
  local_74 = -1;
  local_50 = (IActorInstanceManagerInterface *)0x0;
  dVar4 = (this->Extent).field0_0x0._s_0.X;
  local_128.field1_0x4.Box.HalfExtentX = (float)dVar4;
  dVar4 = (double)local_128.field1_0x4.Box.HalfExtentX - dVar4;
  if (__real_3fb0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FloatFitsIn<OutType>(In, Precision)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xc0,L"Loss of data caused by narrowing conversion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_128.ShapeType = Sphere;
  bVar2 = UWorld::SweepSingleByChannel
                    (this_00,(FHitResult *)local_118,param_1,param_2,
                     &UE::Math::TQuat<double>::Identity,this->Channel,&local_128,&this->QueryParams,
                     &this->ResponseParams);
  (param_3->field0_0x0)._s_0.X = (double)local_118._16_8_;
  (param_3->field0_0x0)._s_0.Y = dStack_100;
  (param_3->field0_0x0)._s_0.Z = local_f8;
  return bVar2;
}

