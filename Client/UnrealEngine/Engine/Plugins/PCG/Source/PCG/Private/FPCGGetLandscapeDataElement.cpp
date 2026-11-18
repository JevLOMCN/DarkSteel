// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ProcessActor @ 149c84500

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
FPCGGetLandscapeDataElement::ProcessActor
          (FPCGGetLandscapeDataElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2
          ,AActor *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTypedGetter.cpp"
                     ,0x95,L"This should never be called directly");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ProcessActors @ 149c84540

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
FPCGGetLandscapeDataElement::ProcessActors
          (FPCGGetLandscapeDataElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2
          ,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTypedGetter.cpp"
                     ,0x90,L"This should never be called directly");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ProcessActors @ 149c84580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGGetLandscapeDataElement::ProcessActors
          (FPCGGetLandscapeDataElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2
          ,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FName *pFVar2;
  double dVar3;
  AActor *pAVar4;
  code *pcVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FPCGContext *pFVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  TBox<double> *pTVar11;
  FString *pFVar12;
  UObject *pUVar13;
  UPCGLandscapeData *this_00;
  ulonglong uVar14;
  FPCGDataPtrWrapper *this_01;
  FName *pFVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197;
  FGCScopeGuard local_196 [6];
  TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_190;
  FWeakObjectPtr local_180;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_178;
  FPCGContext *local_170;
  undefined1 local_168 [16];
  FName local_158;
  FScriptContainerElement *local_150;
  UPCGLandscapeData *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  TVector<double>_u_0 local_100;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_d0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_c8;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pwVar19 = L"";
  local_178 = param_3;
  local_170 = param_1;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTypedGetter.cpp"
                         ,0x5c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2 == (UPCGDataFromActorSettings *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTypedGetter.cpp"
                       ,0x5d,L"");
    if (!bVar8) {
      pFVar12 = GetTypeName<UPCGGetLandscapeSettings>(&local_130);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar19);
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = UPCGGetLandscapeSettings::StaticClass();
  pTVar6 = local_178;
  iVar9 = (int)pUVar10->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar9) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar9 * 8)
      != &pUVar10->_padding_)) {
    pFVar12 = GetTypeName<UPCGGetLandscapeSettings>(&local_120);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UPCGDataFromActorSettings_const_>(&local_110,param_2);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar19,pwVar17);
  }
  uVar14 = (ulonglong)local_178->ArrayNum;
  pFVar18 = (local_178->AllocatorInstance).Data;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  pFVar16 = pFVar18 + uVar14 * 8;
  local_100._s_0.X = 0.0;
  local_100._s_0.Y = 0.0;
  local_100._s_0.Z = 0.0;
  dStack_e8 = 0.0;
  local_e0 = 0.0;
  dStack_d8 = 0.0;
  local_d0 = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  local_178 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_178._4_4_,local_178->ArrayNum);
  local_150 = pFVar16;
  while( true ) {
    if (pTVar6->ArrayNum != (int)uVar14) {
      local_198 = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_198);
    }
    pFVar7 = local_170;
    if (pFVar18 == pFVar16) break;
    pAVar4 = *(AActor **)pFVar18;
    if ((pAVar4 != (AActor *)0x0) && (((uint)pAVar4->_padding_ >> 0x1e & 1) == 0)) {
      pUVar10 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar10->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        local_180.ObjectIndex = 0;
        local_180.ObjectSerialNumber = 0;
        local_168._8_8_ = pAVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        FWeakObjectPtr::operator=(&local_180,(FObjectPtr)((longlong)local_168 + 8));
        if (((local_190.AllocatorInstance.Data <= &local_180) &&
            (&local_180 <
             (FWeakObjectPtr *)(local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 8)
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_190.ArrayNum;
        if (local_190.ArrayNum == local_190.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_190.AllocatorInstance,&local_190.ArrayMax);
        }
        local_190.ArrayNum = iVar9 + 1;
        *(FWeakObjectPtr *)(local_190.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_180;
        pTVar11 = PCGHelpers::GetGridBounds(&local_78,pAVar4,(UPCGComponent *)0x0);
        if ((char)local_d0 == '\0') {
          if (pTVar11->IsValid != '\0') {
            local_100._s_0.X = (pTVar11->Min).field0_0x0._s_0.X;
            local_100._s_0.Y = (pTVar11->Min).field0_0x0._s_0.Y;
            local_100._s_0.Z = (pTVar11->Min).field0_0x0._s_0.Z;
            dStack_e8 = (pTVar11->Max).field0_0x0._s_0.X;
            local_e0 = (pTVar11->Max).field0_0x0._s_0.Y;
            dStack_d8 = (pTVar11->Max).field0_0x0._s_0.Z;
            local_d0._0_1_ = pTVar11->IsValid;
            local_d0._1_1_ = pTVar11->Pad[0];
            local_d0._2_1_ = pTVar11->Pad[1];
            local_d0._3_1_ = pTVar11->Pad[2];
            local_d0._4_1_ = pTVar11->Pad[3];
            local_d0._5_1_ = pTVar11->Pad[4];
            local_d0._6_1_ = pTVar11->Pad[5];
            local_d0._7_1_ = pTVar11->Pad[6];
          }
        }
        else if (pTVar11->IsValid != '\0') {
          uVar20 = SUB84(local_100._s_0.X,0);
          uVar21 = (undefined4)((ulonglong)local_100._0_8_ >> 0x20);
          dVar3 = *(double *)&(pTVar11->Min).field0_0x0;
          if (dVar3 <= local_100._s_0.X) {
            uVar20 = SUB84(dVar3,0);
            uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          local_100._s_0.X = (double)CONCAT44(uVar21,uVar20);
          dVar3 = *(double *)((longlong)&(pTVar11->Min).field0_0x0 + 8);
          uVar20 = SUB84(dVar3,0);
          uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (local_100._s_0.Y <= dVar3) {
            uVar20 = SUB84(local_100._s_0.Y,0);
            uVar21 = (undefined4)((ulonglong)local_100._8_8_ >> 0x20);
          }
          local_100._s_0.Y = (double)CONCAT44(uVar21,uVar20);
          dVar3 = *(double *)((longlong)&(pTVar11->Min).field0_0x0 + 0x10);
          uVar20 = SUB84(dVar3,0);
          uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (local_100._s_0.Z <= dVar3) {
            uVar20 = SUB84(local_100._s_0.Z,0);
            uVar21 = (undefined4)((ulonglong)local_100._16_8_ >> 0x20);
          }
          local_100._s_0.Z = (double)CONCAT44(uVar21,uVar20);
          dVar3 = *(double *)&(pTVar11->Max).field0_0x0;
          uVar20 = SUB84(dVar3,0);
          uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= dStack_e8) {
            uVar20 = SUB84(dStack_e8,0);
            uVar21 = (undefined4)((ulonglong)dStack_e8 >> 0x20);
          }
          dStack_e8 = (double)CONCAT44(uVar21,uVar20);
          dVar3 = *(double *)((longlong)&(pTVar11->Max).field0_0x0 + 8);
          uVar20 = SUB84(dVar3,0);
          uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= local_e0) {
            uVar20 = SUB84(local_e0,0);
            uVar21 = (undefined4)((ulonglong)local_e0 >> 0x20);
          }
          local_e0 = (double)CONCAT44(uVar21,uVar20);
          dVar3 = *(double *)((longlong)&(pTVar11->Max).field0_0x0 + 0x10);
          uVar20 = SUB84(dVar3,0);
          uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= dStack_d8) {
            uVar20 = SUB84(dStack_d8,0);
            uVar21 = (undefined4)((ulonglong)dStack_d8 >> 0x20);
          }
          dStack_d8 = (double)CONCAT44(uVar21,uVar20);
        }
        pFVar15 = (FName *)(pAVar4->Tags).AllocatorInstance.Data;
        iVar9 = (pAVar4->Tags).ArrayNum;
        pFVar2 = pFVar15 + iVar9;
        while( true ) {
          if ((pAVar4->Tags).ArrayNum != iVar9) {
            local_197 = 0;
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_197);
          }
          pFVar16 = local_150;
          if (pFVar15 == pFVar2) break;
          local_158 = *pFVar15;
          pFVar12 = ::FName::ToString(&local_158,&local_140);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&local_c8,(FString *)local_168,(bool *)pFVar12);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar15 = pFVar15 + 1;
        }
      }
    }
    uVar14 = (ulonglong)local_178 & 0xffffffff;
    pFVar18 = pFVar18 + 8;
  }
  if (local_190.ArrayNum == 0) goto LAB_149c84a36;
  bVar8 = IsInGameThread();
  if (pFVar7 == (FPCGContext *)0x0) {
    if ((!bVar8) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_149c84976:
    pUVar13 = GetTransientPackageAsObject();
    this_00 = NewObject<UPCGLandscapeData>(pUVar13);
  }
  else {
    if (bVar8) goto LAB_149c84976;
    if (((pFVar7->AsyncState).bIsRunningOnMainThread != false) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FGCScopeGuard::FGCScopeGuard(local_196);
    pUVar13 = GetTransientPackageAsObject();
    this_00 = NewObject<UPCGLandscapeData>(pUVar13);
    FGCScopeGuard::~FGCScopeGuard(local_196);
    if ((this_00 == (UPCGLandscapeData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_148 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UPCGLandscapeData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              (&pFVar7->AsyncObjects,(TObjectPtr<UObject> *)(local_168 + 4),(bool *)&local_148);
  }
  UPCGLandscapeData::Initialize
            (this_00,&local_190,(TBox<double> *)&local_100._s_0,
             (FPCGLandscapeDataProps *)(param_2 + 1));
  iVar9 = (pFVar7->OutputData).TaggedData.ArrayNum;
  piVar1 = &(pFVar7->OutputData).TaggedData.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&pFVar7->OutputData,piVar1);
  }
  (pFVar7->OutputData).TaggedData.ArrayNum = iVar9 + 1;
  this_01 = (FPCGDataPtrWrapper *)
            ((pFVar7->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar9 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined2 *)((longlong)&this_01[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)
   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_01 + 1))->Elements = 0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[5].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined2 *)&this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_01 + 1),
             &local_c8);
LAB_149c84a36:
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  if ((FWeakObjectPtr *)local_190.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return;
}

