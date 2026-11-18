// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddProfile @ 148451050

int __thiscall
FNeuralProfileModelTextureManager::AddProfile
          (FNeuralProfileModelTextureManager *this,UNeuralProfile *param_1,FGuid *param_2,
          FNeuralProfileStruct *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FNeuralProfileStruct *pFVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FNeuralProfileStruct local_68;
  
  if ((param_1 == (UNeuralProfile *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                         ,0x4c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = FindAllocationId(this,param_1);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindAllocationId(InProfile) == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                         ,0x4d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < (this->NeuralProfileEntries).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->NeuralProfileEntries).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (*(longlong *)((this->NeuralProfileEntries).AllocatorInstance.Data + uVar8 + 0x48) == 0) {
        uVar5 = 0;
        if ((int)uVar9 < (this->NeuralProfileEntries).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        *(UNeuralProfile **)
         ((this->NeuralProfileEntries).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50 + 0x48)
             = param_1;
        if (uVar9 != 0xffffffff) goto LAB_148451206;
        break;
      }
      uVar8 = uVar8 + 0x50;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (this->NeuralProfileEntries).ArrayNum);
  }
  uVar9 = (this->NeuralProfileEntries).ArrayNum;
  piVar1 = &(this->NeuralProfileEntries).ArrayMax;
  uVar5 = uVar9;
  if (uVar9 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->NeuralProfileEntries).AllocatorInstance,piVar1);
    (this->NeuralProfileEntries).ArrayNum = uVar5;
  }
  (this->NeuralProfileEntries).ArrayNum = uVar5 + 1;
  pFVar7 = (this->NeuralProfileEntries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50;
  DefaultConstructItems<FNeuralProfileModelTextureManager::FProfileEntry,int>(pFVar7,1);
  *(UNeuralProfile **)(pFVar7 + 0x48) = param_1;
LAB_148451206:
  pFVar6 = FNeuralProfileStruct::FNeuralProfileStruct(&local_68,param_3);
  UpdateProfile(this,uVar9,pFVar6);
  return uVar9;
}

// FindAllocationId @ 148466f20

int __thiscall
FNeuralProfileModelTextureManager::FindAllocationId
          (FNeuralProfileModelTextureManager *this,UNeuralProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->NeuralProfileEntries).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->NeuralProfileEntries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(UNeuralProfile **)((this->NeuralProfileEntries).AllocatorInstance.Data + lVar6 + 0x48)
          == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
    } while ((int)uVar5 < (this->NeuralProfileEntries).ArrayNum);
  }
  return -1;
}

// RemoveProfile @ 148486a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNeuralProfileModelTextureManager::RemoveProfile
          (FNeuralProfileModelTextureManager *this,UNeuralProfile *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  code **ppcVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  FScriptContainerElement local_188;
  FScriptContainerElement local_187;
  FScriptContainerElement local_186;
  FScriptContainerElement local_185;
  int local_184;
  FNeuralProfileStruct local_180;
  uint local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar11 = FindAllocationId(this,param_1);
  lVar16 = (longlong)(int)uVar11;
  if (uVar11 != 0xffffffff) {
    if (((int)uVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationId >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                            ,0xad,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (this->NeuralProfileEntries).ArrayNum;
    uVar19 = ~uVar11 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (local_198 = lVar16, local_190 = (longlong)iVar2,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar17 = lVar16 * 0x50;
    if ((*(UNeuralProfile **)((this->NeuralProfileEntries).AllocatorInstance.Data + lVar17 + 0x48)
         != param_1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NeuralProfileEntries[AllocationId].Profile == InProfile",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                            ,0xae,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (this->NeuralProfileEntries).ArrayNum;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (local_198 = lVar16, local_190 = (longlong)iVar2,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar18 = (this->NeuralProfileEntries).AllocatorInstance.Data + lVar17;
    local_188 = *pFVar18;
    TVar3 = (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)(pFVar18 + 8))->DebugPtr;
    local_187 = pFVar18[1];
    local_186 = pFVar18[2];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar3.DebugPtr);
    }
    local_184 = *(int *)(pFVar18 + 0x30);
    TVar4 = *(TIntPoint<int>_u_0 *)(pFVar18 + 0x38);
    local_185 = pFVar18[0x34];
    local_180.InputFormat = (ENeuralProfileFormat)local_188;
    local_180.OutputFormat = (ENeuralProfileFormat)local_187;
    local_180.RuntimeType = (ENeuralProfileRuntimeType)local_186;
    uVar6 = *(undefined8 *)(pFVar18 + 0x10);
    uVar7 = *(undefined8 *)(pFVar18 + 0x18);
    uVar8 = *(undefined8 *)(pFVar18 + 0x20);
    uVar9 = *(undefined8 *)(pFVar18 + 0x28);
    FVar1 = pFVar18[0x40];
    local_180.NNEModelData.field0_0x0 = TVar3;
    local_118 = uVar6;
    uStack_110 = uVar7;
    local_108 = uVar8;
    uStack_100 = uVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar3.DebugPtr);
    }
    local_180.BatchSizeOverride = local_184;
    local_180.TileSize = (ENeuralModelTileType)local_185;
    local_d8[0] = (code *)0x0;
    local_180.InputDimension.field0_0x0._0_8_ = uVar6;
    local_180.InputDimension.field0_0x0._8_8_ = uVar7;
    local_180.OutputDimension.field0_0x0._0_8_ = uVar8;
    local_180.OutputDimension.field0_0x0._8_8_ = uVar9;
    local_180.TileOverlap.field0_0x0 = TVar4;
    local_180.TileOverlapResolveType = (ETileOverlapResolveType)FVar1;
    local_138 = uVar11;
    ppcVar13 = FMemory::Malloc(0x58,8);
    *ppcVar13 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__4__RemoveProfile_FNeuralProfileModelTextureManager__QEAAXPEBVUNeuralProfile___Z__00_00_Function_Private_Core_UE__6B_
    ;
    local_b0 = ppcVar13;
    FNeuralProfileStruct::FNeuralProfileStruct((FNeuralProfileStruct *)(ppcVar13 + 1),&local_180);
    *(uint *)(ppcVar13 + 10) = uVar11;
    if ((FNeuralProfileStruct *)(ppcVar13 + 1) != (FNeuralProfileStruct *)0x0) {
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNeuralProfileModelTextureManager::RemoveProfile_::__l5::TSTR_RemoveNeuralProfile177>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_a8._0_8_ = local_d8[0];
      local_80 = local_b0;
      local_b0 = (code **)0x0;
      local_a8._16_8_ = local_c8[0];
      local_a8._24_8_ = local_c8[1];
      local_a8._32_8_ = local_c8[2];
      local_d8[0] = (code *)0x0;
      local_78 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::TSTR_RemoveNeuralProfile177>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_a8,pFVar14);
      uVar15 = (ulonglong)local_78;
      if ((2 < uVar15) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          ppcVar13 = (code **)(local_a8 + 0x10);
          if (local_80 != (code **)0x0) {
            ppcVar13 = local_80;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_a8);
      }
    }
    if (local_d8[0] != (code *)0x0) {
      ppcVar13 = local_d8 + 2;
      if (local_b0 != (code **)0x0) {
        ppcVar13 = local_b0;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
    iVar2 = (this->NeuralProfileEntries).ArrayNum;
    local_190 = (longlong)iVar2;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (local_198 = lVar16,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)((this->NeuralProfileEntries).AllocatorInstance.Data + lVar17 + 0x48) = 0;
    iVar2 = (this->NeuralProfileEntries).ArrayNum;
    local_190 = (longlong)iVar2;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (local_198 = lVar16,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar18 = (this->NeuralProfileEntries).AllocatorInstance.Data;
    *(undefined2 *)(pFVar18 + lVar17) = 0;
    pFVar18[lVar17 + 2] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar18 + lVar17 + 8) = 0;
    pFVar18[lVar17 + 0x34] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x38) = 0;
    pFVar18[lVar17 + 0x40] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x10) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x10 + 8) = 0;
    *(undefined4 *)(pFVar18 + lVar17 + 0x30) = 1;
    *(undefined8 *)(pFVar18 + lVar17 + 0x20) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x20 + 8) = 0;
  }
  return;
}

// UpdateProfile @ 14849b960

void __thiscall
FNeuralProfileModelTextureManager::UpdateProfile
          (FNeuralProfileModelTextureManager *this,int param_1,FNeuralProfileStruct *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TUniquePtr<NeuralProfile::INeuralProfileManager,TDefaultDelete<NeuralProfile::INeuralProfileManager>_>
  TVar5;
  bool bVar6;
  char cVar7;
  FString *pFVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FString local_38;
  
  lVar11 = (longlong)param_1;
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                       ,0x6c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1 != -1) && (GNeuralProfileManager.Ptr != (INeuralProfileManager *)0x0)) {
    if ((this->NeuralProfileEntries).ArrayNum <= param_1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationId < NeuralProfileEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                         ,0x70,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar9 = 0;
    if (param_1 < (this->NeuralProfileEntries).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TVar5.Ptr = GNeuralProfileManager.Ptr;
    pFVar3 = (this->NeuralProfileEntries).AllocatorInstance.Data;
    if ((pFVar3[lVar11 * 0x50 + 2] == (FScriptContainerElement)param_2->RuntimeType) &&
       (*(UObject **)(pFVar3 + lVar11 * 0x50 + 8) == (param_2->NNEModelData).field0_0x0.DebugPtr)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      pcVar4 = *(code **)((longlong)*GNeuralProfileManager.Ptr + 8);
      pFVar8 = ::FString::FString(&local_38,
                                  (wchar_t *)
                                  (&PTR_u_NNERuntimeORTDm_151ac7040)[param_2->RuntimeType]);
      (*pcVar4)(TVar5.Ptr,param_1,(param_2->NNEModelData).field0_0x0.DebugPtr,pFVar8);
    }
    if ((pFVar3[lVar11 * 0x50 + 0x34] != (FScriptContainerElement)param_2->TileSize) || (bVar6)) {
      (**(code **)((longlong)*GNeuralProfileManager.Ptr + 0x18))(GNeuralProfileManager.Ptr,param_1);
    }
    if (((*(int *)(pFVar3 + lVar11 * 0x50 + 0x38) != (param_2->TileOverlap).field0_0x0._s_0.X) ||
        (*(int *)(pFVar3 + lVar11 * 0x50 + 0x3c) != (param_2->TileOverlap).field0_0x0._s_0.Y)) ||
       (bVar6)) {
      (**(code **)((longlong)*GNeuralProfileManager.Ptr + 0x28))
                (GNeuralProfileManager.Ptr,param_1,(param_2->TileOverlap).field0_0x0);
    }
    if ((pFVar3[lVar11 * 0x50 + 0x40] != (FScriptContainerElement)param_2->TileOverlapResolveType)
       || (bVar6)) {
      (**(code **)((longlong)*GNeuralProfileManager.Ptr + 0x30))(GNeuralProfileManager.Ptr,param_1);
    }
    iVar1 = param_2->BatchSizeOverride;
    iVar2 = *(int *)(pFVar3 + lVar11 * 0x50 + 0x30);
    uVar9 = 0;
    if (param_1 < (this->NeuralProfileEntries).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = *(int *)((this->NeuralProfileEntries).AllocatorInstance.Data + lVar11 * 0x50 + 0x30);
    if (iVar2 != iVar1) {
      cVar7 = (**(code **)((longlong)*GNeuralProfileManager.Ptr + 0x20))
                        (GNeuralProfileManager.Ptr,param_1,param_2->BatchSizeOverride);
      if (cVar7 != '\0') {
        iVar10 = param_2->BatchSizeOverride;
      }
    }
    uVar9 = 0;
    if (param_1 < (this->NeuralProfileEntries).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNeuralProfileStruct::operator=
              ((FNeuralProfileStruct *)
               ((this->NeuralProfileEntries).AllocatorInstance.Data + lVar11 * 0x50),param_2);
    uVar9 = 0;
    if (param_1 < (this->NeuralProfileEntries).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(int *)((this->NeuralProfileEntries).AllocatorInstance.Data + lVar11 * 0x50 + 0x30) = iVar10;
  }
  return;
}

