// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// GetAssociatedLegacyType @ 149789a50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoConcrete::GetAssociatedLegacyType(FPCGDataTypeInfoConcrete *this)

{
  return Concrete;
}

// StaticStruct @ 149853170

UScriptStruct * __cdecl FPCGDataTypeInfoConcrete::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete,(UObject *)pUVar1,
                         L"PCGDataTypeInfoConcrete");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton;
}

// GetAssociatedClass @ 1498531b0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoConcrete::GetAssociatedClass(FPCGDataTypeInfoConcrete *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// SupportsConversionFrom @ 149853230

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeInfoConcrete::SupportsConversionFrom
          (FPCGDataTypeInfoConcrete *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar12;
  UClass *pUVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95 [5];
  FPCGDataTypeIdentifier local_90;
  FPCGDataTypeIdentifier local_78;
  FPCGDataTypeIdentifier local_60;
  FPCGDataTypeIdentifier local_48;
  undefined4 local_30;
  
  local_30 = 0;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Concrete);
  bVar8 = FPCGDataTypeIdentifier::IsValid(param_2);
  iVar14 = local_48.Ids.ArrayNum;
  iVar10 = iVar14;
  if (bVar8) {
LAB_1498532b8:
    if (((param_2->Ids).ArrayNum == iVar10) &&
       (bVar8 = FPCGDataTypeIdentifier::SupportsType(param_2,&local_48), bVar8)) goto LAB_1498532d6;
    bVar6 = false;
    bVar5 = false;
    bVar8 = false;
LAB_149853816:
    bVar7 = false;
  }
  else {
    if (iVar14 != 0) {
      pFVar1 = local_48.Ids.AllocatorInstance.Data + (longlong)iVar14 * 8;
      uVar15 = local_48.Ids._8_8_;
      FVar17.Data = local_48.Ids.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar14) {
          local_98 = 0;
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_98);
          uVar15 = local_48.Ids._8_8_;
        }
        iVar10 = (int)uVar15;
        if (FVar17.Data == pFVar1) goto LAB_1498532b8;
        if (*(longlong *)FVar17.Data == 0) break;
        FVar17.Data = FVar17.Data + 8;
      }
    }
LAB_1498532d6:
    pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)FPCGDataTypeInfo::AsId();
    local_60.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Ids.ArrayNum = 0;
    local_60.Ids.ArrayMax = 0;
    local_60.CustomSubtype = -1;
    bVar8 = FPCGDataTypeIdentifier::PrepareForCompose
                      (&local_60,(FPCGDataTypeBaseId *)&pTVar11->ObjectPtr);
    if (bVar8) {
      if (((local_60.Ids.AllocatorInstance.Data <= pTVar11) &&
          (pTVar11 < (TObjectPtr<UScriptStruct_const_>_u_0 *)
                     (local_60.Ids.AllocatorInstance.Data + (longlong)local_60.Ids.ArrayMax * 8)))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      iVar10 = local_60.Ids.ArrayNum;
      if (local_60.Ids.ArrayNum == local_60.Ids.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_60,&local_60.Ids.ArrayMax);
      }
      local_60.Ids.ArrayNum = iVar10 + 1;
      pUVar2 = pTVar11->DebugPtr;
      *(UScriptStruct **)(local_60.Ids.AllocatorInstance.Data + (longlong)iVar10 * 8) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    bVar8 = FPCGDataTypeIdentifier::IsValid(param_1);
    iVar10 = local_60.Ids.ArrayNum;
    iVar14 = local_60.Ids.ArrayNum;
    if (bVar8) {
LAB_1498533f0:
      if (((param_1->Ids).ArrayNum != iVar14) ||
         (bVar8 = FPCGDataTypeIdentifier::IsValid(param_1),
         FVar17.Data = local_60.Ids.AllocatorInstance.Data, !bVar8)) {
LAB_149853475:
        pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)FPCGDataTypeInfoSpatial::AsId();
        local_78.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Ids.ArrayNum = 0;
        local_78.Ids.ArrayMax = 0;
        local_78.CustomSubtype = -1;
        bVar8 = FPCGDataTypeIdentifier::PrepareForCompose
                          (&local_78,(FPCGDataTypeBaseId *)&pTVar11->ObjectPtr);
        if (bVar8) {
          if (((local_78.Ids.AllocatorInstance.Data <= pTVar11) &&
              (pTVar11 < (TObjectPtr<UScriptStruct_const_>_u_0 *)
                         (local_78.Ids.AllocatorInstance.Data + (longlong)local_78.Ids.ArrayMax * 8)
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          iVar10 = local_78.Ids.ArrayNum;
          if (local_78.Ids.ArrayNum == local_78.Ids.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&local_78,&local_78.Ids.ArrayMax);
          }
          local_78.Ids.ArrayNum = iVar10 + 1;
          pUVar2 = pTVar11->DebugPtr;
          *(UScriptStruct **)(local_78.Ids.AllocatorInstance.Data + (longlong)iVar10 * 8) = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
        }
        bVar8 = FPCGDataTypeIdentifier::IsValid(param_1);
        iVar10 = local_78.Ids.ArrayNum;
        iVar14 = local_78.Ids.ArrayNum;
        if (bVar8) {
LAB_1498535b1:
          if (((param_1->Ids).ArrayNum != iVar14) ||
             (bVar8 = FPCGDataTypeIdentifier::IsValid(param_1),
             FVar17.Data = local_78.Ids.AllocatorInstance.Data, !bVar8)) {
LAB_149853635:
            pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)FPCGDataTypeInfoComposite::AsId();
            local_90.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_90.Ids.ArrayNum = 0;
            local_90.Ids.ArrayMax = 0;
            local_90.CustomSubtype = -1;
            bVar8 = FPCGDataTypeIdentifier::PrepareForCompose
                              (&local_90,(FPCGDataTypeBaseId *)&pTVar11->ObjectPtr);
            if (bVar8) {
              if (((local_90.Ids.AllocatorInstance.Data <= pTVar11) &&
                  (pTVar11 < (TObjectPtr<UScriptStruct_const_>_u_0 *)
                             (local_90.Ids.AllocatorInstance.Data +
                             (longlong)local_90.Ids.ArrayMax * 8))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              iVar10 = local_90.Ids.ArrayNum;
              if (local_90.Ids.ArrayNum == local_90.Ids.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)&local_90,&local_90.Ids.ArrayMax);
              }
              local_90.Ids.ArrayNum = iVar10 + 1;
              pUVar2 = pTVar11->DebugPtr;
              *(UScriptStruct **)(local_90.Ids.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                   pUVar2;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar2 != (UScriptStruct *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
            }
            bVar8 = FPCGDataTypeIdentifier::IsValid(param_1);
            iVar10 = local_90.Ids.ArrayNum;
            iVar14 = local_90.Ids.ArrayNum;
            if (bVar8) {
LAB_14985376e:
              if (((param_1->Ids).ArrayNum != iVar14) ||
                 (bVar8 = FPCGDataTypeIdentifier::IsValid(param_1),
                 FVar17.Data = local_90.Ids.AllocatorInstance.Data, !bVar8)) {
LAB_1498537ee:
                bVar6 = true;
                bVar5 = true;
                bVar8 = true;
                goto LAB_149853816;
              }
              lVar18 = (longlong)local_90.Ids.ArrayNum;
              if ((local_90.Ids.ArrayNum < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(FVar17.Data + lVar18 * 8);
              if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11) {
                pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                         (param_1->Ids).AllocatorInstance.Data;
                iVar10 = (param_1->Ids).ArrayNum;
                if (pTVar3 == pTVar3 + iVar10) goto LAB_1498537ee;
                do {
                  pTVar12 = pTVar3;
                  while (pTVar12->DebugPtr != *(TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data)
                  {
                    pTVar12 = pTVar12 + 1;
                    if (pTVar12 == pTVar3 + iVar10) goto LAB_1498537ee;
                  }
                  FVar17.Data = FVar17.Data + 8;
                } while ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11);
              }
            }
            else {
              uVar16 = (ulonglong)local_90.Ids.ArrayNum;
              if (local_90.Ids.ArrayNum != 0) {
                pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                          (local_90.Ids.AllocatorInstance.Data + uVar16 * 8);
                FVar17.Data = local_90.Ids.AllocatorInstance.Data;
                while( true ) {
                  if ((int)uVar16 != iVar10) {
                    local_95[0] = 0;
                    `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_95);
                    uVar16 = local_90.Ids._8_8_ & 0xffffffff;
                  }
                  iVar14 = (int)uVar16;
                  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data == pTVar11)
                  goto LAB_14985376e;
                  if (*(UScriptStruct **)FVar17.Data == (UScriptStruct *)0x0) break;
                  FVar17.Data = FVar17.Data + 8;
                }
              }
            }
            bVar6 = true;
            bVar5 = true;
            bVar8 = true;
            bVar7 = true;
            goto LAB_149853819;
          }
          lVar18 = (longlong)local_78.Ids.ArrayNum;
          if ((local_78.Ids.ArrayNum < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(FVar17.Data + lVar18 * 8);
          if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11) {
            pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->Ids).AllocatorInstance.Data;
            iVar10 = (param_1->Ids).ArrayNum;
            if (pTVar3 == pTVar3 + iVar10) goto LAB_149853635;
            do {
              pTVar12 = pTVar3;
              while (pTVar12->DebugPtr != *(TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data) {
                pTVar12 = pTVar12 + 1;
                if (pTVar12 == pTVar3 + iVar10) goto LAB_149853635;
              }
              FVar17.Data = FVar17.Data + 8;
            } while ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11);
          }
        }
        else {
          uVar16 = (ulonglong)local_78.Ids.ArrayNum;
          if (local_78.Ids.ArrayNum != 0) {
            pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                      (local_78.Ids.AllocatorInstance.Data + uVar16 * 8);
            FVar17.Data = local_78.Ids.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar16 != iVar10) {
                local_96 = 0;
                `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_96);
                uVar16 = local_78.Ids._8_8_ & 0xffffffff;
              }
              iVar14 = (int)uVar16;
              if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data == pTVar11)
              goto LAB_1498535b1;
              if (*(UScriptStruct **)FVar17.Data == (UScriptStruct *)0x0) break;
              FVar17.Data = FVar17.Data + 8;
            }
          }
        }
        bVar6 = true;
        bVar5 = true;
        bVar8 = false;
        bVar7 = true;
        goto LAB_149853819;
      }
      lVar18 = (longlong)local_60.Ids.ArrayNum;
      if ((local_60.Ids.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(FVar17.Data + lVar18 * 8);
      if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11) {
        pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->Ids).AllocatorInstance.Data;
        iVar10 = (param_1->Ids).ArrayNum;
        if (pTVar3 == pTVar3 + iVar10) goto LAB_149853475;
        do {
          pTVar12 = pTVar3;
          while (pTVar12->DebugPtr != *(TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data) {
            pTVar12 = pTVar12 + 1;
            if (pTVar12 == pTVar3 + iVar10) goto LAB_149853475;
          }
          FVar17.Data = FVar17.Data + 8;
        } while ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data != pTVar11);
      }
    }
    else {
      uVar16 = (ulonglong)local_60.Ids.ArrayNum;
      if (local_60.Ids.ArrayNum != 0) {
        pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                  (local_60.Ids.AllocatorInstance.Data + uVar16 * 8);
        FVar17.Data = local_60.Ids.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar16 != iVar10) {
            local_97 = 0;
            `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_97);
            uVar16 = local_60.Ids._8_8_ & 0xffffffff;
          }
          iVar14 = (int)uVar16;
          if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar17.Data == pTVar11) goto LAB_1498533f0;
          if (*(UScriptStruct **)FVar17.Data == (UScriptStruct *)0x0) break;
          FVar17.Data = FVar17.Data + 8;
        }
      }
    }
    bVar6 = true;
    bVar5 = false;
    bVar8 = false;
    bVar7 = true;
  }
LAB_149853819:
  if ((bVar8) &&
     ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_90.Ids.AllocatorInstance.Data !=
      (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0)) {
    FMemory::Free(local_90.Ids.AllocatorInstance.Data);
  }
  if ((bVar5) &&
     ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_78.Ids.AllocatorInstance.Data !=
      (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0)) {
    FMemory::Free(local_78.Ids.AllocatorInstance.Data);
  }
  if ((bVar6) &&
     ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_60.Ids.AllocatorInstance.Data !=
      (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0)) {
    FMemory::Free(local_60.Ids.AllocatorInstance.Data);
  }
  if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  if (!bVar7) {
    return false;
  }
  if (param_3 != (TSubclassOf<UPCGSettings> *)0x0) {
    pUVar13 = Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (param_3->Class).field0_0x0.DebugPtr = pUVar13;
  }
  return true;
}

// GetStaticAssociatedClass @ 1498c6f80

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoConcrete::GetStaticAssociatedClass(void)

{
  TObjectPtr<UClass> in_RCX;
  
  *(undefined8 *)in_RCX.field0_0x0 = 0;
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

