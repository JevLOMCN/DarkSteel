// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 3

// FDatasmithCustomActionManager @ 14e2f3d10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FDatasmithCustomActionManager * __thiscall
FDatasmithCustomActionManager::FDatasmithCustomActionManager(FDatasmithCustomActionManager *this)

{
  int iVar1;
  UObjectBase *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FDatasmithCustomActionManager *pFVar9;
  UClass *pUVar10;
  longlong lVar11;
  FUObjectCppClassStaticFunctions local_res8;
  TObjectIterator<UClass> local_48;
  
  local_48.Index = 0xffffffff;
  (this->RegisteredActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredActions).ArrayNum = 0;
  (this->RegisteredActions).ArrayMax = 0;
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_48);
  while( true ) {
    lVar11 = (longlong)local_48.Index;
    if (local_48.Index < 0) break;
    if (local_48.ObjectArray.ArrayNum <= local_48.Index) break;
    uVar6 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_48.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDatasmithCustomActionManager *)(*pcVar3)();
        return pFVar9;
      }
    }
    if ((*(byte *)(*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0xd4) &
        1) == 0) {
      lVar11 = (longlong)local_48.Index;
      uVar6 = 0;
      if (local_48.Index < local_48.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_48.Index >> 0x1f;
      }
      iVar7 = local_48.ObjectArray.ArrayNum;
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FDatasmithCustomActionManager *)(*pcVar3)();
          return pFVar9;
        }
        iVar7 = local_48.ObjectArray.ArrayNum;
      }
      lVar11 = *(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
      if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton == (UClass *)0x0) {
        local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/DatasmithContent",L"DatasmithCustomActionBase",
                   &Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton,
                   UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase,0x30,
                   8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                   InternalConstructor<UDatasmithCustomActionBase>,
                   InternalVTableHelperCtorCaller<UDatasmithCustomActionBase>,&local_res8,
                   UObject::StaticClass,UObject::StaticClass);
        iVar7 = local_48.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton == (UClass *)0x0)
        goto LAB_14e2f4028;
      }
      iVar1 = (int)(Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton)->_padding_
      ;
      if ((*(int *)(lVar11 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar11 = (longlong)local_48.Index;
        uVar6 = 0;
        if (local_48.Index < iVar7) {
          uVar6 = (uint)~local_48.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FDatasmithCustomActionManager *)(*pcVar3)();
            return pFVar9;
          }
        }
        pUVar8 = *(UClass **)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        this_00 = (UObjectBase *)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar10 = UDatasmithCustomActionBase::StaticClass();
        pUVar8 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar7 = (int)pUVar10->_padding_;
        if (((int)pUVar8->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FDatasmithCustomActionManager *)(*pcVar3)();
            return pFVar9;
          }
        }
        iVar7 = (this->RegisteredActions).ArrayNum;
        if (iVar7 == (this->RegisteredActions).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,&(this->RegisteredActions).ArrayMax);
        }
        (this->RegisteredActions).ArrayNum = iVar7 + 1;
        pFVar2 = (this->RegisteredActions).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8) = 0;
        UObjectBase::AddRef(this_00);
        *(UObjectBase **)(pFVar2 + (longlong)iVar7 * 8) = this_00;
      }
    }
LAB_14e2f4028:
    TObjectIterator<UClass>::Advance(&local_48);
  }
  if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
  }
  return this;
}

// GetApplicableActions @ 14e2fa6a0

TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FDatasmithCustomActionManager::GetApplicableActions
          (FDatasmithCustomActionManager *this,
          TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->RegisteredActions).AllocatorInstance.Data;
  iVar2 = (this->RegisteredActions).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredActions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStrongObjectPtr<UDatasmithCustomActionBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    lVar3 = *(longlong *)pFVar10;
    if (lVar3 != 0) {
      cVar6 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x28))(lVar3 + 0x28,param_1);
      if (cVar6 != '\0') {
        local_38[0] = *(longlong *)pFVar10;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
            ;
            return pTVar9;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             local_38[0];
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return __return_storage_ptr__;
}

// GetApplicableActions @ 14e2fa7f0

TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FDatasmithCustomActionManager::GetApplicableActions
          (FDatasmithCustomActionManager *this,
          TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->RegisteredActions).AllocatorInstance.Data;
  iVar2 = (this->RegisteredActions).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredActions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStrongObjectPtr<UDatasmithCustomActionBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    lVar3 = *(longlong *)pFVar10;
    if (lVar3 != 0) {
      cVar6 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28,param_1);
      if (cVar6 != '\0') {
        local_38[0] = *(longlong *)pFVar10;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<UDatasmithCustomActionBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
            ;
            return pTVar9;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             local_38[0];
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return __return_storage_ptr__;
}

