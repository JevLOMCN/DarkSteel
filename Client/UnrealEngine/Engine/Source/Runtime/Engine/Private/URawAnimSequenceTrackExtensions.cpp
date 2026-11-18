// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14750d5e0

UClass * __cdecl URawAnimSequenceTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RawAnimSequenceTrackExtensions",
               &Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton,
               StaticRegisterNativesURawAnimSequenceTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URawAnimSequenceTrackExtensions>,
               InternalVTableHelperCtorCaller<URawAnimSequenceTrackExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton;
}

// URawAnimSequenceTrackExtensions @ 147532b70

URawAnimSequenceTrackExtensions * __thiscall
URawAnimSequenceTrackExtensions::URawAnimSequenceTrackExtensions
          (URawAnimSequenceTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7URawAnimSequenceTrackExtensions__6B_;
  return this;
}

// URawAnimSequenceTrackExtensions @ 147532ba0

URawAnimSequenceTrackExtensions * __thiscall
URawAnimSequenceTrackExtensions::URawAnimSequenceTrackExtensions
          (URawAnimSequenceTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7URawAnimSequenceTrackExtensions__6B_;
  return this;
}

// ~URawAnimSequenceTrackExtensions @ 147533e00

void __thiscall
URawAnimSequenceTrackExtensions::~URawAnimSequenceTrackExtensions
          (URawAnimSequenceTrackExtensions *this)

{
  *(undefined ***)this = &___7URawAnimSequenceTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14755f400

UClass * __cdecl URawAnimSequenceTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RawAnimSequenceTrackExtensions",
               &Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton,
               StaticRegisterNativesURawAnimSequenceTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URawAnimSequenceTrackExtensions>,
               InternalVTableHelperCtorCaller<URawAnimSequenceTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton;
}

// StaticRegisterNativesURawAnimSequenceTrackExtensions @ 14757adc0

void __cdecl
URawAnimSequenceTrackExtensions::StaticRegisterNativesURawAnimSequenceTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPositionalKeys @ 147584ac0

void __cdecl
URawAnimSequenceTrackExtensions::execGetPositionalKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  
  iVar7 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_80 = 0;
  ppvVar9 = &local_60;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar9 + 1);
  puVar8 = *ppvVar9;
  puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)iVar2 * 0xc);
  while( true ) {
    if (*(int *)(ppvVar9 + 1) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
      iVar7 = (int)local_80;
    }
    if (puVar8 == puVar1) break;
    local_78 = (double)(float)*puVar8;
    dStack_70 = (double)(float)((ulonglong)*puVar8 >> 0x20);
    local_68 = (double)*(float *)(puVar8 + 1);
    iVar6 = iVar7;
    if ((local_88.Data <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x18)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_80;
    }
    if (iVar6 == local_80._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_88,(int *)((longlong)&local_80 + 4));
    }
    iVar7 = iVar6 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar7);
    puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18) = local_78;
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18 + 8) = dStack_70;
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18 + 0x10) = local_68;
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
      iVar7 = (int)local_80;
    }
    *(FScriptContainerElement **)param_3 = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar7;
    *(int *)((longlong)param_3 + 0xc) = local_80._4_4_;
    local_80 = 0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execGetRotationalKeys @ 147584d30

void __cdecl
URawAnimSequenceTrackExtensions::execGetRotationalKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  void **ppvVar8;
  float *pfVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  iVar6 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_80 = 0;
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar8 + 3);
  pfVar7 = ppvVar8[2];
  pfVar9 = pfVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if (*(int *)(ppvVar8 + 3) != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TQuat<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      iVar6 = (int)local_80;
    }
    if (pfVar7 == pfVar9) break;
    local_78 = (double)*pfVar7;
    dStack_70 = (double)pfVar7[1];
    local_68 = (double)pfVar7[2];
    dStack_60 = (double)pfVar7[3];
    iVar5 = iVar6;
    if ((local_88.Data <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x20)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)local_80;
    }
    if (iVar5 == local_80._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&local_88,(int *)((longlong)&local_80 + 4));
    }
    iVar6 = iVar5 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    pfVar7 = pfVar7 + 4;
    *(double *)(local_88.Data + (longlong)iVar5 * 0x20) = local_78;
    *(double *)(local_88.Data + (longlong)iVar5 * 0x20 + 8) = dStack_70;
    *(double *)(local_88.Data + (longlong)iVar5 * 0x20 + 0x10) = local_68;
    *(double *)(local_88.Data + (longlong)iVar5 * 0x20 + 0x10 + 8) = dStack_60;
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
      iVar6 = (int)local_80;
    }
    *(FScriptContainerElement **)param_3 = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = local_80._4_4_;
    local_80 = 0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetScaleKeys @ 147584fb0

void __cdecl
URawAnimSequenceTrackExtensions::execGetScaleKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  
  iVar7 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_80 = 0;
  ppvVar9 = &local_60;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar9 + 5);
  puVar8 = ppvVar9[4];
  puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)iVar2 * 0xc);
  while( true ) {
    if (*(int *)(ppvVar9 + 5) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
      iVar7 = (int)local_80;
    }
    if (puVar8 == puVar1) break;
    local_78 = (double)(float)*puVar8;
    dStack_70 = (double)(float)((ulonglong)*puVar8 >> 0x20);
    local_68 = (double)*(float *)(puVar8 + 1);
    iVar6 = iVar7;
    if ((local_88.Data <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x18)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_80;
    }
    if (iVar6 == local_80._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_88,(int *)((longlong)&local_80 + 4));
    }
    iVar7 = iVar6 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar7);
    puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18) = local_78;
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18 + 8) = dStack_70;
    *(double *)(local_88.Data + (longlong)iVar6 * 0x18 + 0x10) = local_68;
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
      iVar7 = (int)local_80;
    }
    *(FScriptContainerElement **)param_3 = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar7;
    *(int *)((longlong)param_3 + 0xc) = local_80._4_4_;
    local_80 = 0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

