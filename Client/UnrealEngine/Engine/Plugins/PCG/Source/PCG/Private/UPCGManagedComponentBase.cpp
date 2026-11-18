// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// ResetComponent @ 149f10e10

void __thiscall UPCGManagedComponentBase::ResetComponent(UPCGManagedComponentBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
                     ,0xb0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SupportsComponentReset @ 149f14380

bool __thiscall UPCGManagedComponentBase::SupportsComponentReset(UPCGManagedComponentBase *this)

{
  return false;
}

// StaticClass @ 149f1da20

UClass * __cdecl UPCGManagedComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentBase",
               &Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedComponentBase>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentBase>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton;
}

// UPCGManagedComponentBase @ 149f32630

UPCGManagedComponentBase * __thiscall
UPCGManagedComponentBase::UPCGManagedComponentBase
          (UPCGManagedComponentBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UPCGManagedComponentBase__6B_;
  this->field_0x2c = 0;
  this->field_0x30 = 0;
  return this;
}

// UPCGManagedComponentBase @ 149f32670

UPCGManagedComponentBase * __thiscall
UPCGManagedComponentBase::UPCGManagedComponentBase
          (UPCGManagedComponentBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UPCGManagedComponentBase__6B_;
  this->field_0x2c = 0;
  this->field_0x30 = 0;
  return this;
}

// ~UPCGManagedComponentBase @ 149f348a0

void __thiscall UPCGManagedComponentBase::~UPCGManagedComponentBase(UPCGManagedComponentBase *this)

{
  *(undefined ***)this = &___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ForgetComponent @ 149f46370

void __thiscall
UPCGManagedComponentBase::ForgetComponent(UPCGManagedComponentBase *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149f46373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x300))();
  return;
}

// ForgetComponent @ 149f46380

void __thiscall UPCGManagedComponentBase::ForgetComponent(UPCGManagedComponentBase *this)

{
  return;
}

// ForgetComponents @ 149f46430

void __thiscall UPCGManagedComponentBase::ForgetComponents(UPCGManagedComponentBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x330))();
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(*(longlong *)this + 0x308))(this,iVar1);
  }
  return;
}

// GetComponentsArray @ 149f48fe0

TArrayView<TSoftObjectPtr<UActorComponent>,int> * __thiscall
UPCGManagedComponentBase::GetComponentsArray
          (UPCGManagedComponentBase *this,
          TArrayView<TSoftObjectPtr<UActorComponent>,int> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
             ,0xb4,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (TSoftObjectPtr<UActorComponent> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetComponentsCount @ 149f49090

int __thiscall UPCGManagedComponentBase::GetComponentsCount(UPCGManagedComponentBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
             ,0xb5,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 149f4d500

UClass * __cdecl UPCGManagedComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentBase",
               &Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedComponentBase>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentBase>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton;
}

// IsManaging @ 149f52740

bool __thiscall
UPCGManagedComponentBase::IsManaging(UPCGManagedComponentBase *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  TArrayView<TSoftObjectPtr<UActorComponent>,int> *pTVar4;
  undefined1 local_18 [16];
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pTVar4 = (TArrayView<TSoftObjectPtr<UActorComponent>,int> *)
               (**(code **)(*(longlong *)this + 0x328))(this,local_18);
      bVar2 = Algo::
              NoneOf<TArrayView<TSoftObjectPtr<UActorComponent>,int>,_UPCGManagedComponentBase::IsManaging_::__l2::<lambda_1>_>
                        (pTVar4,(<lambda_1>)param_1);
      return !bVar2;
    }
  }
  return false;
}

// MarkAsReused @ 149f54440

void __thiscall UPCGManagedComponentBase::MarkAsReused(UPCGManagedComponentBase *this)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FName FVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  FWeakObjectPtr *pFVar11;
  int iVar12;
  FWeakObjectPtr *local_78;
  int local_70;
  TPersistentObjectPtr<FSoftObjectPath> local_68;
  
  this->field_0x30 = 0;
  (**(code **)(*(longlong *)this + 0x328))(this,&local_78);
  pFVar11 = local_78;
  do {
    if (pFVar11 == local_78 + (longlong)local_70 * 5) {
      return;
    }
    local_68.WeakPtr = *pFVar11;
    FSoftObjectPath::FSoftObjectPath(&local_68.ObjectID,(FSoftObjectPath *)(pFVar11 + 1));
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_68);
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_68);
        if (pUVar5 == (UObject *)0x0) {
LAB_149f54549:
          pUVar5 = (UObject *)0x0;
        }
        else {
          pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) goto LAB_149f54549;
        }
        if (((*(ulonglong *)&pUVar5[2].field_0x18 < 0x1552922a1) &&
            (&PCGHelpers::MarkedForCleanupPCGTag <
             (FName *)(*(ulonglong *)&pUVar5[2].field_0x18 +
                      (longlong)*(int *)&pUVar5[2].field_0x24 * 8))) &&
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
        iVar1 = *(int *)&pUVar5[2].field_0x20;
        if (iVar1 != 0) {
          pFVar2 = *(FName **)&pUVar5[2].field_0x18;
          iVar12 = 0;
          lVar8 = 0;
          bVar4 = *pFVar2 != PCGHelpers::MarkedForCleanupPCGTag;
          FVar7 = PCGHelpers::MarkedForCleanupPCGTag;
          iVar9 = 0;
          do {
            iVar10 = iVar9;
            do {
              lVar8 = lVar8 + 1;
              iVar10 = iVar10 + 1;
              if (iVar1 <= lVar8) break;
            } while (bVar4 == (pFVar2[lVar8] != FVar7));
            if (bVar4 != false) {
              if (iVar12 != iVar9) {
                memmove(pFVar2 + iVar12,pFVar2 + iVar9,(longlong)(iVar10 - iVar9) << 3);
                FVar7 = PCGHelpers::MarkedForCleanupPCGTag;
              }
              iVar12 = iVar12 + (iVar10 - iVar9);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar9 = iVar10;
          } while (lVar8 < iVar1);
          *(int *)&pUVar5[2].field_0x20 = iVar12;
        }
      }
    }
    if (local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar11 = pFVar11 + 5;
  } while( true );
}

// MarkAsUsed @ 149f54c80

void __thiscall UPCGManagedComponentBase::MarkAsUsed(UPCGManagedComponentBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr *local_48;
  int local_40;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  if (this->field_0x30 != '\0') {
    cVar2 = (**(code **)(*(longlong *)this + 0x2c8))();
    if ((cVar2 == '\0') &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<521289505089519665>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
                           ,0x31,"CanBeUsed()"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->field_0x30 = 0;
    cVar2 = (**(code **)(*(longlong *)this + 800))(this);
    if ((cVar2 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SupportsComponentReset()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
                           ,0x289,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = (**(code **)(*(longlong *)this + 0x330))(this);
    pUVar7 = (UObject *)0x0;
    pUVar5 = pUVar7;
    if (0 < iVar4) {
      do {
        (**(code **)(*(longlong *)this + 0x318))(this,pUVar5);
        uVar8 = (int)pUVar5 + 1;
        pUVar5 = (UObject *)(ulonglong)uVar8;
      } while ((int)uVar8 < iVar4);
    }
    (**(code **)(*(longlong *)this + 0x328))(this,&local_48);
    for (pFVar9 = local_48; pFVar9 != local_48 + (longlong)local_40 * 5; pFVar9 = pFVar9 + 5) {
      local_38.WeakPtr = *pFVar9;
      FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)(pFVar9 + 1));
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
      if (pUVar5 != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar4 = (int)pUVar6->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar6->_padding_)) {
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
          if (pUVar5 == (UObject *)0x0) {
LAB_149f54e0f:
            pUVar5 = pUVar7;
          }
          else {
            pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) goto LAB_149f54e0f;
          }
          *(undefined4 *)&pUVar5[2].field_0x20 = 0;
          if (*(int *)&pUVar5[2].field_0x24 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,(ForAnyElementType *)&pUVar5[2].field_0x18,0,
                       (int *)&pUVar5[2].field_0x24);
          }
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
          if (pUVar5 == (UObject *)0x0) {
LAB_149f54e76:
            pUVar5 = pUVar7;
          }
          else {
            pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) goto LAB_149f54e76;
          }
          if (((*(ulonglong *)&pUVar5[2].field_0x18 < 0x155292289) &&
              (&PCGHelpers::DefaultPCGTag <
               (FName *)(*(ulonglong *)&pUVar5[2].field_0x18 +
                        (longlong)*(int *)&pUVar5[2].field_0x24 * 8))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = *(int *)&pUVar5[2].field_0x20;
          if (iVar4 == *(int *)&pUVar5[2].field_0x24) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)&pUVar5[2].field_0x18,
                               (int *)&pUVar5[2].field_0x24);
          }
          *(int *)&pUVar5[2].field_0x20 = iVar4 + 1;
          *(FName *)(*(longlong *)&pUVar5[2].field_0x18 + (longlong)iVar4 * 8) =
               PCGHelpers::DefaultPCGTag;
        }
      }
      if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// MoveResourceToNewActor @ 149f56260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPCGManagedComponentBase::MoveResourceToNewActor
          (UPCGManagedComponentBase *this,AActor *param_1,AActor *param_2)

{
  int iVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UActorComponent *pUVar9;
  int iVar10;
  longlong lVar11;
  longlong local_68;
  int local_60;
  TPersistentObjectPtr<FSoftObjectPath> local_58;
  
  if ((param_1 == (AActor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
                         ,0x236,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = false;
  (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
  iVar10 = local_60 + -1;
  if (-1 < iVar10) {
    lVar11 = (longlong)iVar10 * 0x28;
    bVar3 = false;
    do {
      if ((local_60 <= iVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_58.WeakPtr = *(FWeakObjectPtr *)(local_68 + lVar11);
      FSoftObjectPath::FSoftObjectPath
                (&local_58.ObjectID,(FSoftObjectPath *)((FWeakObjectPtr *)(local_68 + lVar11) + 1));
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
      if (pUVar7 != (UObject *)0x0) {
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
          if (pUVar7 == (UObject *)0x0) {
LAB_149f563b5:
            pUVar7 = (UObject *)0x0;
          }
          else {
            pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar1 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) goto LAB_149f563b5;
          }
          this_00 = *(AActor **)&pUVar7[4].field_0x8;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_00 == (AActor *)0x0) goto LAB_149f563db;
          }
          else if (this_00 == (AActor *)0x0) {
LAB_149f563db:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OldOwner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
                               ,0x245,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          else {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          if ((param_2 == (AActor *)0x0) || ((this_00 != (AActor *)0x0 && (this_00 == param_2)))) {
            pUVar9 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
            if (pUVar9 == (UActorComponent *)0x0) {
LAB_149f56452:
              pUVar9 = (UActorComponent *)0x0;
            }
            else {
              pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_149f56452;
            }
            UActorComponent::UnregisterComponent(pUVar9);
            pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
            if (pUVar7 == (UObject *)0x0) {
LAB_149f56491:
              pUVar7 = (UObject *)0x0;
            }
            else {
              pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_149f56491;
            }
            (**(code **)(*(longlong *)pUVar7 + 0x170))(pUVar7,0,param_1,0);
            pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
            if (pUVar7 == (UObject *)0x0) {
LAB_149f564ff:
              pUVar7 = (UObject *)0x0;
            }
            else {
              pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_149f564ff;
              pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_149f564ff;
            }
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar7 != (UObject *)0x0) goto LAB_149f5651e;
LAB_149f56569:
              pUVar9 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
              if (pUVar9 == (UActorComponent *)0x0) {
LAB_149f5659e:
                pUVar9 = (UActorComponent *)0x0;
              }
              else {
                pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
                iVar1 = (int)pUVar8->_padding_;
                if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar8->_padding_)) goto LAB_149f5659e;
              }
              AActor::RemoveInstanceComponent(this_00,pUVar9);
LAB_149f565ab:
              pUVar9 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
              if (pUVar9 == (UActorComponent *)0x0) {
LAB_149f565e0:
                pUVar9 = (UActorComponent *)0x0;
              }
              else {
                pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
                iVar1 = (int)pUVar8->_padding_;
                if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar8->_padding_)) goto LAB_149f565e0;
              }
              AActor::AddInstanceComponent(param_1,pUVar9);
            }
            else {
              if (pUVar7 == (UObject *)0x0) goto LAB_149f56569;
              UE::GC::MarkAsReachable(pUVar7);
LAB_149f5651e:
              (**(code **)(*(longlong *)pUVar7 + 0x518))
                        (pUVar7,&FDetachmentTransformRules::KeepWorldTransform);
              cVar6 = (**(code **)(*(longlong *)pUVar7 + 0x508))
                                (pUVar7,(param_1->RootComponent).field0_0x0.DebugPtr,
                                 &FAttachmentTransformRules::KeepWorldTransform);
              if (cVar6 == '\0') goto LAB_149f565ab;
            }
            pUVar9 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_58);
            if (pUVar9 == (UActorComponent *)0x0) {
LAB_149f56622:
              pUVar9 = (UActorComponent *)0x0;
            }
            else {
              pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_149f56622;
            }
            UActorComponent::RegisterComponent(pUVar9);
            (**(code **)(*(longlong *)this + 0x308))(this,iVar10);
            bVar3 = true;
          }
        }
      }
      if (local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + -1;
      lVar11 = lVar11 + -0x28;
    } while (-1 < iVar10);
  }
  return bVar3;
}

// PostEditImport @ 149f57850

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

void __thiscall UPCGManagedComponentBase::PostEditImport(UPCGManagedComponentBase *this)

{
  longlong *plVar1;
  int iVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  UClass *local_278;
  UClass *local_270;
  longlong local_268;
  int local_260;
  TPersistentObjectPtr<FSoftObjectPath> local_258;
  longlong local_230 [64];
  longlong *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  lVar12 = *(longlong *)&this->field_0x20;
  if (lVar12 == 0) {
LAB_149f57b03:
    iVar5 = (**(code **)(*(longlong *)this + 0x330))(this);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      (**(code **)(*(longlong *)this + 0x308))(this,iVar5);
    }
    return;
  }
  pUVar6 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar5 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar5) ||
      ((longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
       &pUVar6->_padding_)) || (this_00 = *(AActor **)(lVar12 + 0xa8), this_00 == (AActor *)0x0))
  goto LAB_149f57b03;
  iVar5 = (**(code **)(*(longlong *)this + 0x330))(this);
  if (iVar5 < 1) {
    return;
  }
  pUVar9 = (UClass *)0x0;
  pUVar6 = (UClass *)0x0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  local_24 = 0x40;
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_149f5794f;
  }
  else {
    pUVar6 = pUVar9;
    if (pUVar7 == (UClass *)0x0) goto LAB_149f5794f;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar6 = pUVar9;
  if (pUVar8 != (UClass *)0x0) {
    iVar5 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) != &pUVar8->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = pUVar7;
    }
  }
LAB_149f5794f:
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar6 == pUVar9) {
    local_278 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_278,
               (TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                *)local_230);
  }
  else {
    local_270 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_270,
               (TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                *)local_230);
  }
  (**(code **)(*(longlong *)this + 0x328))(this,&local_268);
  iVar5 = local_260 + -1;
  if (-1 < iVar5) {
    lVar13 = (longlong)iVar5;
    lVar12 = lVar13 * 0x28;
    do {
      if (local_260 <= iVar5) {
        local_280 = (longlong)local_260;
        local_288 = lVar13;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_258.WeakPtr = *(FWeakObjectPtr *)(local_268 + lVar12);
      FSoftObjectPath::FSoftObjectPath
                (&local_258.ObjectID,(FSoftObjectPath *)((FWeakObjectPtr *)(local_268 + lVar12) + 1)
                );
      if (local_258.ObjectID.AssetPath.PackageName != (FName)0x0) {
        pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_258);
        if (pUVar10 != (UObject *)0x0) {
          pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            plVar11 = local_230;
            if (local_30 != (longlong *)0x0) {
              plVar11 = local_30;
            }
            plVar1 = plVar11 + local_28;
            for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
              if ((UObject *)*plVar11 == pUVar10) goto LAB_149f57abc;
            }
          }
        }
        (**(code **)(*(longlong *)this + 0x308))(this,iVar5);
      }
LAB_149f57abc:
      if (local_258.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + -0x28;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if (local_30 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(local_30);
  return;
}

// ResetComponent @ 149f5e360

void __thiscall UPCGManagedComponentBase::ResetComponent(UPCGManagedComponentBase *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149f5e363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x310))();
  return;
}

// ResetComponents @ 149f5e410

void __thiscall UPCGManagedComponentBase::ResetComponents(UPCGManagedComponentBase *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x330))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(*(longlong *)this + 0x318))(this,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// SetupGeneratedComponentFromBP @ 149f62fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGManagedComponentBase::SetupGeneratedComponentFromBP
          (UPCGManagedComponentBase *this,TSoftObjectPtr<UActorComponent> *param_1)

{
  int iVar1;
  AActor *this_00;
  void *pvVar2;
  UActorComponent *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = (UActorComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar3 != (UActorComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (this_00 = pUVar3->OwnerPrivate, this_00 != (AActor *)0x0)) &&
       (pUVar3->CreationMethod == UserConstructionScript)) {
      AActor::RemoveOwnedComponent(this_00,pUVar3);
      pUVar3->CreationMethod = Instance;
      AActor::AddOwnedComponent(this_00,pUVar3);
    }
  }
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  FMemory::Free(pvVar2);
  return;
}

// StaticRegisterNativesUPCGManagedComponentBase @ 149f639d0

void __cdecl UPCGManagedComponentBase::StaticRegisterNativesUPCGManagedComponentBase(void)

{
  return;
}

