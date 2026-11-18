// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147273090

UClass * __cdecl UViewModeUtils::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewModeUtils",
               &Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton,
               StaticRegisterNativesUViewModeUtils,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewModeUtils>,InternalVTableHelperCtorCaller<UViewModeUtils>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton;
}

// UViewModeUtils @ 147277600

UViewModeUtils * __thiscall
UViewModeUtils::UViewModeUtils(UViewModeUtils *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UViewModeUtils__6B_;
  return this;
}

// UViewModeUtils @ 147277630

UViewModeUtils * __thiscall
UViewModeUtils::UViewModeUtils(UViewModeUtils *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UViewModeUtils__6B_;
  return this;
}

// ~UViewModeUtils @ 147278590

void __thiscall UViewModeUtils::~UViewModeUtils(UViewModeUtils *this)

{
  *(undefined ***)this = &___7UViewModeUtils__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147279390

UClass * __cdecl UViewModeUtils::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewModeUtils",
               &Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton,
               StaticRegisterNativesUViewModeUtils,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewModeUtils>,InternalVTableHelperCtorCaller<UViewModeUtils>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton;
}

// StaticRegisterNativesUViewModeUtils @ 147279660

void __cdecl UViewModeUtils::StaticRegisterNativesUViewModeUtils(void)

{
  return;
}

// GetViewModeDisplayIcon @ 1489ef900

FSlateBrush * __cdecl UViewModeUtils::GetViewModeDisplayIcon(EViewModeIndex param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName FVar5;
  undefined8 uVar6;
  FSlateBrush *pFVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar9 = 0;
  if (!IconsInitialized) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0xff,&local_28,0,(int *)((longlong)&local_20 + 4));
    do {
      pIVar4 = FAppStyle::Get();
      pcVar2 = *(code **)((longlong)*pIVar4 + 0x50);
      FVar5 = GetViewModeIconName((EViewModeIndex)local_res10);
      uVar6 = (*pcVar2)(pIVar4,*(undefined8 *)FVar5,0,0);
      if ((int)local_20 == local_20._4_4_) {
        local_20._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_28,(int *)((longlong)&local_20 + 4));
      }
      iVar1 = (int)local_20 + 1;
      iVar9 = iVar9 + 1;
      *(undefined8 *)(local_28.Data + (longlong)(int)local_20 * 8) = uVar6;
      local_20._0_4_ = iVar1;
    } while (iVar9 < 0x100);
    if (GViewModeDisplayIcons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GViewModeDisplayIcons.AllocatorInstance.Data);
    }
    GViewModeDisplayIcons.AllocatorInstance.Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    GViewModeDisplayIcons.ArrayNum = (int)local_20;
    GViewModeDisplayIcons.ArrayMax = local_20._4_4_;
    local_20 = 0;
    IconsInitialized = true;
  }
  uVar8 = 0;
  if ((int)param_1 < GViewModeDisplayIcons.ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 != 0) {
    return *(FSlateBrush **)
            (GViewModeDisplayIcons.AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (!bVar3) {
    return *(FSlateBrush **)
            (GViewModeDisplayIcons.AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  }
  pcVar2 = (code *)swi(3);
  pFVar7 = (FSlateBrush *)(*pcVar2)();
  return pFVar7;
}

// GetViewModeDisplayName @ 1489efa90

FText * __cdecl
UViewModeUtils::GetViewModeDisplayName(FText *__return_storage_ptr__,EViewModeIndex param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  EViewModeIndex local_res10 [2];
  EViewModeIndex *local_res18;
  
  uVar4 = 0;
  if ((int)param_1 < GViewModeDisplayNames.ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = GViewModeDisplayNames.AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = *(ITextData **)pFVar6;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(pFVar6 + 8);
  bVar3 = FText::IsEmpty(__return_storage_ptr__);
  if (bVar3) {
    local_res18 = local_res10;
    `UViewModeUtils::GetViewModeDisplayName'::__l2::<lambda_1>::operator()(&local_res18);
  }
  return __return_storage_ptr__;
}

// GetViewModeDisplaySlateIcon @ 1489efb60

FSlateIcon * __cdecl
UViewModeUtils::GetViewModeDisplaySlateIcon
          (FSlateIcon *__return_storage_ptr__,EViewModeIndex param_1)

{
  FName FVar1;
  FName FVar2;
  undefined1 local_res20 [8];
  
  FVar1 = GetViewModeIconName((EViewModeIndex)local_res20);
  FVar1 = *(FName *)FVar1;
  FVar2 = FAppStyle::GetAppStyleSetName();
  FSlateIcon::FSlateIcon(__return_storage_ptr__,*(FName *)FVar2,FVar1,(FName)0x0,(FName)0x0);
  return __return_storage_ptr__;
}

// operator() @ 150534720

bool __thiscall `UViewModeUtils::GetViewModeDisplayName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<107052639673385198>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<107052639673385198>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

