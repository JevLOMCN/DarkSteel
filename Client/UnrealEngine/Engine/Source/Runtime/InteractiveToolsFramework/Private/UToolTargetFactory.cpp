// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 1496cc6d0

UClass * __cdecl UToolTargetFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTargetFactory",
               &Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton,
               StaticRegisterNativesUToolTargetFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolTargetFactory>,
               InternalVTableHelperCtorCaller<UToolTargetFactory>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton;
}

// UToolTargetFactory @ 1496d3e50

UToolTargetFactory * __thiscall
UToolTargetFactory::UToolTargetFactory(UToolTargetFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolTargetFactory__6B_;
  return this;
}

// UToolTargetFactory @ 1496d3e80

UToolTargetFactory * __thiscall
UToolTargetFactory::UToolTargetFactory(UToolTargetFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolTargetFactory__6B_;
  return this;
}

// ~UToolTargetFactory @ 1496d4b80

void __thiscall UToolTargetFactory::~UToolTargetFactory(UToolTargetFactory *this)

{
  *(undefined ***)this = &___7UToolTargetFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildFirstTarget @ 1496d7bf0

UToolTarget * __thiscall
UToolTargetFactory::BuildFirstTarget
          (UToolTargetFactory *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          FToolTargetTypeRequirements *param_2,TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  UToolTarget *pUVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = param_1->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar9) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar9 - iVar7,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    memset((param_3->AllocatorInstance).Data + iVar6,0,(longlong)(int)(uVar9 - iVar7));
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar7) {
      uVar11 = iVar7 - uVar9;
      if (((int)(uVar11 | uVar9) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UToolTarget *)(*pcVar3)();
        return pUVar8;
      }
      if (uVar11 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (int)uVar9;
        iVar7 = (*piVar1 - uVar9) - uVar11;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (int)uVar11,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar9 < iVar7) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UToolTarget *)(*pcVar3)();
        return pUVar8;
      }
      uVar2 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar10 * 8);
      FVar5 = (FScriptContainerElement)(**(code **)(*(longlong *)this + 0x2b0))(this,uVar2,param_2);
      uVar11 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UToolTarget *)(*pcVar3)();
        return pUVar8;
      }
      (param_3->AllocatorInstance).Data[lVar10] = FVar5;
      uVar11 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UToolTarget *)(*pcVar3)();
        return pUVar8;
      }
      if ((param_3->AllocatorInstance).Data[lVar10] != (FScriptContainerElement)0x0) {
        pUVar8 = (UToolTarget *)(**(code **)(*(longlong *)this + 0x2b8))(this,uVar2,param_2);
        return pUVar8;
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < iVar7);
  }
  return (UToolTarget *)0x0;
}

// BuildTarget @ 1496d8120

UToolTarget * __thiscall
UToolTargetFactory::BuildTarget
          (UToolTargetFactory *this,UObject *param_1,FToolTargetTypeRequirements *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\ToolTargets\\ToolTarget.h"
             ,0x61,L"Pure virtual not implemented (%s)");
  return (UToolTarget *)0x0;
}

// BuildTargets @ 1496d8220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> * __thiscall
UToolTargetFactory::BuildTargets
          (UToolTargetFactory *this,
          TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          FToolTargetTypeRequirements *param_2,TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  uint uVar6;
  int iVar7;
  TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(param_3,param_1->ArrayNum,Default);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      uVar1 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar11 * 8);
      FVar5 = (FScriptContainerElement)(**(code **)(*(longlong *)this + 0x2b0))(this,uVar1,param_2);
      uVar6 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      (param_3->AllocatorInstance).Data[lVar11] = FVar5;
      uVar6 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      if ((param_3->AllocatorInstance).Data[lVar11] != (FScriptContainerElement)0x0) {
        local_48[0] = (**(code **)(*(longlong *)this + 0x2b8))(this,uVar1,param_2);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UToolTarget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_48[0];
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  return __return_storage_ptr__;
}

// CanBuildTarget @ 1496d8aa0

bool __thiscall
UToolTargetFactory::CanBuildTarget
          (UToolTargetFactory *this,UObject *param_1,FToolTargetTypeRequirements *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\ToolTargets\\ToolTarget.h"
             ,0x60,L"Pure virtual not implemented (%s)");
  return false;
}

// CanBuildTargets @ 1496d8b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UToolTargetFactory::CanBuildTargets
          (UToolTargetFactory *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          FToolTargetTypeRequirements *param_2,TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar8 = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(param_3,param_1->ArrayNum,Default);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      FVar4 = (FScriptContainerElement)
              (**(code **)(*(longlong *)this + 0x2b0))
                        (this,*(undefined8 *)((param_1->AllocatorInstance).Data + lVar9 * 8),param_2
                        );
      uVar5 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      (param_3->AllocatorInstance).Data[lVar9] = FVar4;
      uVar5 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_1->ArrayNum;
      pFVar1 = (param_3->AllocatorInstance).Data + lVar9;
      lVar9 = lVar9 + 1;
      iVar8 = iVar8 + (uint)(byte)*pFVar1;
    } while ((int)uVar7 < iVar6);
  }
  return iVar8;
}

// GetPrivateStaticClass @ 1496ddff0

UClass * __cdecl UToolTargetFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTargetFactory",
               &Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton,
               StaticRegisterNativesUToolTargetFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolTargetFactory>,
               InternalVTableHelperCtorCaller<UToolTargetFactory>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTargetFactory.InnerSingleton;
}

// StaticRegisterNativesUToolTargetFactory @ 1496e67c0

void __cdecl UToolTargetFactory::StaticRegisterNativesUToolTargetFactory(void)

{
  return;
}

