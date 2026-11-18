// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 14

// StaticClass @ 14e2ed020

UClass * __cdecl UDatasmithContentBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithContentBlueprintLibrary",
               &Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUDatasmithContentBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithContentBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UDatasmithContentBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton;
}

// UDatasmithContentBlueprintLibrary @ 14e2f4890

UDatasmithContentBlueprintLibrary * __thiscall
UDatasmithContentBlueprintLibrary::UDatasmithContentBlueprintLibrary
          (UDatasmithContentBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

// UDatasmithContentBlueprintLibrary @ 14e2f48c0

UDatasmithContentBlueprintLibrary * __thiscall
UDatasmithContentBlueprintLibrary::UDatasmithContentBlueprintLibrary
          (UDatasmithContentBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

// ~UDatasmithContentBlueprintLibrary @ 14e2f5f20

void __thiscall
UDatasmithContentBlueprintLibrary::~UDatasmithContentBlueprintLibrary
          (UDatasmithContentBlueprintLibrary *this)

{
  *(undefined ***)this = &_vftable_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDatasmithUserData @ 14e2faa90

UDatasmithAssetUserData * __cdecl
UDatasmithContentBlueprintLibrary::GetDatasmithUserData(UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UDatasmithAssetUserData *pUVar5;
  UClass *pUStackX_8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14e2fa9f1;
    param_1 = *(UObject **)(param_1 + 0xb);
  }
  if (param_1 == (UObject *)0x0) {
    return (UDatasmithAssetUserData *)0x0;
  }
LAB_14e2fa9f1:
  pUVar3 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
  if (plVar4 == (longlong *)0x0) {
    return (UDatasmithAssetUserData *)0x0;
  }
  pcVar2 = *(code **)(*plVar4 + 0x18);
  pUStackX_8 = UDatasmithAssetUserData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_8);
  }
  pUVar5 = (UDatasmithAssetUserData *)(*pcVar2)(plVar4,&pUStackX_8);
  if (pUVar5 != (UDatasmithAssetUserData *)0x0) {
    pUVar3 = UDatasmithAssetUserData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar5;
    }
  }
  return (UDatasmithAssetUserData *)0x0;
}

// GetDatasmithUserDataKeysAndValuesForValue @ 14e2faaa0

void __cdecl
UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue
          (UObject *param_1,FString *param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UDatasmithAssetUserData *pUVar11;
  size_t sVar12;
  byte bVar13;
  longlong lVar14;
  wchar_t *_Str;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  FString *local_res10;
  uint local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  param_3->ArrayNum = 0;
  local_res10 = param_2;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  piVar1 = &param_4->ArrayMax;
  pFVar4 = (param_4->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar4,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,param_4->ArrayNum);
    param_4->ArrayNum = 0;
  }
  if ((param_1 == (UObject *)0x0) ||
     (pUVar11 = UDatasmithAssetUserData::GetDatasmithUserData(param_1),
     pUVar11 == (UDatasmithAssetUserData *)0x0)) {
    return;
  }
  puVar2 = &(pUVar11->MetaData).field_0x10;
  iVar17 = 0;
  iVar19 = 0;
  uVar8 = 1;
  iVar10 = *(int *)&(pUVar11->MetaData).field_0x28;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar20 = *(uint **)&(pUVar11->MetaData).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar21 = *puVar20;
    iVar19 = 0;
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e2fabfd;
      uVar21 = puVar20[lVar14 + 1];
    }
    uVar8 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar9 = iVar19 + -1 + local_res20;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14e2fabfd:
  local_res18 = *(uint *)&(pUVar11->MetaData).field_0x28;
  uVar21 = local_res18 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iVar9;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uVar8,iVar17);
  iVar17 = (int)local_res18 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar19;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(pUVar11->MetaData).field_0x8 -
                       *(int *)&(pUVar11->MetaData).field_0x34);
  bVar13 = (byte)local_res18;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)local_res18 < 0) || (iVar10 < (int)local_res18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(pUVar11->MetaData).field_0x28;
  uVar15 = local_res18;
  if (local_res18 != uVar8) {
    puVar18 = *(undefined1 **)&(pUVar11->MetaData).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar15 = -1 << (bVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      local_res18 = uVar8;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e2fad20;
      uVar15 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14 + -1 + uVar21;
    uVar15 = local_res18;
    if ((int)uVar8 < (int)local_res18) {
      local_res18 = uVar8;
      uVar15 = uVar8;
    }
  }
LAB_14e2fad20:
  do {
    if (*(int *)&(pUVar11->MetaData).field_0x8 - *(int *)&(pUVar11->MetaData).field_0x34 !=
        (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar15) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      return;
    }
    pFVar16 = (FScriptContainerElement *)
              ((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)&pUVar11->MetaData);
    pFVar4 = pFVar16 + 8;
    if ((local_res10->Data).ArrayNum == 0) {
      _Str = L"";
LAB_14e2fad88:
      sVar12 = wcslen(_Str);
      iVar10 = ::FString::Find((FString *)pFVar4,_Str,(int)sVar12,IgnoreCase,FromStart,-1);
      if (iVar10 != -1) {
        pFVar5 = (param_3->AllocatorInstance).Data;
        if (((pFVar5 <= pFVar16) && (pFVar16 < pFVar5 + (longlong)param_3->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = param_3->ArrayNum;
        if (iVar10 == param_3->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar10 + 1;
        *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             *(undefined8 *)pFVar16;
        pFVar16 = (param_4->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar4) && (pFVar4 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = param_4->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_4->AllocatorInstance,piVar1);
        }
        param_4->ArrayNum = iVar10 + 1;
        ::FString::FString((FString *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                           (FString *)pFVar4);
      }
    }
    else {
      _Str = (wchar_t *)(local_res10->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14e2fad88;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// GetDatasmithUserDataValueForKey @ 14e2fb2d0

FString * __cdecl
UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey
          (FString *__return_storage_ptr__,UObject *param_1,FName param_2,bool param_3)

{
  UDatasmithAssetUserData::GetDatasmithUserDataValueForKey
            (__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetDatasmithUserDataValuesForKey @ 14e2fb810

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          FName param_2,bool param_3)

{
  UDatasmithAssetUserData::GetDatasmithUserDataValuesForKey
            (__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2fc300

UClass * __cdecl UDatasmithContentBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithContentBlueprintLibrary",
               &Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUDatasmithContentBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithContentBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UDatasmithContentBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUDatasmithContentBlueprintLibrary @ 14e2fecc0

void __cdecl
UDatasmithContentBlueprintLibrary::StaticRegisterNativesUDatasmithContentBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDatasmithUserData @ 14e301d70

void __cdecl
UDatasmithContentBlueprintLibrary::execGetDatasmithUserData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDatasmithAssetUserData *pUVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UDatasmithAssetUserData::GetDatasmithUserData(local_res10);
  *(UDatasmithAssetUserData **)param_3 = pUVar2;
  return;
}

// execGetDatasmithUserDataKeysAndValuesForValue @ 14e301e00

void __cdecl
UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FScriptContainerElement *this;
  FField **ppFVar2;
  ulonglong uVar3;
  uint uVar4;
  FProperty *pFVar5;
  code *pcVar6;
  UObject *pUVar7;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  UDatasmithAssetUserData *pUVar11;
  size_t sVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  wchar_t *_Str;
  ForAnyElementType *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  ForAnyElementType *pFVar22;
  uint uVar23;
  undefined1 local_res10 [16];
  uint local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  UObject *local_f8;
  ForElementType<unsigned_int> local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_c0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_e8 = (wchar_t *)0x0;
  local_e0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  pFVar22 = &local_d8;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar22 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pUVar7 = local_f8;
  pFVar16 = &local_108;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar16 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
  iVar10 = *piVar1;
  iVar19 = 0;
  *(undefined4 *)&pFVar22[1].Data = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,pFVar22,0,piVar1);
  }
  piVar1 = (int *)((longlong)&pFVar16[1].Data + 4);
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar16->Data,*(int *)&pFVar16[1].Data);
    *(undefined4 *)&pFVar16[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar16,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar16->Data,*(int *)&pFVar16[1].Data);
    *(undefined4 *)&pFVar16[1].Data = 0;
  }
  if ((pUVar7 != (UObject *)0x0) &&
     (pUVar11 = UDatasmithAssetUserData::GetDatasmithUserData(pUVar7),
     pUVar11 != (UDatasmithAssetUserData *)0x0)) {
    local_c0 = &pUVar11->MetaData;
    local_f0 = (ForElementType<unsigned_int>)&(pUVar11->MetaData).field_0x10;
    iVar10 = *(int *)&(pUVar11->MetaData).field_0x28;
    uStack_ac = 1;
    iStack_9c = iVar19;
    local_98 = iVar19;
    if (iVar10 != 0) {
      puVar21 = *(uint **)&(pUVar11->MetaData).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_f0;
      }
      uVar23 = *puVar21;
      local_98 = 0;
      iVar19 = 0;
      while (uVar23 == 0) {
        lVar14 = (longlong)iVar19;
        local_98 = local_98 + 0x20;
        iVar19 = iVar19 + 1;
        iStack_9c = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e30207d;
        uVar23 = puVar21[lVar14 + 1];
      }
      uStack_ac = -uVar23 & uVar23;
      uVar3 = (ulonglong)uStack_ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_c8 = (int)lVar14;
      iStack_9c = local_c8 + -1 + local_98;
      if (iVar10 < iStack_9c) {
        iStack_9c = iVar10;
      }
    }
LAB_14e30207d:
    local_res20 = *(uint *)&(pUVar11->MetaData).field_0x28;
    local_b8 = &pUVar11->MetaData;
    uStack_94 = local_3c;
    iStack_90 = *(int *)&(pUVar11->MetaData).field_0x8 - *(int *)&(pUVar11->MetaData).field_0x34;
    uVar23 = local_res20 & 0xffffffe0;
    uStack_a0 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uStack_ac,iVar19);
    iVar15 = (int)local_res20 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    bVar13 = (byte)local_res20;
    iStack_b0 = iVar19;
    local_a8 = (undefined1 *)local_f0;
    local_88 = local_b8;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
    if ((((int)local_res20 < 0) || (iVar10 < (int)local_res20)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(int *)((longlong)local_f0 + 0x18);
    uVar17 = local_res20;
    if (local_res20 != uVar4) {
      FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_f0;
      }
      uVar17 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar23 = uVar23 + 0x20;
        iVar15 = iVar15 + 1;
        local_res20 = uVar4;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14e3021a0;
        uVar17 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar14 * 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_c4 = (int)lVar14;
      local_res20 = local_c4 + -1 + uVar23;
      uVar17 = local_res20;
      if ((int)uVar4 < (int)local_res20) {
        local_res20 = uVar4;
        uVar17 = uVar4;
      }
    }
LAB_14e3021a0:
    do {
      pTVar8 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar17) &&
          ((ForElementType<unsigned_int>)TStack_80.Array == local_f0)) && (pTVar8 == local_c0))
      break;
      pFVar18 = (FScriptContainerElement *)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
      this = pFVar18 + 8;
      if ((int)local_e0 == 0) {
        _Str = L"";
LAB_14e302206:
        sVar12 = wcslen(_Str);
        iVar10 = ::FString::Find((FString *)this,_Str,(int)sVar12,IgnoreCase,FromStart,-1);
        if (iVar10 != -1) {
          if (((pFVar22->Data <= pFVar18) &&
              (pFVar18 < pFVar22->Data + (longlong)*(int *)((longlong)&pFVar22[1].Data + 4) * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)&pFVar22[1].Data;
          if (iVar10 == *(int *)((longlong)&pFVar22[1].Data + 4)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,pFVar22,(int *)((longlong)&pFVar22[1].Data + 4));
          }
          *(int *)&pFVar22[1].Data = iVar10 + 1;
          *(undefined8 *)(pFVar22->Data + (longlong)iVar10 * 8) = *(undefined8 *)pFVar18;
          if (((pFVar16->Data <= this) && (this < pFVar16->Data + (longlong)*piVar1 * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)&pFVar16[1].Data;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,pFVar16,piVar1);
          }
          *(int *)&pFVar16[1].Data = iVar10 + 1;
          ::FString::FString((FString *)(pFVar16->Data + (longlong)iVar10 * 0x10),(FString *)this);
        }
      }
      else {
        _Str = local_e8;
        if (local_e8 != (wchar_t *)0x0) goto LAB_14e302206;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while( true );
  }
  DestructItems<FString,int>((FString *)local_108.Data,(int)local_100);
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// execGetDatasmithUserDataValueForKey @ 14e302400

void __cdecl
UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this;
  undefined1 *puVar1;
  FField **ppFVar2;
  ulonglong uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar6;
  uint uVar7;
  UDatasmithAssetUserData *pUVar8;
  FString *pFVar9;
  size_t sVar10;
  longlong lVar11;
  FName *pFVar12;
  int iVar13;
  wchar_t *_Str;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  uint uVar21;
  bool bVar22;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  int local_res20 [2];
  FName local_118;
  UObject *local_110;
  FString local_108;
  FName local_f8;
  FName local_f0;
  FString local_e8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  FString local_a0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  undefined8 local_50 [3];
  
  FVar14.Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  local_110 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  uVar16 = 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar22 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8 = local_118;
  if ((local_110 == (UObject *)0x0) ||
     (pUVar8 = UDatasmithAssetUserData::GetDatasmithUserData(local_110),
     pUVar8 == (UDatasmithAssetUserData *)0x0)) goto LAB_14e302850;
  this = &pUVar8->MetaData;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  if (bVar22) {
    ::FName::ToString(&local_f8,&local_a0);
    uVar15 = *(uint *)&(pUVar8->MetaData).field_0x28;
    local_c8 = &(pUVar8->MetaData).field_0x10;
    uStack_cc = 1;
    uStack_bc = uVar16;
    local_b8 = uVar16;
    if (uVar15 != 0) {
      puVar20 = *(uint **)&(pUVar8->MetaData).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_c8;
      }
      uVar7 = *puVar20;
      pFVar19 = FVar14.Data;
      local_b8 = 0;
      uVar16 = 0;
      while (uVar7 == 0) {
        iVar13 = (int)FVar14.Data;
        local_b8 = (int)pFVar19 + 0x20;
        pFVar19 = (FScriptContainerElement *)(ulonglong)local_b8;
        uVar16 = iVar13 + 1;
        FVar14.Data = (FScriptContainerElement *)(ulonglong)uVar16;
        uStack_bc = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14e3025cf;
        uVar7 = puVar20[(longlong)iVar13 + 1];
      }
      uStack_cc = -uVar7 & uVar7;
      uVar3 = (ulonglong)uStack_cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_a8 = (int)lVar11;
      uStack_bc = (local_b8 - 1) + local_a8;
      if ((int)uVar15 < (int)uStack_bc) {
        uStack_bc = uVar15;
      }
    }
LAB_14e3025cf:
    puVar1 = &(pUVar8->MetaData).field_0x10;
    uVar7 = *(uint *)&(pUVar8->MetaData).field_0x28;
    uVar21 = uVar7 & 0xffffffe0;
    iStack_b0 = *(int *)&(pUVar8->MetaData).field_0x8 - *(int *)&(pUVar8->MetaData).field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_88.CurrentBitIndex = uStack_bc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_cc,uVar16);
    iVar13 = (int)uVar7 >> 5;
    TStack_88._28_4_ = uStack_bc;
    TStack_88.BaseBitIndex = local_b8;
    uStack_68 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = this;
    uStack_d0 = uVar16;
    uStack_b4 = uStack_bc;
    local_90 = this;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
    if ((((int)uVar7 < 0) || ((int)uVar15 < (int)uVar7)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = *(uint *)&(pUVar8->MetaData).field_0x28;
    if (uVar7 != uVar16) {
      puVar18 = *(undefined1 **)&(pUVar8->MetaData).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar13;
        uVar21 = uVar21 + 0x20;
        iVar13 = iVar13 + 1;
        uVar7 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14e3026e0;
        uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar7 = (int)lVar11 + -1 + uVar21;
      if ((int)uVar16 < (int)uVar7) {
        uVar7 = uVar16;
      }
    }
LAB_14e3026e0:
    do {
      pTVar6 = local_90;
      if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_88.CurrentBitIndex == uVar7) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this))
      goto LAB_14e3027ec;
      pFVar12 = (FName *)((longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
      local_f0 = *pFVar12;
      ::FString::FString(&local_e8,(FString *)(pFVar12 + 1));
      pFVar9 = ::FName::ToString(&local_f0,&local_60);
      if (local_a0.Data.ArrayNum == 0) {
        _Str = L"";
LAB_14e30275d:
        sVar10 = wcslen(_Str);
        iVar13 = ::FString::Find(pFVar9,_Str,(int)sVar10,IgnoreCase,FromStart,-1);
      }
      else {
        _Str = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14e30275d;
        iVar13 = -1;
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (iVar13 != -1) goto LAB_14e3027bf;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    } while( true );
  }
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *)this,local_f8);
  if (pFVar9 != (FString *)0x0) {
    iVar13 = (pFVar9->Data).ArrayNum;
    iVar17 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar17 = 0;
    }
    ::FString::AssignRange(&local_108,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar17);
  }
  goto LAB_14e302806;
LAB_14e3027bf:
  iVar13 = local_e8.Data.ArrayNum + -1;
  if (local_e8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&local_108,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar13);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_14e3027ec:
  param_3 = local_res18;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    param_3 = local_res18;
  }
LAB_14e302806:
  FVar14.Data = local_108.Data.AllocatorInstance.Data;
  uVar16 = local_108.Data.ArrayMax;
  iVar13 = local_108.Data.ArrayNum;
LAB_14e302850:
  if (param_3 != local_50) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar14.Data;
    *(int *)((longlong)param_3 + 8) = iVar13;
    *(uint *)((longlong)param_3 + 0xc) = uVar16;
    return;
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// execGetDatasmithUserDataValuesForKey @ 14e3028b0

void __cdecl
UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValuesForKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this;
  FField **ppFVar1;
  ulonglong uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar6;
  uint uVar7;
  UDatasmithAssetUserData *pUVar8;
  FString *this_00;
  size_t sVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FName *pFVar12;
  int iVar13;
  wchar_t *_Str;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  int local_res20 [2];
  ForAnyElementType local_118;
  undefined8 local_110;
  FName local_108;
  UObject *local_100;
  ForElementType<unsigned_int> local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  FString local_98;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  undefined8 local_48 [2];
  
  FVar14.Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  local_100 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  uVar16 = 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar20 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = local_108;
  if ((local_100 != (UObject *)0x0) &&
     (pUVar8 = UDatasmithAssetUserData::GetDatasmithUserData(local_100),
     pUVar8 != (UDatasmithAssetUserData *)0x0)) {
    this = &pUVar8->MetaData;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    if (bVar20) {
      ::FName::ToString(&local_f0,&local_98);
      uVar15 = *(uint *)&(pUVar8->MetaData).field_0x28;
      local_c0 = &(pUVar8->MetaData).field_0x10;
      uStack_c4 = 1;
      uStack_b4 = uVar16;
      local_b0 = uVar16;
      if (uVar15 != 0) {
        puVar18 = *(uint **)&(pUVar8->MetaData).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)local_c0;
        }
        uVar7 = *puVar18;
        pFVar10 = FVar14.Data;
        local_b0 = 0;
        uVar16 = 0;
        while (uVar7 == 0) {
          iVar13 = (int)FVar14.Data;
          local_b0 = (int)pFVar10 + 0x20;
          pFVar10 = (FScriptContainerElement *)(ulonglong)local_b0;
          uVar16 = iVar13 + 1;
          FVar14.Data = (FScriptContainerElement *)(ulonglong)uVar16;
          uStack_b4 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_14e302a7f;
          uVar7 = puVar18[(longlong)iVar13 + 1];
        }
        uStack_c4 = -uVar7 & uVar7;
        uVar2 = (ulonglong)uStack_c4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_a0 = (int)lVar11;
        uStack_b4 = (local_b0 - 1) + local_a0;
        if ((int)uVar15 < (int)uStack_b4) {
          uStack_b4 = uVar15;
        }
      }
LAB_14e302a7f:
      uVar7 = *(uint *)&(pUVar8->MetaData).field_0x28;
      iStack_a8 = *(int *)&(pUVar8->MetaData).field_0x8 - *(int *)&(pUVar8->MetaData).field_0x34;
      local_f8 = (ForElementType<unsigned_int>)&(pUVar8->MetaData).field_0x10;
      uStack_b8 = 0xffffffff;
      TStack_80.CurrentBitIndex = uStack_b4;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      uVar19 = uVar7 & 0xffffffe0;
      TStack_80._padding_ = CONCAT44(uStack_c4,uVar16);
      iVar13 = (int)uVar7 >> 5;
      TStack_80._28_4_ = uStack_b4;
      TStack_80.BaseBitIndex = local_b0;
      uStack_60 = CONCAT44(uStack_a4,iStack_a8);
      local_d0 = this;
      uStack_c8 = uVar16;
      uStack_ac = uStack_b4;
      local_88 = this;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
      if ((((int)uVar7 < 0) || ((int)uVar15 < (int)uVar7)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar5 = local_f8;
      uVar16 = *(int *)((longlong)local_f8 + 0x18);
      if (uVar7 != uVar16) {
        FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar17 = local_f8;
        }
        uVar15 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar13;
          uVar19 = uVar19 + 0x20;
          iVar13 = iVar13 + 1;
          uVar7 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14e302ba0;
          uVar15 = *(uint *)((undefined1 *)((longlong)FVar17 + 4) + lVar11 * 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_9c = (int)lVar11;
        uVar7 = local_9c + -1 + uVar19;
        if ((int)uVar16 < (int)uVar7) {
          uVar7 = uVar16;
        }
      }
LAB_14e302ba0:
      do {
        pTVar6 = local_88;
        if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        param_3 = local_res18;
        if (((TStack_80.CurrentBitIndex == uVar7) &&
            ((ForElementType<unsigned_int>)TStack_80.Array == FVar5)) && (pTVar6 == this)) {
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          goto LAB_14e302e1d;
        }
        pFVar12 = (FName *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
        local_e8 = *pFVar12;
        ::FString::FString(&local_e0,(FString *)(pFVar12 + 1));
        this_00 = ::FName::ToString(&local_e8,&local_58);
        if (local_98.Data.ArrayNum == 0) {
          _Str = L"";
LAB_14e302c1e:
          sVar9 = wcslen(_Str);
          iVar13 = ::FString::Find(this_00,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
        }
        else {
          _Str = (wchar_t *)local_98.Data.AllocatorInstance.Data;
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14e302c1e;
          iVar13 = -1;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (iVar13 != -1) {
          if (((local_118.Data <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               local_118.Data + (longlong)(int)local_110._4_4_ * 0x10)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = (int)local_110;
          if ((int)local_110 == local_110._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_118,(int *)((longlong)&local_110 + 4));
          }
          local_110 = CONCAT44(local_110._4_4_,iVar13 + 1);
          ::FString::FString((FString *)(local_118.Data + (longlong)iVar13 * 0x10),&local_e0);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      } while( true );
    }
    pFVar10 = (FScriptContainerElement *)
              TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)this,local_f0);
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      if (((local_118.Data <= pFVar10) &&
          (pFVar10 < local_118.Data + (longlong)(int)local_110._4_4_ * 0x10)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = (int)local_110;
      if ((int)local_110 == local_110._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_118,(int *)((longlong)&local_110 + 4));
      }
      local_110 = CONCAT44(local_110._4_4_,iVar13 + 1);
      ::FString::FString((FString *)(local_118.Data + (longlong)iVar13 * 0x10),(FString *)pFVar10);
    }
LAB_14e302e1d:
    FVar14.Data = local_118.Data;
    iVar13 = (int)local_110;
    uVar16 = local_110._4_4_;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
  }
  if (param_3 != local_48) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar14.Data;
    *(int *)((longlong)param_3 + 8) = iVar13;
    *(uint *)((longlong)param_3 + 0xc) = uVar16;
    DestructItems<FString,int>((FString *)0x0,0);
    return;
  }
  DestructItems<FString,int>((FString *)FVar14.Data,iVar13);
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

