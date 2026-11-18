// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 9

// StaticClass @ 14aba8d80

UClass * __cdecl UCustomizableSkeletalMeshActorPrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalMeshActorPrivate",
               &Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalMeshActorPrivate,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableSkeletalMeshActorPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalMeshActorPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton;
}

// UCustomizableSkeletalMeshActorPrivate @ 14abbdb50

UCustomizableSkeletalMeshActorPrivate * __thiscall
UCustomizableSkeletalMeshActorPrivate::UCustomizableSkeletalMeshActorPrivate
          (UCustomizableSkeletalMeshActorPrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCustomizableSkeletalMeshActorPrivate__6B_;
  return this;
}

// UCustomizableSkeletalMeshActorPrivate @ 14abbdb80

UCustomizableSkeletalMeshActorPrivate * __thiscall
UCustomizableSkeletalMeshActorPrivate::UCustomizableSkeletalMeshActorPrivate
          (UCustomizableSkeletalMeshActorPrivate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCustomizableSkeletalMeshActorPrivate__6B_;
  return this;
}

// ~UCustomizableSkeletalMeshActorPrivate @ 14abbfa70

void __thiscall
UCustomizableSkeletalMeshActorPrivate::~UCustomizableSkeletalMeshActorPrivate
          (UCustomizableSkeletalMeshActorPrivate *this)

{
  *(undefined ***)this = &___7UCustomizableSkeletalMeshActorPrivate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14abe0020

UClass * __cdecl UCustomizableSkeletalMeshActorPrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalMeshActorPrivate",
               &Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalMeshActorPrivate,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableSkeletalMeshActorPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalMeshActorPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalMeshActorPrivate.InnerSingleton;
}

// StaticRegisterNativesUCustomizableSkeletalMeshActorPrivate @ 14abf20a0

void __cdecl
UCustomizableSkeletalMeshActorPrivate::StaticRegisterNativesUCustomizableSkeletalMeshActorPrivate
          (void)

{
  return;
}

// GetComponents @ 14ac1dbf0

TArray<TObjectPtr<UCustomizableSkeletalComponent>,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableSkeletalMeshActorPrivate::GetComponents(UCustomizableSkeletalMeshActorPrivate *this)

{
  ACustomizableSkeletalMeshActor *pAVar1;
  
  pAVar1 = GetPublic(this);
  return &pAVar1->CustomizableSkeletalComponents;
}

// GetPublic @ 14ac24790

ACustomizableSkeletalMeshActor * __thiscall
UCustomizableSkeletalMeshActorPrivate::GetPublic(UCustomizableSkeletalMeshActorPrivate *this)

{
  int iVar1;
  ACustomizableSkeletalMeshActor *pAVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pAVar2 = *(ACustomizableSkeletalMeshActor **)&this->field_0x20;
  if (pAVar2 == (ACustomizableSkeletalMeshActor *)0x0) {
    pFVar4 = GetTypeName<ACustomizableSkeletalMeshActor>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = ACustomizableSkeletalMeshActor::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pAVar2;
  }
  pFVar4 = GetTypeName<ACustomizableSkeletalMeshActor>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pAVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// Init @ 14ac25d00

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCustomizableSkeletalMeshActorPrivate::Init
          (UCustomizableSkeletalMeshActorPrivate *this,UCustomizableObjectInstance *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<USkeletalMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UCustomizableSkeletalComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UCustomizableObject *this_00;
  ACustomizableSkeletalMeshActor *pAVar9;
  UActorComponent *this_01;
  FName *pFVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UActorComponent *this_02;
  longlong *plVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_208 [32];
  UActorComponent **local_1e8;
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  UActorComponent *local_1b8;
  UActorComponent *local_1b0;
  FString local_1a8;
  undefined8 local_198;
  UCustomizableObject *local_190;
  undefined8 local_188;
  FName local_180;
  FString local_178;
  FString local_168;
  FName local_158;
  FName local_150;
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  this_00 = UCustomizableObjectInstance::GetCustomizableObject(param_1);
  if (this_00 != (UCustomizableObject *)0x0) {
    iVar16 = 0;
    local_190 = this_00;
    iVar8 = UCustomizableObject::GetComponentCount(this_00);
    if (0 < iVar8) {
      do {
        UCustomizableObject::GetComponentName(this_00,(int)&local_180);
        ::FName::ToString(&local_180,&local_1a8);
        if (iVar16 == 0) {
          pAVar9 = GetPublic(this);
          iVar8 = (pAVar9->SkeletalMeshComponents).ArrayNum;
          if (iVar8 < 1) {
            local_1e8 = (UActorComponent **)0x0;
            local_1e0 = (FScriptContainerElement *)(longlong)iVar8;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          this_01 = *(UActorComponent **)(pAVar9->SkeletalMeshComponents).AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl(&local_178,L"SkeletalMeshComponent %s");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_178.Data.ArrayNum != 0) {
            FVar14.Data = local_178.Data.AllocatorInstance.Data;
          }
          pFVar10 = ::FName::FName(&local_158,(wchar_t *)FVar14.Data);
          FVar4 = *pFVar10;
          pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          pAVar9 = GetPublic(this);
          if (FVar4 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pAVar9,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          CheckIsClassChildOf_Internal(pUVar12,pUVar11);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_148,pUVar11);
          local_148._24_4_ = RF_NoFlags;
          local_148._40_8_ = (UObject *)0x0;
          local_148[0x20] = false;
          local_148._48_8_ = (FObjectInstancingGraph *)0x0;
          local_148._56_8_ = (UPackage *)0x0;
          local_148._8_8_ = pAVar9;
          local_148._16_8_ = FVar4;
          this_01 = (UActorComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
          if (local_148._64_8_ != 0) {
            plVar13 = (longlong *)(local_148 + 0x50);
            if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
              plVar13 = (longlong *)local_148._104_8_;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          this_01->CreationMethod = Native;
          local_198 = 0;
          pcVar6 = *(code **)(this_01->_padding_ + 0x508);
          pAVar9 = GetPublic(this);
          (*pcVar6)(this_01,pAVar9->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
          UActorComponent::RegisterComponent(this_01);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        if (this_01 != (UActorComponent *)0x0) {
          if (iVar16 == 0) {
            pAVar9 = GetPublic(this);
            iVar8 = (pAVar9->CustomizableSkeletalComponents).ArrayNum;
            if (iVar8 < 1) {
              local_1e8 = (UActorComponent **)0x0;
              local_1e0 = (FScriptContainerElement *)(longlong)iVar8;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            this_02 = *(UActorComponent **)
                       (pAVar9->CustomizableSkeletalComponents).AllocatorInstance.Data;
          }
          else {
            ::FString::PrintfImpl(&local_168,L"CustomizableSkeletalComponent %s");
            iVar8 = local_168.Data.ArrayNum + -1;
            if (local_168.Data.ArrayNum == 0) {
              iVar8 = 0;
            }
            pFVar10 = ::FName::FName(&local_150,iVar8,
                                     (wchar_t *)local_168.Data.AllocatorInstance.Data,FNAME_Add);
            FVar4 = *pFVar10;
            pUVar11 = UCustomizableSkeletalComponent::StaticClass();
            pAVar9 = GetPublic(this);
            if (FVar4 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)pAVar9,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar12 = UCustomizableSkeletalComponent::StaticClass();
            CheckIsClassChildOf_Internal(pUVar12,pUVar11);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar11);
            local_c8._24_4_ = RF_NoFlags;
            local_c8._40_8_ = (UObject *)0x0;
            local_c8[0x20] = false;
            local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_c8._56_8_ = (UPackage *)0x0;
            local_c8._8_8_ = pAVar9;
            local_c8._16_8_ = FVar4;
            this_02 = (UActorComponent *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            if (local_c8._64_8_ != 0) {
              plVar13 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar13 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar13 + 0x10))();
            }
            this_00 = local_190;
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
              this_00 = local_190;
            }
          }
          local_188 = 0;
          (**(code **)(this_02->_padding_ + 0x508))
                    (this_02,this_01,&FAttachmentTransformRules::KeepRelativeTransform,0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1 != (UCustomizableObjectInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          this_02[3]._padding_ = (longlong)param_1;
          *(FName *)((longlong)&this_02[3]._padding_ + 4) = local_180;
          UActorComponent::RegisterComponent(this_02);
          pAVar9 = GetPublic(this);
          pTVar2 = &pAVar9->SkeletalMeshComponents;
          local_1b8 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar5 <= (FScriptContainerElement *)&local_1b8) &&
             (lVar15 = (longlong)(pAVar9->SkeletalMeshComponents).ArrayMax,
             (FScriptContainerElement *)&local_1b8 < pFVar5 + lVar15 * 8)) {
            local_1d0 = (longlong)(pAVar9->SkeletalMeshComponents).ArrayNum;
            local_1c8 = 8;
            local_1e8 = &local_1b8;
            local_1e0 = pFVar5;
            local_1d8 = lVar15;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar8 = (pAVar9->SkeletalMeshComponents).ArrayNum;
          piVar1 = &(pAVar9->SkeletalMeshComponents).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (pAVar9->SkeletalMeshComponents).ArrayNum = iVar8 + 1;
          *(UActorComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_1b8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1b8 != (UActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1b8);
          }
          pAVar9 = GetPublic(this);
          pTVar3 = &pAVar9->CustomizableSkeletalComponents;
          local_1b0 = this_02;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_02);
          }
          pFVar5 = (pTVar3->AllocatorInstance).Data;
          if ((pFVar5 <= (FScriptContainerElement *)&local_1b0) &&
             (lVar15 = (longlong)(pAVar9->CustomizableSkeletalComponents).ArrayMax,
             (FScriptContainerElement *)&local_1b0 < pFVar5 + lVar15 * 8)) {
            local_1d0 = (longlong)(pAVar9->CustomizableSkeletalComponents).ArrayNum;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = pFVar5;
            local_1d8 = lVar15;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar8 = (pAVar9->CustomizableSkeletalComponents).ArrayNum;
          piVar1 = &(pAVar9->CustomizableSkeletalComponents).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar3->AllocatorInstance,piVar1);
          }
          (pAVar9->CustomizableSkeletalComponents).ArrayNum = iVar8 + 1;
          *(UActorComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_1b0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1b0 != (UActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1b0);
          }
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        iVar16 = iVar16 + 1;
        iVar8 = UCustomizableObject::GetComponentCount(this_00);
      } while (iVar16 < iVar8);
    }
    UCustomizableObjectInstance::UpdateSkeletalMeshAsync(param_1,false,false);
  }
  return;
}

