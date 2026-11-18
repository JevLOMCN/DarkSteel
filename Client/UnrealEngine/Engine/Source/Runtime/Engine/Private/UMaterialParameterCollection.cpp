// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// IsInstanceOf @ 147f4adc0

bool __thiscall
UMaterialParameterCollection::IsInstanceOf(UMaterialParameterCollection *this,FGuid *param_1)

{
  if (this != (UMaterialParameterCollection *)0x0) {
    do {
      if (((param_1->A == (this->StateId).A && param_1->D == (this->StateId).D) &&
          param_1->C == (this->StateId).C) && param_1->B == (this->StateId).B) {
        return true;
      }
      this = (this->Base).field0_0x0.DebugPtr;
    } while (this != (UMaterialParameterCollection *)0x0);
  }
  return false;
}

// StaticClass @ 147f5b140

UClass * __cdecl UMaterialParameterCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollection",
               &Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollection,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton;
}

// UMaterialParameterCollection @ 147f67ca0

UMaterialParameterCollection * __thiscall
UMaterialParameterCollection::UMaterialParameterCollection
          (UMaterialParameterCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollection__6B_;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  (this->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).ArrayNum = 0;
  (this->ScalarParameters).ArrayMax = 0;
  (this->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).ArrayNum = 0;
  (this->VectorParameters).ArrayMax = 0;
  (this->Base).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->BaseStateId).A = 0;
  (this->BaseStateId).B = 0;
  (this->BaseStateId).C = 0;
  (this->BaseStateId).D = 0;
  *(undefined8 *)&this->ScalarParameterBaseOverrides = 0;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterBaseOverrides = 0;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x48 = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x0;
  (this->UniformBufferStruct).Ptr = (FShaderParametersMetadata *)0x0;
  return this;
}

// ~UMaterialParameterCollection @ 147f69fc0

void __thiscall
UMaterialParameterCollection::~UMaterialParameterCollection(UMaterialParameterCollection *this)

{
  FShaderParametersMetadata *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UMaterialParameterCollection__6B_;
  pFVar1 = (this->UniformBufferStruct).Ptr;
  if (pFVar1 != (FShaderParametersMetadata *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VectorParameterBaseOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterBaseOverrides);
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ScalarParameterBaseOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterBaseOverrides);
  pFVar3 = (this->VectorParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ScalarParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeInCluster @ 147f72090

bool __thiscall UMaterialParameterCollection::CanBeInCluster(UMaterialParameterCollection *this)

{
  return false;
}

// GetPrivateStaticClass @ 147f7b000

UClass * __cdecl UMaterialParameterCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollection",
               &Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollection,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton;
}

// StaticRegisterNativesUMaterialParameterCollection @ 147f8bb90

void __cdecl UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMaterialParameterCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBaseParameterCollection @ 147f8e440

void __cdecl
UMaterialParameterCollection::execGetBaseParameterCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UMaterialParameterCollection *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetBaseParameterCollection((UMaterialParameterCollection *)param_1);
  *(UMaterialParameterCollection **)param_3 = pUVar1;
  return;
}

// execGetScalarParameterDefaultValue @ 147f8e480

void __cdecl
UMaterialParameterCollection::execGetScalarParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool *pbVar2;
  float fVar3;
  bool local_res10 [8];
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = GetScalarParameterDefaultValue
                    ((UMaterialParameterCollection *)param_1,local_res18[0],pbVar2);
  *(float *)param_3 = fVar3;
  return;
}

// execGetScalarParameterNames @ 147f8e560

void __cdecl
UMaterialParameterCollection::execGetScalarParameterNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetScalarParameterNames((UMaterialParameterCollection *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetVectorParameterDefaultValue @ 147f8e5e0

void __cdecl
UMaterialParameterCollection::execGetVectorParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  bool *pbVar4;
  bool local_res10 [8];
  FName local_res18 [2];
  FLinearColor local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetVectorParameterDefaultValue
                     ((UMaterialParameterCollection *)param_1,&local_28,local_res18[0],pbVar4);
  uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar3->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execGetVectorParameterNames @ 147f8e6d0

void __cdecl
UMaterialParameterCollection::execGetVectorParameterNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetVectorParameterNames((UMaterialParameterCollection *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SanitizeParameters<FCollectionScalarParameter> @ 147fa0670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialParameterCollection::SanitizeParameters<FCollectionScalarParameter>
          (UMaterialParameterCollection *this,pdm_7856c6d9 param_1)

{
  longlong *plVar1;
  UMaterialParameterCollection *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  FName *pFVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FName *pFVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  uint local_168;
  int local_164;
  int local_160 [2];
  wchar_t *local_158;
  int local_150;
  uint local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [12];
  int local_11c;
  undefined8 *local_118;
  TTuple<FString,int> *local_110;
  FString local_108;
  FName local_f8 [2];
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  local_e8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar16 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pUVar2 = (this->Base).field0_0x0.DebugPtr;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  lVar17 = (longlong)(int)param_1;
  for (; pUVar2 != (UMaterialParameterCollection *)0x0; pUVar2 = (pUVar2->Base).field0_0x0.DebugPtr)
  {
    iVar7 = *(int *)((longlong)&pUVar2->_padding_ + lVar17);
    uVar14 = uVar16;
    if (0 < iVar7) {
      do {
        uVar6 = 0;
        if ((int)uVar14 < iVar7) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_170 = (longlong)iVar7;
          local_178 = (longlong)(int)uVar14;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar13 = (FName *)((longlong)(int)uVar14 * 0x1c +
                           *(longlong *)((longlong)&pUVar2->_padding_ + lVar17));
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&local_98,(FGuid *)local_128,(bool *)(pFVar13 + 1));
        SplitParameterName((TTuple<FString,int> *)local_140,*pFVar13);
        iVar7 = (int)local_140._8_8_ + -1;
        pFVar4 = (FScriptContainerElement *)local_140._0_8_;
        if ((int)local_140._8_8_ == 0) {
          iVar7 = 0;
          pFVar4 = (FScriptContainerElement *)L"";
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)pFVar4);
        iVar7 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_e8,uVar6,(FString *)local_140);
        if ((iVar7 == -1) ||
           (lVar10 = (longlong)iVar7 * 0x68 + local_e8.Elements._0_8_, lVar10 == 0)) {
          local_118 = (undefined8 *)local_140;
          local_178 = 0;
          TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (&local_e8,(uint)&local_164,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6
                     ,(bool *)&local_118);
          lVar10 = (longlong)local_164 * 0x68 + local_e8.Elements._0_8_;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar10 + 0x10),
                   (int *)(local_128 + 4),(bool *)(local_140 + 0x10));
        if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_140._0_8_);
        }
        iVar7 = *(int *)((longlong)&pUVar2->_padding_ + lVar17);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar7);
    }
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + lVar17);
  plVar1 = (longlong *)((longlong)&this->_padding_ + lVar17);
  lVar17 = 0;
  if (0 < iVar7) {
    do {
      uVar14 = 0;
      if ((int)uVar16 < iVar7) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_170 = (longlong)iVar7;
        local_178 = (longlong)(int)uVar16;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar13 = (FName *)(*plVar1 + lVar17);
      while( true ) {
        uVar8 = CityHash64((char *)(pFVar13 + 1),0x10);
        if (local_98.Elements._8_4_ == local_98.Elements._52_4_) break;
        FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_98.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar15 +
                        ((ulonglong)(local_98.HashSize - 1) & uVar8 & 0xffffffff) * 4);
        if (iVar7 == -1) break;
        while (lVar10 = (longlong)iVar7,
              ((pFVar13[2].Number != *(uint *)(local_98.Elements._0_8_ + 0xc + lVar10 * 0x18) ||
               pFVar13[2].ComparisonIndex.Value !=
               *(uint *)(local_98.Elements._0_8_ + 8 + lVar10 * 0x18)) ||
              pFVar13[1].Number != *(uint *)(local_98.Elements._0_8_ + 4 + lVar10 * 0x18)) ||
              pFVar13[1].ComparisonIndex.Value != *(uint *)(local_98.Elements._0_8_ + lVar10 * 0x18)
              ) {
          iVar7 = *(int *)(local_98.Elements._0_8_ + 0x10 + lVar10 * 0x18);
          if (iVar7 == -1) goto LAB_147fa0958;
        }
        if (iVar7 == -1) break;
        FWindowsPlatformMisc::CreateGuid((FGuid *)(pFVar13 + 1));
      }
LAB_147fa0958:
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_98,(FGuid *)(local_128 + 8),(bool *)(pFVar13 + 1));
      SplitParameterName((TTuple<FString,int> *)&local_158,*pFVar13);
      uVar14 = local_148;
      local_168 = local_148;
      iVar7 = local_150 + -1;
      pFVar4 = (FScriptContainerElement *)local_158;
      if (local_150 == 0) {
        iVar7 = 0;
        pFVar4 = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)pFVar4);
      iVar7 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_e8,uVar6,(FString *)&local_158);
      if ((iVar7 == -1) || (lVar10 = (longlong)iVar7 * 0x68 + local_e8.Elements._0_8_, lVar10 == 0))
      {
        local_110 = (TTuple<FString,int> *)&local_158;
        local_178 = 0;
        TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  (&local_e8,(uint)local_160,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
                   (bool *)&local_110);
        lVar10 = (longlong)local_160[0] * 0x68 + local_e8.Elements._0_8_;
      }
      if (*(int *)(lVar10 + 0x18) != *(int *)(lVar10 + 0x44)) {
        while( true ) {
          lVar11 = lVar10 + 0x48;
          if (*(longlong *)(lVar10 + 0x50) != 0) {
            lVar11 = *(longlong *)(lVar10 + 0x50);
          }
          iVar7 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar10 + 0x58) - 1U & uVar14) * 4);
          local_168 = uVar14;
          if (iVar7 == -1) break;
          while (*(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xc) != uVar14) {
            iVar7 = *(int *)(*(longlong *)(lVar10 + 0x10) + 4 + (longlong)iVar7 * 0xc);
            if (iVar7 == -1) goto LAB_147fa0a5c;
          }
          uVar14 = uVar14 + 1;
        }
      }
LAB_147fa0a5c:
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar10 + 0x10),&local_11c
                 ,(bool *)&local_168);
      if (uVar14 != local_148) {
        ::FString::PrintfImpl(&local_108,L"%s%u");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar12.Data = local_108.Data.AllocatorInstance.Data;
        }
        pFVar9 = ::FName::FName(local_f8,(wchar_t *)FVar12.Data);
        *pFVar13 = *pFVar9;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if ((FScriptContainerElement *)local_158 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158);
      }
      iVar7 = (int)plVar1[1];
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x1c;
    } while ((int)uVar16 < iVar7);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// SanitizeParameters<FCollectionVectorParameter> @ 147fa0ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialParameterCollection::SanitizeParameters<FCollectionVectorParameter>
          (UMaterialParameterCollection *this,pdm_515e8a30 param_1)

{
  longlong *plVar1;
  UMaterialParameterCollection *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  FName *pFVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  longlong lVar16;
  FName *pFVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  uint local_168;
  int local_164;
  int local_160 [2];
  wchar_t *local_158;
  int local_150;
  uint local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [12];
  int local_11c;
  undefined8 *local_118;
  TTuple<FString,int> *local_110;
  FString local_108;
  FName local_f8 [2];
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  local_e8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar15 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pUVar2 = (this->Base).field0_0x0.DebugPtr;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  lVar16 = (longlong)(int)param_1;
  for (; pUVar2 != (UMaterialParameterCollection *)0x0; pUVar2 = (pUVar2->Base).field0_0x0.DebugPtr)
  {
    iVar7 = *(int *)((longlong)&pUVar2->_padding_ + lVar16);
    uVar13 = uVar15;
    if (0 < iVar7) {
      do {
        uVar6 = 0;
        if ((int)uVar13 < iVar7) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_170 = (longlong)iVar7;
          local_178 = (longlong)(int)uVar13;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar17 = (FName *)(*(longlong *)((longlong)&pUVar2->_padding_ + lVar16) +
                           (longlong)(int)uVar13 * 0x28);
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&local_98,(FGuid *)local_128,(bool *)(pFVar17 + 1));
        SplitParameterName((TTuple<FString,int> *)local_140,*pFVar17);
        iVar7 = (int)local_140._8_8_ + -1;
        pFVar4 = (FScriptContainerElement *)local_140._0_8_;
        if ((int)local_140._8_8_ == 0) {
          iVar7 = 0;
          pFVar4 = (FScriptContainerElement *)L"";
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)pFVar4);
        iVar7 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_e8,uVar6,(FString *)local_140);
        if ((iVar7 == -1) ||
           (lVar10 = (longlong)iVar7 * 0x68 + local_e8.Elements._0_8_, lVar10 == 0)) {
          local_118 = (undefined8 *)local_140;
          local_178 = 0;
          TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (&local_e8,(uint)&local_164,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6
                     ,(bool *)&local_118);
          lVar10 = (longlong)local_164 * 0x68 + local_e8.Elements._0_8_;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar10 + 0x10),
                   (int *)(local_128 + 4),(bool *)(local_140 + 0x10));
        if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_140._0_8_);
        }
        iVar7 = *(int *)((longlong)&pUVar2->_padding_ + lVar16);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar7);
    }
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + lVar16);
  plVar1 = (longlong *)((longlong)&this->_padding_ + lVar16);
  lVar16 = 0;
  if (0 < iVar7) {
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar7) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_170 = (longlong)iVar7;
        local_178 = (longlong)(int)uVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar17 = (FName *)(*plVar1 + lVar16);
      while( true ) {
        uVar8 = CityHash64((char *)(pFVar17 + 1),0x10);
        if (local_98.Elements._8_4_ == local_98.Elements._52_4_) break;
        FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar14 = local_98.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar14 +
                        ((ulonglong)(local_98.HashSize - 1) & uVar8 & 0xffffffff) * 4);
        if (iVar7 == -1) break;
        while (lVar10 = (longlong)iVar7,
              ((pFVar17[2].Number != *(uint *)(local_98.Elements._0_8_ + 0xc + lVar10 * 0x18) ||
               pFVar17[2].ComparisonIndex.Value !=
               *(uint *)(local_98.Elements._0_8_ + 8 + lVar10 * 0x18)) ||
              pFVar17[1].Number != *(uint *)(local_98.Elements._0_8_ + 4 + lVar10 * 0x18)) ||
              pFVar17[1].ComparisonIndex.Value != *(uint *)(local_98.Elements._0_8_ + lVar10 * 0x18)
              ) {
          iVar7 = *(int *)(local_98.Elements._0_8_ + 0x10 + lVar10 * 0x18);
          if (iVar7 == -1) goto LAB_147fa0e88;
        }
        if (iVar7 == -1) break;
        FWindowsPlatformMisc::CreateGuid((FGuid *)(pFVar17 + 1));
      }
LAB_147fa0e88:
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_98,(FGuid *)(local_128 + 8),(bool *)(pFVar17 + 1));
      SplitParameterName((TTuple<FString,int> *)&local_158,*pFVar17);
      uVar13 = local_148;
      local_168 = local_148;
      iVar7 = local_150 + -1;
      pFVar4 = (FScriptContainerElement *)local_158;
      if (local_150 == 0) {
        iVar7 = 0;
        pFVar4 = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)pFVar4);
      iVar7 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_e8,uVar6,(FString *)&local_158);
      if ((iVar7 == -1) || (lVar10 = (longlong)iVar7 * 0x68 + local_e8.Elements._0_8_, lVar10 == 0))
      {
        local_110 = (TTuple<FString,int> *)&local_158;
        local_178 = 0;
        TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  (&local_e8,(uint)local_160,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
                   (bool *)&local_110);
        lVar10 = (longlong)local_160[0] * 0x68 + local_e8.Elements._0_8_;
      }
      if (*(int *)(lVar10 + 0x18) != *(int *)(lVar10 + 0x44)) {
        while( true ) {
          lVar11 = lVar10 + 0x48;
          if (*(longlong *)(lVar10 + 0x50) != 0) {
            lVar11 = *(longlong *)(lVar10 + 0x50);
          }
          iVar7 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar10 + 0x58) - 1U & uVar13) * 4);
          local_168 = uVar13;
          if (iVar7 == -1) break;
          while (*(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xc) != uVar13) {
            iVar7 = *(int *)(*(longlong *)(lVar10 + 0x10) + 4 + (longlong)iVar7 * 0xc);
            if (iVar7 == -1) goto LAB_147fa0f8c;
          }
          uVar13 = uVar13 + 1;
        }
      }
LAB_147fa0f8c:
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar10 + 0x10),&local_11c
                 ,(bool *)&local_168);
      if (uVar13 != local_148) {
        ::FString::PrintfImpl(&local_108,L"%s%u");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar12.Data = local_108.Data.AllocatorInstance.Data;
        }
        pFVar9 = ::FName::FName(local_f8,(wchar_t *)FVar12.Data);
        *pFVar17 = *pFVar9;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if ((FScriptContainerElement *)local_158 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158);
      }
      iVar7 = (int)plVar1[1];
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x28;
    } while ((int)uVar15 < iVar7);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// UMaterialParameterCollection @ 147fa5c10

UMaterialParameterCollection * __thiscall
UMaterialParameterCollection::UMaterialParameterCollection
          (UMaterialParameterCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollection__6B_;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  (this->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).ArrayNum = 0;
  (this->ScalarParameters).ArrayMax = 0;
  (this->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).ArrayNum = 0;
  (this->VectorParameters).ArrayMax = 0;
  (this->Base).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->BaseStateId).A = 0;
  (this->BaseStateId).B = 0;
  (this->BaseStateId).C = 0;
  (this->BaseStateId).D = 0;
  *(undefined8 *)&this->ScalarParameterBaseOverrides = 0;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterBaseOverrides = 0;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x48 = 0;
  (this->UniformBufferStruct).Ptr = (FShaderParametersMetadata *)0x0;
  this->DefaultResource = (FMaterialParameterCollectionInstanceResource *)0x0;
  this->ReleasedByRT = (FThreadSafeBool)0x1;
  return this;
}

// BeginDestroy @ 147fb4150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialParameterCollection::BeginDestroy(UMaterialParameterCollection *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FMaterialParameterCollectionInstanceResource *local_a8;
  code *pcStack_a0;
  code *pcStack_98;
  FThreadSafeBool *pFStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->DefaultResource != (FMaterialParameterCollectionInstanceResource *)0x0) {
    pFStack_90 = &this->ReleasedByRT;
    LOCK();
    *pFStack_90 = (FThreadSafeBool)0x0;
    UNLOCK();
    pcStack_a0 = *(code **)&this->StateId;
    pcStack_98 = *(code **)&(this->StateId).C;
    local_a8 = this->DefaultResource;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    local_60[2] = pcStack_a0;
    local_60[3] = pcStack_98;
    local_60[4] = (code *)pFStack_90;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialParameterCollection::BeginDestroy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialParameterCollection::BeginDestroy_::__l5::TSTR_RemoveDefaultResourceCommand109>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialParameterCollection::BeginDestroy'::__l5::TSTR_RemoveDefaultResourceCommand109>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateBufferStruct @ 147fbf9a0

void __thiscall UMaterialParameterCollection::CreateBufferStruct(UMaterialParameterCollection *this)

{
  TUniquePtr<FShaderParametersMetadata,TDefaultDelete<FShaderParametersMetadata>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FShaderParametersMetadata *pFVar6;
  FShaderParametersMetadata *pFVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong local_28;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar9 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar9,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return;
  }
  pFVar7 = (FShaderParametersMetadata *)0x0;
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  iVar4 = GetTotalVectorStorage(this);
  uVar5 = local_20.ArrayNum;
  if (local_20.ArrayNum == local_20.ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_20.AllocatorInstance,&local_20.ArrayMax);
  }
  local_20.ArrayNum = uVar5 + 1;
  uVar10 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_20.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar11 + 0x10) = 0x329;
    *(wchar_t **)pFVar11 = L"Vectors";
    *(wchar_t **)(pFVar11 + 8) = L"";
    *(undefined2 *)(pFVar11 + 0x18) = 0x104;
    *(undefined4 *)(pFVar11 + 0x1c) = 1;
    *(undefined4 *)(pFVar11 + 0x20) = 4;
    *(int *)(pFVar11 + 0x24) = iVar4;
    *(undefined8 *)(pFVar11 + 0x28) = 0;
  }
  pFVar6 = ::operator_new(0x80);
  if (pFVar6 != (FShaderParametersMetadata *)0x0) {
    pFVar7 = FShaderParametersMetadata::FShaderParametersMetadata
                       (pFVar6,DataDrivenUniformBuffer,Shader,L"MaterialCollection",
                        L"MaterialCollection",L"MaterialCollection",(wchar_t *)0x0,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                        ,0x339,iVar4 << 4,&local_20,false,(FRHIUniformBufferLayoutInitializer *)0x0,
                        None);
  }
  pTVar1 = &this->UniformBufferStruct;
  if (pTVar1 == (TUniquePtr<FShaderParametersMetadata,TDefaultDelete<FShaderParametersMetadata>_> *)
                &local_28) {
    if (pFVar7 == (FShaderParametersMetadata *)0x0) goto LAB_147fbfb99;
    puVar8 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (pFVar6 == (FShaderParametersMetadata *)0x0) goto LAB_147fbfb99;
    puVar8 = (undefined8 *)pFVar6->_padding_;
    pFVar7 = pFVar6;
  }
  (*(code *)*puVar8)(pFVar7,1);
LAB_147fbfb99:
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FinishDestroy @ 147fcd8d0

void __thiscall UMaterialParameterCollection::FinishDestroy(UMaterialParameterCollection *this)

{
  if (this->DefaultResource != (FMaterialParameterCollectionInstanceResource *)0x0) {
    FMaterialParameterCollectionInstanceResource::GameThread_Destroy(this->DefaultResource);
    this->DefaultResource = (FMaterialParameterCollectionInstanceResource *)0x0;
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetBaseParameterCollection @ 147fd0f70

UMaterialParameterCollection * __thiscall
UMaterialParameterCollection::GetBaseParameterCollection(UMaterialParameterCollection *this)

{
  return (this->Base).field0_0x0.DebugPtr;
}

// GetDefaultParameterData @ 147fd18c0

void __thiscall
UMaterialParameterCollection::GetDefaultParameterData
          (UMaterialParameterCollection *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  GetParameterData(this,param_1,
                   (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    *)0x0,(TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                           *)0x0);
  return;
}

// GetParameterData @ 147fd5010

void __thiscall
UMaterialParameterCollection::GetParameterData
          (UMaterialParameterCollection *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2,TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                   *param_3)

{
  int *piVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FScriptContainerElement *pFVar9;
  UMaterialParameterCollection *pUVar10;
  UMaterialParameterCollection *pUVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  FLinearColor *pFVar18;
  ulong64 uVar19;
  undefined4 *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  
  uVar14 = GetTotalVectorStorage(this);
  iVar26 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (iVar26 < (int)uVar14) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,0x10,uVar14 - iVar26,&param_1->AllocatorInstance,piVar1,
                        &param_1->ArrayMax);
    DefaultConstructItems<UE::Math::TVector4<float>,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar15 * 0x10,uVar14 - iVar26);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar26) {
      uVar24 = iVar26 - uVar14;
      if (((int)(uVar24 | uVar14) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar24 != 0) {
        pFVar21 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
        iVar26 = (*piVar1 - uVar24) - uVar14;
        if (iVar26 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)(int)uVar24 * 0x10,(longlong)iVar26 << 4);
        }
        *piVar1 = *piVar1 - uVar24;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  iVar26 = *piVar1;
  pUVar11 = this;
  do {
    if (pUVar11 == (UMaterialParameterCollection *)0x0) {
      return;
    }
    uVar23 = 0;
    iVar16 = iVar26 - (pUVar11->VectorParameters).ArrayNum;
    iVar15 = (pUVar11->ScalarParameters).ArrayNum;
    iVar26 = iVar15 + 3;
    iVar26 = iVar16 - ((int)(iVar26 + (iVar26 >> 0x1f & 3U)) >> 2);
    uVar28 = uVar23;
    if (0 < iVar15) {
      do {
        uVar24 = (uint)uVar23;
        uVar14 = 0;
        if ((int)uVar24 < (pUVar11->ScalarParameters).ArrayNum) {
          uVar14 = ~uVar24 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar21 = (pUVar11->ScalarParameters).AllocatorInstance.Data;
        uVar14 = uVar24;
        if ((int)uVar24 < 0) {
          uVar14 = uVar24 + 3;
        }
        uVar14 = ((int)uVar14 >> 2) + iVar26;
        uVar22 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar22 = ~uVar14 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar9 = (param_1->AllocatorInstance).Data;
        uVar22 = uVar24 & 0x80000003;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xfffffffc) + 1;
        }
        if ((3 < uVar22) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                ,0x310,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar27 = (longlong)(int)uVar22;
        if ((param_2 ==
             (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             0x0) || (pfVar17 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                ::Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                        *)param_2,*(FName *)(pFVar21 + uVar28)),
                     pfVar17 == (float *)0x0)) {
          *(undefined4 *)(pFVar9 + lVar27 * 4 + (longlong)(int)uVar14 * 0x10) =
               *(undefined4 *)(pFVar21 + uVar28 + 0x18);
          for (pUVar10 = this; pUVar10 != pUVar11; pUVar10 = (pUVar10->Base).field0_0x0.DebugPtr) {
            uVar19 = CityHash64((char *)(pFVar21 + uVar28 + 8),0x10);
            iVar15 = TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FGuid>
                               ((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                                 *)&pUVar10->ScalarParameterBaseOverrides,(uint)uVar19,
                                (FGuid *)(pFVar21 + uVar28 + 8));
            if (iVar15 != -1) {
              lVar25 = (longlong)iVar15 * 0x1c + *(longlong *)&pUVar10->ScalarParameterBaseOverrides
              ;
              puVar20 = (undefined4 *)(lVar25 + 0x10);
              if (lVar25 == 0) {
                puVar20 = (undefined4 *)0x0;
              }
              if (puVar20 != (undefined4 *)0x0) {
                *(undefined4 *)(pFVar9 + lVar27 * 4 + (longlong)(int)uVar14 * 0x10) = *puVar20;
                break;
              }
            }
          }
        }
        else {
          *(float *)(pFVar9 + lVar27 * 4 + (longlong)(int)uVar14 * 0x10) = *pfVar17;
        }
        uVar23 = (ulonglong)(uVar24 + 1);
        uVar28 = uVar28 + 0x1c;
      } while ((int)(uVar24 + 1) < (pUVar11->ScalarParameters).ArrayNum);
    }
    lVar27 = 0;
    uVar14 = 0;
    if (0 < (pUVar11->VectorParameters).ArrayNum) {
      lVar25 = (longlong)iVar16 << 4;
      do {
        uVar24 = 0;
        if ((int)uVar14 < (pUVar11->VectorParameters).ArrayNum) {
          uVar24 = ~uVar14 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar21 = (pUVar11->VectorParameters).AllocatorInstance.Data;
        uVar24 = 0;
        if ((int)(uVar14 + iVar16) < param_1->ArrayNum) {
          uVar24 = ~(uVar14 + iVar16) >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar9 = (param_1->AllocatorInstance).Data;
        if ((param_3 ==
             (TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
              *)0x0) ||
           (pFVar18 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                      ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                              *)param_3,*(FName *)(pFVar21 + lVar27)),
           pFVar18 == (FLinearColor *)0x0)) {
          uVar6 = *(undefined4 *)(pFVar21 + lVar27 + 0x1c);
          uVar7 = *(undefined4 *)(pFVar21 + lVar27 + 0x20);
          uVar8 = *(undefined4 *)(pFVar21 + lVar27 + 0x24);
          *(undefined4 *)(pFVar9 + lVar25) = *(undefined4 *)(pFVar21 + lVar27 + 0x18);
          *(undefined4 *)(pFVar9 + lVar25 + 4) = uVar6;
          *(undefined4 *)(pFVar9 + lVar25 + 8) = uVar7;
          *(undefined4 *)(pFVar9 + lVar25 + 0xc) = uVar8;
          for (pUVar10 = this; pUVar10 != pUVar11; pUVar10 = (pUVar10->Base).field0_0x0.DebugPtr) {
            uVar19 = CityHash64((char *)(pFVar21 + lVar27 + 8),0x10);
            iVar15 = TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FGuid>
                               ((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                                 *)&pUVar10->VectorParameterBaseOverrides,(uint)uVar19,
                                (FGuid *)(pFVar21 + lVar27 + 8));
            if (iVar15 != -1) {
              lVar2 = *(longlong *)&pUVar10->VectorParameterBaseOverrides + (longlong)iVar15 * 0x28;
              puVar20 = (undefined4 *)(lVar2 + 0x10);
              if (lVar2 == 0) {
                puVar20 = (undefined4 *)0x0;
              }
              if (puVar20 != (undefined4 *)0x0) {
                uVar6 = puVar20[1];
                uVar7 = puVar20[2];
                uVar8 = puVar20[3];
                *(undefined4 *)(pFVar9 + lVar25) = *puVar20;
                *(undefined4 *)(pFVar9 + lVar25 + 4) = uVar6;
                *(undefined4 *)(pFVar9 + lVar25 + 8) = uVar7;
                *(undefined4 *)(pFVar9 + lVar25 + 0xc) = uVar8;
                break;
              }
            }
          }
        }
        else {
          fVar3 = (pFVar18->field0_0x0)._s_0.G;
          fVar4 = (pFVar18->field0_0x0)._s_0.B;
          fVar5 = (pFVar18->field0_0x0)._s_0.A;
          *(float *)(pFVar9 + lVar25) = (pFVar18->field0_0x0)._s_0.R;
          *(float *)(pFVar9 + lVar25 + 4) = fVar3;
          *(float *)(pFVar9 + lVar25 + 8) = fVar4;
          *(float *)(pFVar9 + lVar25 + 0xc) = fVar5;
        }
        uVar14 = uVar14 + 1;
        lVar25 = lVar25 + 0x10;
        lVar27 = lVar27 + 0x28;
      } while ((int)uVar14 < (pUVar11->VectorParameters).ArrayNum);
    }
    pUVar11 = (pUVar11->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetParameterId @ 147fd55f0

FGuid * __thiscall
UMaterialParameterCollection::GetParameterId
          (UMaterialParameterCollection *this,FGuid *__return_storage_ptr__,FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FGuid *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  do {
    if (this == (UMaterialParameterCollection *)0x0) {
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      return __return_storage_ptr__;
    }
    uVar8 = uVar11;
    uVar10 = uVar11;
    if (0 < (this->ScalarParameters).ArrayNum) {
      do {
        uVar9 = (uint)uVar8;
        uVar6 = 0;
        if ((int)uVar9 < (this->ScalarParameters).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FGuid *)(*pcVar2)();
          return pFVar7;
        }
        pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
        if (*(FName *)(pFVar1 + uVar10) == param_1) {
          pFVar1 = pFVar1 + uVar10 + 8;
          uVar3 = *(undefined8 *)pFVar1;
          uVar4 = *(undefined8 *)(pFVar1 + 8);
          __return_storage_ptr__->A = (int)uVar3;
          __return_storage_ptr__->B = (int)((ulonglong)uVar3 >> 0x20);
          __return_storage_ptr__->C = (int)uVar4;
          __return_storage_ptr__->D = (int)((ulonglong)uVar4 >> 0x20);
          return __return_storage_ptr__;
        }
        uVar8 = (ulonglong)(uVar9 + 1);
        uVar10 = uVar10 + 0x1c;
      } while ((int)(uVar9 + 1) < (this->ScalarParameters).ArrayNum);
    }
    uVar8 = uVar11;
    uVar10 = uVar11;
    if (0 < (this->VectorParameters).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this->VectorParameters).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FGuid *)(*pcVar2)();
          return pFVar7;
        }
        pFVar1 = (this->VectorParameters).AllocatorInstance.Data;
        if (*(FName *)(pFVar1 + uVar8) == param_1) {
          pFVar1 = pFVar1 + uVar8 + 8;
          uVar3 = *(undefined8 *)pFVar1;
          uVar4 = *(undefined8 *)(pFVar1 + 8);
          __return_storage_ptr__->A = (int)uVar3;
          __return_storage_ptr__->B = (int)((ulonglong)uVar3 >> 0x20);
          __return_storage_ptr__->C = (int)uVar4;
          __return_storage_ptr__->D = (int)((ulonglong)uVar4 >> 0x20);
          return __return_storage_ptr__;
        }
        uVar8 = uVar8 + 0x28;
        uVar10 = (ulonglong)(uVar9 + 1);
      } while ((int)(uVar9 + 1) < (this->VectorParameters).ArrayNum);
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetParameterIndex @ 147fd5760

void __thiscall
UMaterialParameterCollection::GetParameterIndex
          (UMaterialParameterCollection *this,FGuid *param_1,int *param_2,int *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  *param_2 = -1;
  *param_3 = -1;
  iVar5 = GetTotalVectorStorage(this);
  do {
    if (this == (UMaterialParameterCollection *)0x0) {
      return;
    }
    iVar7 = iVar5 - (this->VectorParameters).ArrayNum;
    uVar9 = 0;
    iVar1 = (this->ScalarParameters).ArrayNum;
    iVar5 = iVar1 + 3;
    iVar5 = iVar7 - ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->ScalarParameters).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->ScalarParameters).AllocatorInstance.Data;
        if (((*(uint *)(pFVar2 + lVar8 + 0x10) == param_1->C &&
             *(uint *)(pFVar2 + lVar8 + 0xc) == param_1->B) &&
            *(uint *)(pFVar2 + lVar8 + 0x14) == param_1->D) &&
            param_1->A == *(uint *)(pFVar2 + lVar8 + 8)) {
          uVar6 = (int)uVar9 >> 0x1f & 3;
          uVar9 = uVar9 + uVar6;
          *param_2 = ((int)uVar9 >> 2) + iVar5;
          *param_3 = (uVar9 & 3) - uVar6;
          return;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1c;
      } while ((int)uVar9 < (this->ScalarParameters).ArrayNum);
    }
    uVar9 = 0;
    if (0 < (this->VectorParameters).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->VectorParameters).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->VectorParameters).AllocatorInstance.Data;
        if (((*(uint *)(pFVar2 + lVar8 + 0x10) == param_1->C &&
             *(uint *)(pFVar2 + lVar8 + 0xc) == param_1->B) &&
            *(uint *)(pFVar2 + lVar8 + 0x14) == param_1->D) &&
            param_1->A == *(uint *)(pFVar2 + lVar8 + 8)) {
          *param_2 = uVar9 + iVar7;
          return;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x28;
      } while ((int)uVar9 < (this->VectorParameters).ArrayNum);
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetParameterName @ 147fd5950

FName __thiscall
UMaterialParameterCollection::GetParameterName(UMaterialParameterCollection *this,FGuid *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  int *in_R8;
  
  do {
    if (this == (UMaterialParameterCollection *)0x0) {
      param_1->A = 0;
      param_1->B = 0;
      return (FName)param_1;
    }
    uVar8 = 0;
    if (0 < (this->ScalarParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < (this->ScalarParameters).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar5 = (FName)(*pcVar2)();
          return FVar5;
        }
        pFVar6 = (this->ScalarParameters).AllocatorInstance.Data + lVar7;
        if (((*(int *)(pFVar6 + 0x10) == in_R8[2] && *(int *)(pFVar6 + 0xc) == in_R8[1]) &&
            *(int *)(pFVar6 + 0x14) == in_R8[3]) && *(int *)(pFVar6 + 8) == *in_R8)
        goto LAB_147fd5acd;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x1c;
      } while ((int)uVar8 < (this->ScalarParameters).ArrayNum);
    }
    uVar8 = 0;
    if (0 < (this->VectorParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < (this->VectorParameters).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar5 = (FName)(*pcVar2)();
          return FVar5;
        }
        pFVar6 = (this->VectorParameters).AllocatorInstance.Data + lVar7;
        if (((*(int *)(pFVar6 + 0x10) == in_R8[2] && *(int *)(pFVar6 + 0xc) == in_R8[1]) &&
            *(int *)(pFVar6 + 0x14) == in_R8[3]) && *(int *)(pFVar6 + 8) == *in_R8) {
LAB_147fd5acd:
          uVar1 = *(undefined8 *)pFVar6;
          param_1->A = (int)uVar1;
          param_1->B = (int)((ulonglong)uVar1 >> 0x20);
          return (FName)param_1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar8 < (this->VectorParameters).ArrayNum);
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetParameterNames @ 147fd5ae0

void __thiscall
UMaterialParameterCollection::GetParameterNames
          (UMaterialParameterCollection *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  UMaterialParameterCollection *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  this_00 = (this->Base).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialParameterCollection *)0x0) {
    GetParameterNames(this_00,param_1,param_2);
  }
  uVar6 = 0;
  if (param_2) {
    if (0 < (this->VectorParameters).ArrayNum) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->VectorParameters).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        pFVar7 = (this->VectorParameters).AllocatorInstance.Data + lVar8;
        if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x28;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             *(undefined8 *)pFVar7;
      } while ((int)uVar6 < (this->VectorParameters).ArrayNum);
    }
  }
  else if (0 < (this->ScalarParameters).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ScalarParameters).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar7 = (this->ScalarParameters).AllocatorInstance.Data + lVar8;
      if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x1c;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar7;
    } while ((int)uVar6 < (this->ScalarParameters).ArrayNum);
  }
  return;
}

// GetScalarParameterByName @ 147fd6ad0

FCollectionScalarParameter * __thiscall
UMaterialParameterCollection::GetScalarParameterByName
          (UMaterialParameterCollection *this,FName param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCollectionScalarParameter *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  do {
    if (this == (UMaterialParameterCollection *)0x0) {
      return (FCollectionScalarParameter *)0x0;
    }
    uVar6 = 0;
    if (0 < (this->ScalarParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->ScalarParameters).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FCollectionScalarParameter *)(*pcVar2)();
          return pFVar5;
        }
        pFVar5 = (FCollectionScalarParameter *)
                 ((this->ScalarParameters).AllocatorInstance.Data + lVar7);
        FVar1.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x0;
        FVar1.Number = *(uint *)&pFVar5->field_0x4;
        if (FVar1 == param_1) {
          return pFVar5;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x1c;
      } while ((int)uVar6 < (this->ScalarParameters).ArrayNum);
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetScalarParameterDefaultValue @ 147fd6b90

float __thiscall
UMaterialParameterCollection::GetScalarParameterDefaultValue
          (UMaterialParameterCollection *this,FName param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  UMaterialParameterCollection *pUVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  
  if (this != (UMaterialParameterCollection *)0x0) {
    pfVar12 = (float *)0x0;
    pUVar10 = this;
    do {
      pfVar9 = pfVar12;
      pfVar8 = pfVar12;
      if (0 < (pUVar10->ScalarParameters).ArrayNum) {
        do {
          uVar11 = (uint)pfVar8;
          uVar4 = 0;
          if ((int)uVar11 < (pUVar10->ScalarParameters).ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar13 = (float)(*pcVar2)();
            return fVar13;
          }
          pFVar1 = (pUVar10->ScalarParameters).AllocatorInstance.Data;
          if (*(FName *)(pFVar1 + (longlong)pfVar9) == param_1) {
            *param_2 = true;
            do {
              if (this == pUVar10) {
                return *(float *)(pFVar1 + 0x18 + (longlong)pfVar9);
              }
              uVar6 = CityHash64((char *)((longlong)pfVar9 + (longlong)(pFVar1 + 8)),0x10);
              iVar5 = TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FGuid>
                                ((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                                  *)&this->ScalarParameterBaseOverrides,(uint)uVar6,
                                 (FGuid *)((longlong)pfVar9 + (longlong)(pFVar1 + 8)));
              if (iVar5 != -1) {
                lVar7 = (longlong)iVar5 * 0x1c + *(longlong *)&this->ScalarParameterBaseOverrides;
                pfVar8 = (float *)(lVar7 + 0x10);
                if (lVar7 == 0) {
                  pfVar8 = pfVar12;
                }
                if (pfVar8 != (float *)0x0) {
                  return *pfVar8;
                }
              }
              this = (this->Base).field0_0x0.DebugPtr;
            } while( true );
          }
          pfVar9 = pfVar9 + 7;
          pfVar8 = (float *)(ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < (pUVar10->ScalarParameters).ArrayNum);
      }
      pUVar10 = (pUVar10->Base).field0_0x0.DebugPtr;
    } while (pUVar10 != (UMaterialParameterCollection *)0x0);
  }
  *param_2 = false;
  return 0.0;
}

// GetScalarParameterIndexByName @ 147fd6cd0

int __thiscall
UMaterialParameterCollection::GetScalarParameterIndexByName
          (UMaterialParameterCollection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->ScalarParameters).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ScalarParameters).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->ScalarParameters).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while ((int)uVar6 < (this->ScalarParameters).ArrayNum);
  }
  return -1;
}

// GetScalarParameterNames @ 147fd6d80

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMaterialParameterCollection::GetScalarParameterNames
          (UMaterialParameterCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetParameterNames(this,__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// GetTotalVectorStorage @ 147fd9a60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMaterialParameterCollection::GetTotalVectorStorage(UMaterialParameterCollection *this)

{
  UMaterialParameterCollection *pUVar1;
  int iVar2;
  int iVar3;
  FString local_18;
  
  iVar2 = (this->ScalarParameters).ArrayNum + 3;
  iVar2 = ((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) + (this->VectorParameters).ArrayNum;
  for (pUVar1 = (this->Base).field0_0x0.DebugPtr; pUVar1 != (UMaterialParameterCollection *)0x0;
      pUVar1 = (pUVar1->Base).field0_0x0.DebugPtr) {
    iVar3 = (pUVar1->ScalarParameters).ArrayNum + 3;
    iVar2 = iVar2 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) + (pUVar1->VectorParameters).ArrayNum
    ;
  }
  if ((byte)LogMaterial._0_1_ < 3) {
    return iVar2;
  }
  if (GMaterialParameterCollectionMaxVectorStorage < iVar2) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return iVar2;
}

// GetVectorParameterByName @ 147fda950

FCollectionVectorParameter * __thiscall
UMaterialParameterCollection::GetVectorParameterByName
          (UMaterialParameterCollection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCollectionVectorParameter *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  do {
    if (this == (UMaterialParameterCollection *)0x0) {
      return (FCollectionVectorParameter *)0x0;
    }
    uVar5 = 0;
    if (0 < (this->VectorParameters).ArrayNum) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->VectorParameters).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FCollectionVectorParameter *)(*pcVar1)();
          return pFVar4;
        }
        pFVar4 = (FCollectionVectorParameter *)
                 ((this->VectorParameters).AllocatorInstance.Data + lVar6);
        if ((FName)pFVar4->_padding_ == param_1) {
          return pFVar4;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while ((int)uVar5 < (this->VectorParameters).ArrayNum);
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while( true );
}

// GetVectorParameterDefaultValue @ 147fdaa10

FLinearColor * __thiscall
UMaterialParameterCollection::GetVectorParameterDefaultValue
          (UMaterialParameterCollection *this,FLinearColor *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  longlong lVar1;
  UMaterialParameterCollection *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FLinearColor *pFVar8;
  ulong64 uVar9;
  float *pfVar10;
  FName *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  for (pUVar2 = this; pUVar2 != (UMaterialParameterCollection *)0x0;
      pUVar2 = (pUVar2->Base).field0_0x0.DebugPtr) {
    uVar7 = 0;
    uVar13 = uVar7;
    if (0 < (pUVar2->VectorParameters).ArrayNum) {
      do {
        uVar12 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar12 < (pUVar2->VectorParameters).ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FLinearColor *)(*pcVar3)();
          return pFVar8;
        }
        pFVar11 = (FName *)((pUVar2->VectorParameters).AllocatorInstance.Data + uVar13);
        if (*pFVar11 == param_1) {
          *param_2 = true;
          if (this == pUVar2) goto LAB_147fdab4f;
          goto LAB_147fdab00;
        }
        uVar7 = (ulonglong)(uVar12 + 1);
        uVar13 = uVar13 + 0x28;
      } while ((int)(uVar12 + 1) < (pUVar2->VectorParameters).ArrayNum);
    }
  }
  *param_2 = false;
  fVar14 = FLinearColor::Black.field0_0x0._0_4_;
  fVar15 = FLinearColor::Black.field0_0x0._4_4_;
  fVar16 = FLinearColor::Black.field0_0x0._8_4_;
  fVar17 = FLinearColor::Black.field0_0x0._12_4_;
  goto LAB_147fdaac9;
LAB_147fdab00:
  do {
    uVar9 = CityHash64((char *)(pFVar11 + 1),0x10);
    iVar6 = TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                        *)&this->VectorParameterBaseOverrides,(uint)uVar9,(FGuid *)(pFVar11 + 1));
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->VectorParameterBaseOverrides + (longlong)iVar6 * 0x28;
      pfVar10 = (float *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pfVar10 = (float *)0x0;
      }
      if (pfVar10 != (float *)0x0) {
        fVar14 = *pfVar10;
        fVar15 = pfVar10[1];
        fVar16 = pfVar10[2];
        fVar17 = pfVar10[3];
        goto LAB_147fdaac9;
      }
    }
    this = (this->Base).field0_0x0.DebugPtr;
  } while (this != pUVar2);
LAB_147fdab4f:
  fVar14 = (float)pFVar11[3].ComparisonIndex.Value;
  fVar15 = (float)pFVar11[3].Number;
  fVar16 = (float)pFVar11[4].ComparisonIndex.Value;
  fVar17 = (float)pFVar11[4].Number;
LAB_147fdaac9:
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar16;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar17;
  return __return_storage_ptr__;
}

// GetVectorParameterIndexByName @ 147fdab70

int __thiscall
UMaterialParameterCollection::GetVectorParameterIndexByName
          (UMaterialParameterCollection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->VectorParameters).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->VectorParameters).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->VectorParameters).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->VectorParameters).ArrayNum);
  }
  return -1;
}

// GetVectorParameterNames @ 147fdac20

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMaterialParameterCollection::GetVectorParameterNames
          (UMaterialParameterCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetParameterNames(this,__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// IsReadyForFinishDestroy @ 147fe31e0

bool __thiscall
UMaterialParameterCollection::IsReadyForFinishDestroy(UMaterialParameterCollection *this)

{
  return this->ReleasedByRT != (FThreadSafeBool)0x0;
}

// PostInitProperties @ 147fe5d20

void __thiscall UMaterialParameterCollection::PostInitProperties(UMaterialParameterCollection *this)

{
  FMaterialParameterCollectionInstanceResource *pFVar1;
  wchar_t *pwVar2;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pFVar1 = ::operator_new(0x28);
      if (pFVar1 != (FMaterialParameterCollectionInstanceResource *)0x0) {
        (pFVar1->Id).A = 0;
        (pFVar1->Id).B = 0;
        (pFVar1->Id).C = 0;
        (pFVar1->Id).D = 0;
        (pFVar1->OwnerName).ComparisonIndex = 0;
        (pFVar1->OwnerName).Number = 0;
        (pFVar1->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
        (pFVar1->UniformBufferLayout).Reference = (FRHIUniformBufferLayout *)0x0;
        this->DefaultResource = pFVar1;
        return;
      }
      this->DefaultResource = (FMaterialParameterCollectionInstanceResource *)0x0;
    }
  }
  return;
}

// PostLoad @ 147fe5ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMaterialParameterCollection::PostLoad(UMaterialParameterCollection *this)

{
  undefined1 *puVar1;
  TMap<FGuid,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>_>
  *this_00;
  int iVar2;
  UMaterialParameterCollection *pUVar3;
  ULevel *pUVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  FGuid *pFVar11;
  UClass *pUVar12;
  longlong lVar13;
  FGuid local_48;
  FGuid local_38;
  TObjectIterator<UWorld> local_28;
  
  UObject::PostLoad((UObject *)this);
  pUVar3 = (this->Base).field0_0x0.DebugPtr;
  uVar10 = (this->BaseStateId).D;
  if (pUVar3 == (UMaterialParameterCollection *)0x0) {
    if (((uVar10 != 0 || (this->BaseStateId).A != 0) || (this->BaseStateId).C != 0) ||
        (this->BaseStateId).B != 0) {
      (this->BaseStateId).A = 0;
      (this->BaseStateId).B = 0;
      (this->BaseStateId).C = 0;
      (this->BaseStateId).D = 0;
      pFVar11 = FGuid::NewGuid(&local_48);
      uVar10 = pFVar11->B;
      uVar6 = pFVar11->C;
      uVar7 = pFVar11->D;
      (this->StateId).A = pFVar11->A;
      (this->StateId).B = uVar10;
      (this->StateId).C = uVar6;
      (this->StateId).D = uVar7;
      bVar8 = 1 < *(int *)&(this->ScalarParameterBaseOverrides).field_0x48;
      if (!bVar8) {
        TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                        *)&this->ScalarParameterBaseOverrides);
      }
      puVar1 = &(this->ScalarParameterBaseOverrides).field_0xc;
      *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)&this->ScalarParameterBaseOverrides,0,(int *)puVar1
                  );
      }
      *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x34 = 0;
      iVar2 = *(int *)&(this->ScalarParameterBaseOverrides).field_0x2c;
      *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ScalarParameterBaseOverrides).field_0x10,0);
      }
      if (bVar8) {
        *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x48 = 1;
        TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>::
        Rehash((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                *)&this->ScalarParameterBaseOverrides);
      }
      this_00 = &this->VectorParameterBaseOverrides;
      bVar8 = 1 < *(int *)&(this->VectorParameterBaseOverrides).field_0x48;
      if (!bVar8) {
        TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->VectorParameterBaseOverrides).field_0xc;
      *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x34 = 0;
      iVar2 = *(int *)&(this->VectorParameterBaseOverrides).field_0x2c;
      *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->VectorParameterBaseOverrides).field_0x10,0);
      }
      if (bVar8) {
        *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x48 = 1;
        TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  else if ((((pUVar3->StateId).C != (this->BaseStateId).C ||
            (pUVar3->StateId).B != (this->BaseStateId).B) || uVar10 != (pUVar3->StateId).D) ||
           (this->BaseStateId).A != (pUVar3->StateId).A) {
    UpdateOverrides(this,pUVar3);
  }
  if ((((this->StateId).D == 0 && (this->StateId).C == 0) && (this->StateId).B == 0) &&
      (this->StateId).A == 0) {
    pFVar11 = FGuid::NewGuid(&local_38);
    uVar10 = pFVar11->B;
    uVar6 = pFVar11->C;
    uVar7 = pFVar11->D;
    (this->StateId).A = pFVar11->A;
    (this->StateId).B = uVar10;
    (this->StateId).C = uVar6;
    (this->StateId).D = uVar7;
  }
  CreateBufferStruct(this);
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_UWorld_NoRegister();
  GetObjectsOfClass(pUVar12,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar9 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UWorld>::Advance(&local_28);
    lVar13 = (longlong)local_28.Index;
    if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
      UpdateDefaultResource(this,true);
      return;
    }
    uVar10 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar10 = (uint)~local_28.Index >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pUVar4 = ((*(UWorld **)(local_28.ObjectArray.AllocatorInstance.Data + lVar13 * 8))->
             PersistentLevel).field0_0x0.DebugPtr;
    if ((pUVar4 == (ULevel *)0x0) ||
       (*(longlong *)&(pUVar4->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0)) {
      UWorld::AddParameterCollectionInstance
                (*(UWorld **)(local_28.ObjectArray.AllocatorInstance.Data + lVar13 * 8),this,true);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetupWorldParameterCollectionInstances @ 147ff7690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollection::SetupWorldParameterCollectionInstances
          (UMaterialParameterCollection *this)

{
  ULevel *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UWorld> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UWorld>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = ((*(UWorld **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8))->
             PersistentLevel).field0_0x0.DebugPtr;
    if ((pUVar1 == (ULevel *)0x0) ||
       (*(longlong *)&(pUVar1->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0)) {
      UWorld::AddParameterCollectionInstance
                (*(UWorld **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8),this,true);
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// UpdateDefaultResource @ 147ffdd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialParameterCollection::UpdateDefaultResource(UMaterialParameterCollection *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  wchar_t *pwVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  code *local_c0;
  code *pcStack_b8;
  code *local_b0;
  code *pcStack_a8;
  FMaterialParameterCollectionInstanceResource *local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    GetParameterData(this,&local_d8,
                     (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                      *)0x0,(TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                             *)0x0);
    local_c8 = (FName)this->_padding_;
    FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents
              (this->DefaultResource,&this->StateId,&local_d8,&local_c8,param_1);
    local_c0 = *(code **)&this->StateId;
    pcStack_b8 = *(code **)&(this->StateId).C;
    local_a0 = this->DefaultResource;
    local_98[0] = (code *)0x0;
    local_b0 = local_c0;
    pcStack_a8 = pcStack_b8;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = local_c0;
    local_70[2] = pcStack_b8;
    local_70[3] = (code *)local_a0;
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialParameterCollection::UpdateDefaultResource_::__l2::TSTR_UpdateDefaultResourceCommand936>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::TSTR_UpdateDefaultResourceCommand936>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar3);
      uVar6 = (ulonglong)local_38;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar5 = local_40;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar5 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar5 = local_70;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateOverrides @ 147fffaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMaterialParameterCollection::UpdateOverrides
          (UMaterialParameterCollection *this,UMaterialParameterCollection *param_1)

{
  TMap<FGuid,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,float,0>_> *this_00;
  TMap<FGuid,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>_>
  *this_01;
  ulonglong uVar1;
  UMaterialParameterCollection *pUVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  FGuid *pFVar11;
  FName FVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  ulonglong local_260;
  longlong *local_258;
  int iStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  int local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  int local_224;
  undefined1 local_220 [16];
  longlong *local_210;
  uint uStack_208;
  undefined4 uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  uint uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined1 local_160 [16];
  FGuid local_150 [2];
  undefined4 local_124;
  undefined1 local_118 [32];
  uint *local_f8;
  uint uStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint uStack_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_288;
  pUVar2 = (this->Base).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMaterialParameterCollection *)0x0) ||
     ((pUVar2 != param_1 && (bVar9 = UpdateOverrides(pUVar2,param_1), !bVar9)))) {
    bVar9 = false;
  }
  else {
    SanitizeParameters<FCollectionScalarParameter>(this,(pdm_7856c6d9)0x38);
    SanitizeParameters<FCollectionVectorParameter>(this,(pdm_515e8a30)0x48);
    pUVar2 = (this->Base).field0_0x0.DebugPtr;
    if ((((this->BaseStateId).D != (pUVar2->StateId).D ||
         (this->BaseStateId).C != (pUVar2->StateId).C) ||
        (this->BaseStateId).B != (pUVar2->StateId).B) ||
        (this->BaseStateId).A != (pUVar2->StateId).A) {
      uVar16 = (pUVar2->StateId).B;
      uVar18 = (pUVar2->StateId).C;
      uVar19 = (pUVar2->StateId).D;
      (this->BaseStateId).A = (pUVar2->StateId).A;
      (this->BaseStateId).B = uVar16;
      (this->BaseStateId).C = uVar18;
      (this->BaseStateId).D = uVar19;
      pFVar11 = FGuid::NewGuid(local_150);
      this_00 = &this->ScalarParameterBaseOverrides;
      uVar16 = pFVar11->B;
      uVar18 = pFVar11->C;
      uVar19 = pFVar11->D;
      (this->StateId).A = pFVar11->A;
      (this->StateId).B = uVar16;
      (this->StateId).C = uVar18;
      (this->StateId).D = uVar19;
      local_c8._0_8_ = *(undefined8 *)&this_00->field_0x0;
      puVar4 = &(this->ScalarParameterBaseOverrides).field_0x8;
      iVar15 = *(int *)puVar4;
      local_c8._8_8_ = *(undefined8 *)puVar4;
      local_98 = *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x30;
      iStack_94 = *(int *)&(this->ScalarParameterBaseOverrides).field_0x34;
      uVar5 = *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x38;
      uVar6 = *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x10;
      uVar7 = *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x18;
      local_a8 = *(uint **)&(this->ScalarParameterBaseOverrides).field_0x20;
      _uStack_a0 = *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x28;
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = *(void **)&(this->ScalarParameterBaseOverrides).field_0x40;
      uVar1 = *(ulonglong *)&(this->ScalarParameterBaseOverrides).field_0x48;
      *(undefined8 *)&this_00->field_0x0 = 0;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x8 = 0;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x10 = local_c8._16_8_;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x18 = local_c8._24_8_;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x20 = 0;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x28 = 0x8000000000;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x30 = 0xffffffff;
      *(ulonglong *)&(this->ScalarParameterBaseOverrides).field_0x38 = CONCAT44(uStack_8c,uStack_90)
      ;
      *(undefined8 *)&(this->ScalarParameterBaseOverrides).field_0x40 = 0;
      *(ulonglong *)&(this->ScalarParameterBaseOverrides).field_0x48 = uStack_80;
      local_c8._16_8_ = uVar6;
      local_c8._24_8_ = uVar7;
      uStack_90 = uVar5;
      uStack_8c = *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x3c;
      uStack_80 = uVar1;
      TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>::
      Empty((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
             *)this_00,iVar15 - iStack_94);
      uVar16 = uStack_a0;
      local_260 = 1;
      iStack_250 = 0;
      uStack_24c = 1;
      uStack_23c = 0;
      local_238 = iStack_250;
      if (uStack_a0 != 0) {
        puVar17 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar17 = local_a8;
        }
        uStack_24c = *puVar17;
        local_238 = 0;
        iStack_250 = 0;
        while (uStack_24c == 0) {
          lVar14 = (longlong)iStack_250;
          local_238 = local_238 + 0x20;
          iStack_250 = iStack_250 + 1;
          uStack_24c = 1;
          uStack_23c = uStack_a0;
          if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_250)
          goto LAB_147fffd33;
          uStack_24c = puVar17[lVar14 + 1];
        }
        uStack_24c = -uStack_24c & uStack_24c;
        uVar1 = (ulonglong)uStack_24c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_228 = (int)lVar14;
        uStack_23c = local_238 + -1 + local_228;
        if ((int)uStack_a0 < (int)uStack_23c) {
          uStack_23c = uStack_a0;
        }
      }
LAB_147fffd33:
      local_258 = (longlong *)local_c8;
      uStack_234 = local_124;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
      iStack_230 = local_c8._8_4_ - iStack_94;
      uVar18 = uStack_a0 & 0xffffffe0;
      TStack_1d8._padding_ = CONCAT44(uStack_24c,iStack_250);
      uStack_240 = 0xffffffff;
      TStack_1d8.CurrentBitIndex = uStack_23c;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uStack_a0 >> 5;
      TStack_1d8._28_4_ = local_124;
      TStack_1d8.BaseBitIndex = local_238;
      uStack_1b8 = CONCAT44(uStack_22c,iStack_230);
      bVar13 = (byte)_uStack_a0;
      local_1e0 = local_258;
      TStack_1d8.Array = local_248;
      if ((int)uStack_a0 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      if (uVar16 != uStack_a0) {
        puVar17 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar17 = local_a8;
        }
        uVar16 = -1 << (bVar13 & 0x1f) & puVar17[iVar15];
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar15;
          uVar18 = uVar18 + 0x20;
          iVar15 = iVar15 + 1;
          uVar16 = uStack_a0;
          if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_147fffe56;
          uVar16 = puVar17[lVar14 + 1];
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_224 = (int)lVar14;
        uVar16 = local_224 + -1 + uVar18;
        if ((int)uStack_a0 < (int)uVar16) {
          uVar16 = uStack_a0;
        }
      }
LAB_147fffe56:
      while( true ) {
        plVar8 = local_1e0;
        if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
          local_268 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
        }
        if (((TStack_1d8.CurrentBitIndex == uVar16) &&
            (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
           (plVar8 == (longlong *)local_c8)) break;
        lVar14 = *plVar8 + (longlong)TStack_1d8.CurrentBitIndex * 0x1c;
        FVar12 = GetParameterName((this->Base).field0_0x0.DebugPtr,(FGuid *)local_160);
        if (*(longlong *)FVar12 != 0) {
          local_178 = lVar14 + 0x10;
          local_180 = lVar14;
          TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,float_const_&>_>
                    ((TSet<TTuple<FGuid,float>,TDefaultMapHashableKeyFuncs<FGuid,float,0>,FDefaultSetAllocator>
                      *)&this->ScalarParameterBaseOverrides,
                     (TPairInitializer<FGuid_const_&,float_const_&> *)local_220,(bool *)&local_180);
        }
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
      }
      this_01 = &this->VectorParameterBaseOverrides;
      local_118._0_8_ = *(undefined8 *)&this_01->field_0x0;
      puVar4 = &(this->VectorParameterBaseOverrides).field_0x8;
      iVar15 = *(int *)puVar4;
      local_118._8_8_ = *(undefined8 *)puVar4;
      local_e8 = *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x30;
      iStack_e4 = *(int *)&(this->VectorParameterBaseOverrides).field_0x34;
      uVar5 = *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x38;
      uVar6 = *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x10;
      uVar7 = *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x18;
      local_f8 = *(uint **)&(this->VectorParameterBaseOverrides).field_0x20;
      _uStack_f0 = *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x28;
      uVar16 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      local_d8 = *(void **)&(this->VectorParameterBaseOverrides).field_0x40;
      uVar1 = *(ulonglong *)&(this->VectorParameterBaseOverrides).field_0x48;
      *(undefined8 *)&this_01->field_0x0 = 0;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x8 = 0;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x10 = local_118._16_8_;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x18 = local_118._24_8_;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x20 = 0;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x28 = 0x8000000000;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x30 = 0xffffffff;
      *(ulonglong *)&(this->VectorParameterBaseOverrides).field_0x38 = CONCAT44(uStack_dc,uStack_e0)
      ;
      *(undefined8 *)&(this->VectorParameterBaseOverrides).field_0x40 = 0;
      *(ulonglong *)&(this->VectorParameterBaseOverrides).field_0x48 = uStack_d0;
      local_118._16_8_ = uVar6;
      local_118._24_8_ = uVar7;
      uStack_e0 = uVar5;
      uStack_dc = *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x3c;
      uStack_d0 = uVar1;
      TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
               *)this_01,iVar15 - iStack_e4);
      uVar18 = uStack_f0;
      local_1f0 = 0;
      uStack_1f4 = local_1f0;
      if (uStack_f0 != 0) {
        puVar17 = (uint *)(local_118 + 0x10);
        if (local_f8 != (uint *)0x0) {
          puVar17 = local_f8;
        }
        uVar19 = *puVar17;
        local_1f0 = 0;
        uVar16 = 0;
        while (uVar19 == 0) {
          lVar14 = (longlong)(int)uVar16;
          local_1f0 = local_1f0 + 0x20;
          uVar16 = uVar16 + 1;
          uStack_1f4 = uStack_f0;
          if ((int)((uStack_f0 - 1) + ((int)(uStack_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_148000064;
          uVar19 = puVar17[lVar14 + 1];
        }
        local_260 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = local_260 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_220._4_4_ = (undefined4)lVar14;
        uStack_1f4 = (local_1f0 - 1) + local_220._4_4_;
        if ((int)uStack_f0 < (int)uStack_1f4) {
          uStack_1f4 = uStack_f0;
        }
      }
LAB_148000064:
      local_210 = (longlong *)local_118;
      uStack_204 = (undefined4)local_260;
      uVar19 = uStack_f0 & 0xffffffe0;
      uStack_1ec = uStack_23c;
      local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
      iStack_1e8 = local_118._8_4_ - iStack_e4;
      uStack_1f8 = 0xffffffff;
      TStack_1a8.CurrentBitIndex = uStack_1f4;
      TStack_1a8.UnvisitedBitMask = 0xffffffff;
      TStack_1a8._padding_ = CONCAT44(uStack_204,uVar16);
      iVar15 = (int)uStack_f0 >> 5;
      TStack_1a8._28_4_ = uStack_23c;
      TStack_1a8.BaseBitIndex = local_1f0;
      uStack_188 = CONCAT44(uStack_1e4,iStack_1e8);
      bVar13 = (byte)_uStack_f0;
      uStack_208 = uVar16;
      local_1b0 = local_210;
      TStack_1a8.Array = local_200;
      if ((int)uStack_f0 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      if (uVar18 != uStack_f0) {
        puVar17 = (uint *)(local_118 + 0x10);
        if (local_f8 != (uint *)0x0) {
          puVar17 = local_f8;
        }
        uVar16 = -1 << (bVar13 & 0x1f) & puVar17[iVar15];
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar15;
          uVar19 = uVar19 + 0x20;
          iVar15 = iVar15 + 1;
          uVar18 = uStack_f0;
          if ((int)((uStack_f0 - 1) + ((int)(uStack_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_148000190;
          uVar16 = puVar17[lVar14 + 1];
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar18 = (int)lVar14 + -1 + uVar19;
        if ((int)uStack_f0 < (int)uVar18) {
          uVar18 = uStack_f0;
        }
      }
LAB_148000190:
      while( true ) {
        plVar8 = local_1b0;
        if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
          `TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_267);
        }
        if (((TStack_1a8.CurrentBitIndex == uVar18) &&
            (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
           (plVar8 == (longlong *)local_118)) break;
        lVar14 = *plVar8 + (longlong)TStack_1a8.CurrentBitIndex * 0x28;
        FVar12 = GetParameterName((this->Base).field0_0x0.DebugPtr,(FGuid *)(local_160 + 8));
        if (*(longlong *)FVar12 != 0) {
          local_168 = lVar14 + 0x10;
          local_170 = lVar14;
          TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,FLinearColor_const_&>_>
                    ((TSet<TTuple<FGuid,FLinearColor>,TDefaultMapHashableKeyFuncs<FGuid,FLinearColor,0>,FDefaultSetAllocator>
                      *)&this->VectorParameterBaseOverrides,
                     (TPairInitializer<FGuid_const_&,FLinearColor_const_&> *)(local_220 + 8),
                     (bool *)&local_170);
        }
        TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
      }
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_118);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
    }
    bVar9 = true;
  }
  return bVar9;
}

