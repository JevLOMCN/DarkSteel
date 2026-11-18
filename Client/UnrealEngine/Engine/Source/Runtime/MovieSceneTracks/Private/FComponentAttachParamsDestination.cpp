// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ResolveAttachment @ 1466da330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
UE::MovieScene::FComponentAttachParamsDestination::ResolveAttachment
          (FComponentAttachParamsDestination *this,AActor *param_1)

{
  TObjectPtr<USceneComponent>_u_0 *pTVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  USceneComponent *pUVar9;
  TObjectPtr<USceneComponent>_u_0 *pTVar10;
  TObjectPtr<USceneComponent>_u_0 *pTVar11;
  <lambda_1> <Var12;
  UClass *pUVar13;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [8];
  UClass *local_1e0;
  TObjectPtr<USceneComponent>_u_0 local_1d8 [24];
  TObjectPtr<USceneComponent>_u_0 *local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [192];
  TObjectPtr<USceneComponent>_u_0 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (this->SocketName == (FName)0x0) {
    if (this->ComponentName != (FName)0x0) {
      pUVar7 = (UClass *)0x0;
      pUVar13 = (UClass *)0x0;
      local_3c = 0x18;
      local_48 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
      local_40 = 0;
      if (param_1 != (AActor *)0x0) {
        pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
        if (GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UClass *)0x0) goto LAB_1466da563;
        }
        else {
          pUVar13 = pUVar7;
          if (pUVar5 != (UClass *)0x0) {
            GC::MarkAsReachable((UObject *)pUVar5);
LAB_1466da563:
            pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
            pUVar13 = pUVar7;
            if (pUVar6 != (UClass *)0x0) {
              iVar2 = (int)pUVar6->_padding_;
              if (((int)pUVar5->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar6->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                pUVar13 = pUVar5;
              }
            }
          }
        }
        pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_1e0 = pUVar5;
        if (pUVar13 == pUVar7) {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar5);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1e0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_108);
        }
        else {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar5);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1e0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_108);
        }
      }
      iVar2 = local_40;
      <Var12.OutComponents =
           (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *)
           local_108;
      if (local_48 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        <Var12.OutComponents =
             (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *)
             local_48;
      }
      pTVar11 = (TObjectPtr<USceneComponent>_u_0 *)
                ((longlong)<Var12.OutComponents + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1e8);
        }
        pTVar10 = local_48;
        if ((TObjectPtr<USceneComponent>_u_0 *)<Var12.OutComponents == pTVar11) goto LAB_1466da65e;
        pUVar9 = *(USceneComponent **)<Var12.OutComponents;
        if ((FName)pUVar9->_padding_ == this->ComponentName) break;
        <Var12.OutComponents = <Var12.OutComponents + 8;
      }
      goto LAB_1466da4b1;
    }
  }
  else {
    if (this->ComponentName != (FName)0x0) {
      pUVar7 = (UClass *)0x0;
      pUVar13 = (UClass *)0x0;
      local_10c = 0x18;
      local_118 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
      local_110 = 0;
      if (param_1 != (AActor *)0x0) {
        pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
        if (GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UClass *)0x0) goto LAB_1466da3bf;
        }
        else {
          pUVar13 = pUVar7;
          if (pUVar5 != (UClass *)0x0) {
            GC::MarkAsReachable((UObject *)pUVar5);
LAB_1466da3bf:
            pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
            pUVar13 = pUVar7;
            if (pUVar6 != (UClass *)0x0) {
              iVar2 = (int)pUVar6->_padding_;
              if (((int)pUVar5->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar6->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                pUVar13 = pUVar5;
              }
            }
          }
        }
        pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_1e0 = pUVar5;
        if (pUVar13 == pUVar7) {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar5);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1e0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1d8);
        }
        else {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar5);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1e0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1d8);
        }
      }
      iVar2 = local_110;
      pTVar11 = local_1d8;
      if (local_118 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        pTVar11 = local_118;
      }
      pTVar1 = pTVar11 + local_110;
      while( true ) {
        if (local_110 != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1e8);
        }
        pTVar10 = local_118;
        if (pTVar11 == pTVar1) goto LAB_1466da65e;
        pUVar9 = pTVar11->DebugPtr;
        if (((FName)pUVar9->_padding_ == this->ComponentName) &&
           (cVar4 = (**(code **)(pUVar9->_padding_ + 0x540))(pUVar9,this->SocketName),
           pTVar10 = local_118, cVar4 != '\0')) break;
        pTVar11 = pTVar11 + 1;
      }
LAB_1466da4b1:
      if (pTVar10 == (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        return pUVar9;
      }
      FMemory::Free(pTVar10);
      return pUVar9;
    }
    cVar4 = (**(code **)(((param_1->RootComponent).field0_0x0.DebugPtr)->_padding_ + 0x540))();
    if (cVar4 != '\0') goto LAB_1466da4e1;
  }
  goto LAB_1466da668;
LAB_1466da65e:
  if (pTVar10 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
    FMemory::Free(pTVar10);
  }
LAB_1466da668:
  lVar8 = (**(code **)(param_1->_padding_ + 0x440))(param_1);
  if (lVar8 != 0) {
    pUVar9 = (USceneComponent *)(**(code **)(param_1->_padding_ + 0x440))(param_1);
    return pUVar9;
  }
LAB_1466da4e1:
  return (param_1->RootComponent).field0_0x0.DebugPtr;
}

