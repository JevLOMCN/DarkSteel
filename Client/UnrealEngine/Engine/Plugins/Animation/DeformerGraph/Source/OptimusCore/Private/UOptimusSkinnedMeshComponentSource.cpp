// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 13

// StaticClass @ 14e113ee0

UClass * __cdecl UOptimusSkinnedMeshComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshComponentSource",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton;
}

// UOptimusSkinnedMeshComponentSource @ 14e15d0c0

UOptimusSkinnedMeshComponentSource * __thiscall
UOptimusSkinnedMeshComponentSource::UOptimusSkinnedMeshComponentSource
          (UOptimusSkinnedMeshComponentSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshComponentSource__6B_;
  return this;
}

// UOptimusSkinnedMeshComponentSource @ 14e15d0f0

UOptimusSkinnedMeshComponentSource * __thiscall
UOptimusSkinnedMeshComponentSource::UOptimusSkinnedMeshComponentSource
          (UOptimusSkinnedMeshComponentSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshComponentSource__6B_;
  return this;
}

// ~UOptimusSkinnedMeshComponentSource @ 14e164040

void __thiscall
UOptimusSkinnedMeshComponentSource::~UOptimusSkinnedMeshComponentSource
          (UOptimusSkinnedMeshComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBindingName @ 14e1bbc00

FName __thiscall
UOptimusSkinnedMeshComponentSource::GetBindingName(UOptimusSkinnedMeshComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkinnedMesh");
  return in_RDX;
}

// GetComponentClass @ 14e1be640

TSubclassOf<UActorComponent> __thiscall
UOptimusSkinnedMeshComponentSource::GetComponentClass(UOptimusSkinnedMeshComponentSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetComponentElementCountsForExecutionDomain @ 14e1be690

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
UOptimusSkinnedMeshComponentSource::GetComponentElementCountsForExecutionDomain
          (UOptimusSkinnedMeshComponentSource *this,FName param_1,UActorComponent *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 local_38 [4];
  
  if (param_2 != (UActorComponent *)0x0) {
    pUVar9 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if (((iVar8 <= *(int *)(param_2->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
         &pUVar9->_padding_)) && (*(longlong *)&param_2[10].UCSSerializationIndex != 0)) {
      plVar2 = *(longlong **)(*(longlong *)&param_2[10].UCSSerializationIndex + 0x48);
      uVar13 = 0;
      uVar10 = 0;
      if (param_3 < (int)plVar2[1]) {
        uVar10 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      piVar1 = &param_4->ArrayMax;
      lVar3 = *(longlong *)(*plVar2 + (longlong)param_3 * 8);
      param_4->ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_4->AllocatorInstance,0,piVar1);
      }
      if ((param_1 == Domains::Triangle) || (param_1 == Domains::Vertex)) {
        uVar10 = *(uint *)(lVar3 + 0x18);
        lVar14 = (longlong)(int)uVar10;
        param_4->ArrayNum = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_4->AllocatorInstance,0,piVar1);
        }
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if (*piVar1 < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar10,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
        }
        uVar15 = uVar13;
        if (0 < (int)uVar10) {
          do {
            uVar12 = (uint)uVar13;
            uVar10 = 0;
            if ((int)uVar12 < *(int *)(lVar3 + 0x18)) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            lVar11 = *(longlong *)(lVar3 + 0x10) + 0x48;
            if (param_1 != Domains::Vertex) {
              lVar11 = *(longlong *)(lVar3 + 0x10) + 8;
            }
            local_38[0] = *(undefined4 *)(lVar11 + uVar15);
            pFVar4 = (param_4->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
                ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            iVar8 = param_4->ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_4->AllocatorInstance,piVar1);
            }
            uVar13 = (ulonglong)(uVar12 + 1);
            param_4->ArrayNum = iVar8 + 1;
            *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38[0];
            lVar14 = lVar14 + -1;
            uVar15 = uVar15 + 0x118;
          } while (lVar14 != 0);
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      return bVar6;
    }
  }
  return false;
}

// GetDefaultNumInvocations @ 14e1c31f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UOptimusSkinnedMeshComponentSource::GetDefaultNumInvocations
          (UOptimusSkinnedMeshComponentSource *this,UActorComponent *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) && (*(longlong *)&param_1[10].UCSSerializationIndex != 0)) {
      plVar2 = *(longlong **)(*(longlong *)&param_1[10].UCSSerializationIndex + 0x48);
      uVar5 = 0;
      if (param_2 < (int)plVar2[1]) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      return *(uint *)(*(longlong *)(*plVar2 + (longlong)param_2 * 8) + 0x18);
    }
  }
  return 0;
}

// GetDisplayName @ 14e1c4c70

FText * __thiscall
UOptimusSkinnedMeshComponentSource::GetDisplayName
          (UOptimusSkinnedMeshComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"OptimusSkinnedMeshComponentSource",L"SkinnedMeshComponent",
             L"Skinned Mesh Component");
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e1c50d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinnedMeshComponentSource::GetExecutionDomains
          (UOptimusSkinnedMeshComponentSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = Domains::Triangle;
  FVar2 = Domains::Vertex;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  *pFVar1 = FVar2;
  pFVar1[1] = FVar3;
  return __return_storage_ptr__;
}

// GetLodIndex @ 14e1c9150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UOptimusSkinnedMeshComponentSource::GetLodIndex
          (UOptimusSkinnedMeshComponentSource *this,UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return *(int *)((longlong)&param_1[10]._padding_ + 4);
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 14e1d9180

UClass * __cdecl UOptimusSkinnedMeshComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshComponentSource",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.InnerSingleton;
}

// StaticRegisterNativesUOptimusSkinnedMeshComponentSource @ 14e225ec0

void __cdecl
UOptimusSkinnedMeshComponentSource::StaticRegisterNativesUOptimusSkinnedMeshComponentSource(void)

{
  return;
}

