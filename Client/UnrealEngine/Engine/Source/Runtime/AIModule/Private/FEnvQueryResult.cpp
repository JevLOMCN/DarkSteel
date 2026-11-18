// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticStruct @ 146f0f960

UScriptStruct * __cdecl FEnvQueryResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryResult,(UObject *)pUVar1,
                         L"EnvQueryResult");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryResult.OuterSingleton;
}

// operator= @ 146f300f0

FEnvQueryResult * __thiscall
FEnvQueryResult::operator=(FEnvQueryResult *this,FEnvQueryResult *param_1)

{
  UClass *pUVar1;
  
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::operator=(&this->Items,&param_1->Items);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ItemType).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ItemType).Class.field0_0x0 = (param_1->ItemType).Class.field0_0x0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->RawData,&param_1->RawData);
  this->Status = param_1->Status;
  this->OptionIndex = param_1->OptionIndex;
  this->QueryID = param_1->QueryID;
  (this->Owner).WeakPtr = (param_1->Owner).WeakPtr;
  return this;
}

// GetAllAsActors @ 146f4f820

void __thiscall
FEnvQueryResult::GetAllAsActors
          (FEnvQueryResult *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UEnvQueryItemType_ActorBase *pUVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined8 local_38 [2];
  
  pUVar10 = (this->ItemType).Class.field0_0x0.DebugPtr;
  if ((pUVar10 != (UClass *)0x0) &&
     (pUVar8 = UEnvQueryItemType::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar10->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (pUVar10 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar10 != (UClass *)0x0))
    {
      pUVar9 = UEnvQueryItemType::StaticClass();
      pUVar8 = (UClass *)0x0;
      pUVar11 = pUVar8;
      if (pUVar9 != (UClass *)0x0) {
        iVar3 = (int)pUVar9->_padding_;
        if (((int)pUVar10->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar11 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar10 = UEnvQueryItemType_ActorBase::StaticClass();
      if (pUVar10 != (UClass *)0x0) {
        iVar3 = (int)pUVar10->_padding_;
        if (((int)pUVar11->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (0 < (this->Items).ArrayNum)) {
          pUVar10 = (this->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar10 != (UClass *)0x0) &&
             (pUVar11 = UEnvQueryItemType::StaticClass(), pUVar11 != (UClass *)0x0)) {
            iVar3 = (int)pUVar11->_padding_;
            if (((int)pUVar10->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar8 = (this->ItemType).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar12 = UClass::GetDefaultObject<UEnvQueryItemType_ActorBase>(pUVar8);
          if ((pUVar12 == (UEnvQueryItemType_ActorBase *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("DefTypeOb != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                                 ,0x40,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = (this->Items).ArrayNum + param_1->ArrayNum;
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          piVar1 = &param_1->ArrayMax;
          if (*piVar1 < (int)uVar13) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
          }
          pFVar14 = (this->Items).AllocatorInstance.Data;
          iVar3 = (this->Items).ArrayNum;
          pFVar2 = pFVar14 + (longlong)iVar3 * 8;
          while( true ) {
            if ((this->Items).ArrayNum != iVar3) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FEnvQueryItem_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pFVar14 == pFVar2) break;
            local_38[0] = (**(code **)(*(longlong *)pUVar12 + 0x2d8))
                                    (pUVar12,(this->RawData).AllocatorInstance.Data +
                                             ((longlong)(*(int *)(pFVar14 + 4) * 2) >> 1));
            pFVar4 = (param_1->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
                ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = param_1->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,piVar1);
            }
            pFVar14 = pFVar14 + 8;
            param_1->ArrayNum = iVar7 + 1;
            *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
          }
        }
      }
    }
  }
  return;
}

// GetAllAsLocations @ 146f4fae0

void __thiscall
FEnvQueryResult::GetAllAsLocations
          (FEnvQueryResult *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UEnvQueryItemType_VectorBase *pUVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined1 local_48 [32];
  
  pUVar12 = (this->ItemType).Class.field0_0x0.DebugPtr;
  if ((pUVar12 != (UClass *)0x0) &&
     (pUVar10 = UEnvQueryItemType::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar12->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar10->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (pUVar12 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar12 != (UClass *)0x0))
    {
      pUVar11 = UEnvQueryItemType::StaticClass();
      pUVar10 = (UClass *)0x0;
      pUVar13 = pUVar10;
      if (pUVar11 != (UClass *)0x0) {
        iVar3 = (int)pUVar11->_padding_;
        if (((int)pUVar12->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar13 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar12 = UEnvQueryItemType_VectorBase::StaticClass();
      if (pUVar12 != (UClass *)0x0) {
        iVar3 = (int)pUVar12->_padding_;
        if (((int)pUVar13->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar12->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if ((bVar8) && (0 < (this->Items).ArrayNum)) {
          pUVar12 = (this->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar12 != (UClass *)0x0) &&
             (pUVar13 = UEnvQueryItemType::StaticClass(), pUVar13 != (UClass *)0x0)) {
            iVar3 = (int)pUVar13->_padding_;
            if (((int)pUVar12->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar13->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              pUVar10 = (this->ItemType).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar14 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>(pUVar10);
          if ((pUVar14 == (UEnvQueryItemType_VectorBase *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("DefTypeOb != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                                 ,0x52,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar16 = (this->Items).ArrayNum + param_1->ArrayNum;
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
          }
          piVar1 = &param_1->ArrayMax;
          if (*piVar1 < (int)uVar16) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
          }
          pFVar17 = (this->Items).AllocatorInstance.Data;
          iVar3 = (this->Items).ArrayNum;
          pFVar2 = pFVar17 + (longlong)iVar3 * 8;
          while( true ) {
            if ((this->Items).ArrayNum != iVar3) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FEnvQueryItem_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pFVar17 == pFVar2) break;
            pFVar15 = (FScriptContainerElement *)
                      (**(code **)(*(longlong *)pUVar14 + 0x2c8))
                                (pUVar14,local_48,
                                 (this->RawData).AllocatorInstance.Data +
                                 ((longlong)(*(int *)(pFVar17 + 4) * 2) >> 1));
            pFVar4 = (param_1->AllocatorInstance).Data;
            if (((pFVar4 <= pFVar15) && (pFVar15 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_1->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&param_1->AllocatorInstance,piVar1);
            }
            pFVar17 = pFVar17 + 8;
            param_1->ArrayNum = iVar9 + 1;
            uVar7 = *(undefined8 *)(pFVar15 + 8);
            pFVar5 = (param_1->AllocatorInstance).Data;
            pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
            *(undefined8 *)pFVar4 = *(undefined8 *)pFVar15;
            *(undefined8 *)(pFVar4 + 8) = uVar7;
            *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) =
                 *(undefined8 *)(pFVar15 + 0x10);
          }
        }
      }
    }
  }
  return;
}

// GetItemAsActor @ 146f56470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FEnvQueryResult::GetItemAsActor(FEnvQueryResult *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UEnvQueryItemType_ActorBase *pUVar8;
  AActor *pAVar9;
  uint uVar10;
  
  if ((((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) &&
      (pUVar6 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) &&
     (pUVar4 = UEnvQueryItemType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (pUVar6 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) {
      pUVar5 = UEnvQueryItemType::StaticClass();
      pUVar4 = (UClass *)0x0;
      pUVar7 = pUVar4;
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar7 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar6 = UEnvQueryItemType_ActorBase::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = (this->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar6 != (UClass *)0x0) &&
             (pUVar7 = UEnvQueryItemType::StaticClass(), pUVar7 != (UClass *)0x0)) {
            iVar1 = (int)pUVar7->_padding_;
            if (((int)pUVar6->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pUVar4 = (this->ItemType).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar8 = UClass::GetDefaultObject<UEnvQueryItemType_ActorBase>(pUVar4);
          if ((pUVar8 == (UEnvQueryItemType_ActorBase *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("DefTypeOb != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                                 ,0x24,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pAVar9 = (AActor *)(*pcVar2)();
            return pAVar9;
          }
          pcVar2 = *(code **)(*(longlong *)pUVar8 + 0x2d8);
          uVar10 = 0;
          if (param_1 < (this->Items).ArrayNum) {
            uVar10 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pAVar9 = (AActor *)(*pcVar2)();
            return pAVar9;
          }
          pAVar9 = (AActor *)
                   (*pcVar2)(pUVar8,(this->RawData).AllocatorInstance.Data +
                                    ((longlong)
                                     (*(int *)((this->Items).AllocatorInstance.Data +
                                              (longlong)param_1 * 8 + 4) * 2) >> 1));
          return pAVar9;
        }
      }
    }
  }
  return (AActor *)0x0;
}

// GetItemAsLocation @ 146f56660

TVector<double> * __thiscall
FEnvQueryResult::GetItemAsLocation
          (FEnvQueryResult *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UEnvQueryItemType_VectorBase *pUVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  
  if ((((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) &&
      (pUVar7 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) &&
     (pUVar5 = UEnvQueryItemType::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar7 = (this->ItemType).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) {
      pUVar6 = UEnvQueryItemType::StaticClass();
      pUVar5 = (UClass *)0x0;
      pUVar8 = pUVar5;
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar8 = (this->ItemType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar7 = UEnvQueryItemType_VectorBase::StaticClass();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar7 = (this->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar8 = UEnvQueryItemType::StaticClass(), pUVar8 != (UClass *)0x0)) {
            iVar1 = (int)pUVar8->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              pUVar5 = (this->ItemType).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar9 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>(pUVar5);
          if ((pUVar9 == (UEnvQueryItemType_VectorBase *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("DefTypeOb != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                                 ,0x32,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TVector<double> *)(*pcVar2)();
            return pTVar10;
          }
          pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x2c8);
          uVar11 = 0;
          if (param_1 < (this->Items).ArrayNum) {
            uVar11 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TVector<double> *)(*pcVar2)();
            return pTVar10;
          }
          (*pcVar2)(pUVar9,__return_storage_ptr__,
                    (this->RawData).AllocatorInstance.Data +
                    ((longlong)
                     (*(int *)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 8 + 4) * 2
                     ) >> 1));
          return __return_storage_ptr__;
        }
      }
    }
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

