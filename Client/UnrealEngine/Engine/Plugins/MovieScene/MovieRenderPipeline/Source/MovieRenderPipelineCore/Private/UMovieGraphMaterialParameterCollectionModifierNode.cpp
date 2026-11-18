// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 16

// StaticClass @ 14dcf8f20

UClass * __cdecl UMovieGraphMaterialParameterCollectionModifierNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",
               L"MovieGraphMaterialParameterCollectionModifierNode",
               &Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.
                InnerSingleton,
               StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifierNode,0xf0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMaterialParameterCollectionModifierNode>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialParameterCollectionModifierNode>,
               local_res8,UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.
         InnerSingleton;
}

// UMovieGraphMaterialParameterCollectionModifierNode @ 14dd0aa50

UMovieGraphMaterialParameterCollectionModifierNode * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::
UMovieGraphMaterialParameterCollectionModifierNode
          (UMovieGraphMaterialParameterCollectionModifierNode *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this_00 = &(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Modifier).field0_0x0.DebugPtr = (UMovieGraphMaterialParameterCollectionModifier *)0x0;
  return this;
}

// UMovieGraphMaterialParameterCollectionModifierNode @ 14dd0aad0

UMovieGraphMaterialParameterCollectionModifierNode * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::
UMovieGraphMaterialParameterCollectionModifierNode
          (UMovieGraphMaterialParameterCollectionModifierNode *this)

{
  undefined1 *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphMaterialParameterCollectionModifier *pUVar4;
  FName local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this_00 = &(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Modifier).field0_0x0.DebugPtr = (UMovieGraphMaterialParameterCollectionModifier *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"MPC_Modifier");
  FVar1 = *pFVar2;
  pUVar3 = UMovieGraphMaterialParameterCollectionModifier::StaticClass();
  pUVar4 = (UMovieGraphMaterialParameterCollectionModifier *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphMaterialParameterCollectionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Modifier).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMovieGraphMaterialParameterCollectionModifierNode @ 14dd0db10

void __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::
~UMovieGraphMaterialParameterCollectionModifierNode
          (UMovieGraphMaterialParameterCollectionModifierNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphModifierNodeInterface__;
  pvVar1 = *(void **)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// operator() @ 14dd0f050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMovieGraphMaterialParameterCollectionModifierNode::GetDynamicPropertyDescriptions'::__l2::
<lambda_1>::operator()
          (void *this,UMaterialParameterCollection *param_1,FCollectionParameterBase *param_2,
          EPropertyBagPropertyType param_3,UObject *param_4)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FGuid *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_188 [32];
  UObject **local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  FString local_138;
  FName local_128;
  FString local_120;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FString local_f0;
  TStringView<wchar_t> local_d8;
  FGuid local_c8;
  UObject *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  FName local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  UObject *local_78;
  FGuid local_70;
  FName local_60;
  FScriptContainerElement local_58;
  undefined2 local_57;
  FScriptContainerElement local_55;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  FInstancedPropertyBag::SanitizePropertyName
            ((FName)&local_128,(param_2->ParameterName).ComparisonIndex);
  ::FName::ToString(&local_128,&local_f0);
  ::FString::PrintfImpl(&local_120,L"bOverride_%s");
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_78 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_70.A = (param_2->Id).A;
  local_70.B = (param_2->Id).B;
  local_70.C = (param_2->Id).C;
  local_70.D = (param_2->Id).D;
  local_60 = local_128;
  pFVar2 = *(ForAnyElementType **)this;
  local_57 = 0;
  local_55 = (FScriptContainerElement)0x0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0xffffffff;
  pFVar9 = pFVar2->Data;
  local_58 = (FScriptContainerElement)param_3;
  if ((pFVar9 <= (FScriptContainerElement *)&local_78) &&
     (lVar8 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)&local_78 < pFVar9 + lVar8 * 0x40)) {
    local_150 = (longlong)*(int *)&pFVar2[1].Data;
    local_148 = 0x40;
    local_168 = &local_78;
    local_160 = pFVar9;
    local_158 = lVar8;
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
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar9 = pFVar2->Data + (longlong)iVar5 * 0x40;
  *(UObject **)pFVar9 = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  *(undefined8 *)(pFVar9 + 8) = local_70._0_8_;
  *(undefined8 *)(pFVar9 + 0x10) = local_70._8_8_;
  *(FName *)(pFVar9 + 0x18) = local_60;
  pFVar9[0x20] = local_58;
  *(undefined2 *)(pFVar9 + 0x21) = local_57;
  pFVar9[0x23] = local_55;
  *(undefined8 *)(pFVar9 + 0x28) = local_50;
  *(undefined8 *)(pFVar9 + 0x30) = local_48;
  *(undefined4 *)(pFVar9 + 0x38) = local_40;
  iVar5 = local_120.Data.ArrayNum + -1;
  if (local_120.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar6 = ::FName::FName(&local_f8,iVar5,(wchar_t *)local_120.Data.AllocatorInstance.Data,FNAME_Add
                         );
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_a0 = *pFVar6;
  local_b8 = (UObject *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 1;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  FGuid::AppendString(&local_70,&local_138,Digits);
  local_108 = local_138.Data.AllocatorInstance.Data;
  iStack_100 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iStack_100 = 0;
  }
  local_d8._12_4_ = uStack_fc;
  local_d8.Size = iStack_100;
  local_d8.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  pFVar7 = FGuid::NewDeterministicGuid(&local_c8,&local_d8,0);
  local_b0._0_4_ = pFVar7->A;
  local_b0._4_4_ = pFVar7->B;
  uStack_a8._0_4_ = pFVar7->C;
  uStack_a8._4_4_ = pFVar7->D;
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(ForAnyElementType **)this;
  pFVar9 = pFVar2->Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_b8) &&
     (lVar8 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)&local_b8 < pFVar9 + lVar8 * 0x40)) {
    local_150 = (longlong)*(int *)&pFVar2[1].Data;
    local_148 = 0x40;
    local_168 = &local_b8;
    local_160 = pFVar9;
    local_158 = lVar8;
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
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar9 = pFVar2->Data + (longlong)iVar5 * 0x40;
  *(UObject **)pFVar9 = local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  *(undefined8 *)(pFVar9 + 8) = local_b0;
  *(undefined8 *)(pFVar9 + 0x10) = uStack_a8;
  *(FName *)(pFVar9 + 0x18) = local_a0;
  pFVar9[0x20] = local_98._0_1_;
  *(undefined2 *)(pFVar9 + 0x21) = local_98._1_2_;
  pFVar9[0x23] = local_98._3_1_;
  *(undefined8 *)(pFVar9 + 0x28) = local_90;
  *(undefined8 *)(pFVar9 + 0x30) = local_88;
  *(undefined4 *)(pFVar9 + 0x38) = local_80;
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAllModifiers @ 14dd22ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::GetAllModifiers
          (UMovieGraphMaterialParameterCollectionModifierNode *this,
          TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *this_00;
  uint *puVar1;
  char cVar2;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UMaterialParameterCollection *pUVar10;
  TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  FName *pFVar13;
  ulonglong uVar14;
  UClass *pUVar15;
  UScriptStruct *pUVar16;
  UScriptStruct *pUVar17;
  byte bVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  longlong lVar22;
  ForElementType<unsigned_int> FVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  UMaterialParameterCollection *pUVar26;
  uint uVar27;
  FName *pFVar28;
  UMaterialParameterCollection *pUVar29;
  FName *pFVar30;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8;
  undefined1 local_1e7;
  char local_1e6;
  byte local_1e5;
  UMovieGraphMaterialParameterCollectionModifierNode *local_1e0;
  undefined1 local_1d8;
  uint local_1d4;
  FGuid local_1d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  void *local_1a8;
  uint local_1a0;
  void *local_198;
  uint local_190;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  undefined4 local_15c;
  int local_158;
  undefined1 local_154 [12];
  TPersistentObjectPtr<FSoftObjectPath> *local_148;
  longlong local_140;
  TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *local_138;
  longlong local_130;
  FSparseArrayAllocationInfo local_128;
  longlong local_118;
  FGuid *local_108;
  undefined1 *local_100;
  FGuid *local_f8;
  longlong local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b8;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  undefined1 local_68 [4];
  byte local_64;
  TValueOrError<FStructView,EPropertyBagResult> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  lVar21 = this->_padding_;
  local_1e0 = this;
  local_138 = __return_storage_ptr__;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)(lVar21 + 0x50));
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
           *)(lVar21 + 0xa0));
  this_00 = &this->_padding_;
  local_148 = (TPersistentObjectPtr<FSoftObjectPath> *)this_00;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)(this->_padding_ + 0x28),
             (TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  pUVar10 = TSoftObjectPtr<UMaterialParameterCollection>::LoadSynchronous
                      ((TSoftObjectPtr<UMaterialParameterCollection> *)this_00);
  pUVar29 = (UMaterialParameterCollection *)0x0;
  if (pUVar10 == (UMaterialParameterCollection *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.AllocationFlags.NumBits = 0;
  local_b8.AllocationFlags.MaxBits = 0x80;
  local_b8.FirstFreeIndex = -1;
  local_b8.NumFreeIndices = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  (**(code **)(this[-1]._padding_ + 0x2d0))(&this[-1]._padding_,&local_1a8);
  uVar19 = (ulonglong)(int)local_1a0;
  pFVar28 = (FName *)(uVar19 * 0x40 + (longlong)local_1a8);
  local_1d4 = local_1a0;
  pFVar30 = (FName *)((longlong)local_1a8 + 0x18);
  while( true ) {
    if (local_1a0 != (uint)uVar19) {
      local_1e8 = 0;
      `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e8);
    }
    if (pFVar30 + -3 == pFVar28) break;
    if ((char)pFVar30[1].ComparisonIndex.Value == '\x01') {
      FInstancedPropertyBag::GetValueBool
                ((FInstancedPropertyBag *)&this[-1].field_0xb8,(FName)&local_1e6);
      uVar19 = (ulonglong)local_1e5;
      if ((2 < uVar19) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar19) != '\0') {
        if ((local_1e5 != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_1e6 == '\x01') {
          pFVar12 = ::FName::ToString(pFVar30,&local_d0);
          pFVar12 = ::FString::Replace(pFVar12,&local_e0,L"bOverride_",L"",CaseSensitive);
          iVar9 = (pFVar12->Data).ArrayNum;
          iVar7 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar7 = 0;
          }
          pFVar13 = ::FName::FName(&local_e8,iVar7,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data
                                   ,FNAME_Add);
          FVar3 = *pFVar13;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_b8.NumFreeIndices == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,4,1,(ForAnyElementType *)&local_b8,&local_b8.Data.ArrayNum,
                               &local_b8.Data.ArrayMax);
            iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              (&local_b8.AllocationFlags,1);
            FVar23 = (ForElementType<unsigned_int>)&local_b8.AllocationFlags;
            if (local_b8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_b8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            bVar18 = (byte)iVar7 & 0x1f;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x1f;
              bVar18 = bVar18 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar23 + (longlong)(iVar7 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar18 & 0x1f));
            iVar7 = local_b8.FirstFreeIndex;
          }
          else {
            local_b8.NumFreeIndices = local_b8.NumFreeIndices + -1;
            iVar7 = *(int *)(local_b8.Data.AllocatorInstance.Data +
                            (longlong)local_b8.FirstFreeIndex * 0x10 + 4);
            iVar9 = local_b8.FirstFreeIndex;
            if (local_b8.NumFreeIndices != 0) {
              *(undefined4 *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar7 * 0x10) =
                   0xffffffff;
            }
          }
          local_b8.FirstFreeIndex = iVar7;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex(&local_b8,&local_128,iVar9);
          pUVar10 = pUVar29;
          if (local_128.Pointer != (UMaterialParameterCollection *)0x0) {
            *(FName *)local_128.Pointer = FVar3;
            *(undefined4 *)((longlong)local_128.Pointer + 8) = 0xffffffff;
            pUVar10 = local_128.Pointer;
          }
          lVar21 = pUVar10->_padding_;
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
          uVar27 = local_b8.Data.ArrayNum - local_b8.NumFreeIndices;
          uVar8 = uVar8 + (int)((ulonglong)lVar21 >> 0x20);
          if (uVar27 == 1) {
LAB_14dd2337a:
            if (uVar27 < 4) goto LAB_14dd233c7;
            uVar19 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_15c = (undefined4)lVar21;
            uVar24 = 1 << ((byte)lVar21 & 0x1f);
          }
          else {
            if (uVar27 != 0) {
              FVar20.Data = local_80;
              if (local_78.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_78.Data;
              }
              for (iVar9 = *(int *)(FVar20.Data + (ulonglong)(local_70 - 1 & uVar8) * 4);
                  iVar9 != -1;
                  iVar9 = *(int *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8
                                  )) {
                if (*(longlong *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x10) ==
                    pUVar10->_padding_) {
                  if (iVar9 != -1) {
                    *(longlong *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x10) =
                         pUVar10->_padding_;
                    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized(&local_b8,local_128.Index,1);
                    this = local_1e0;
                    goto LAB_14dd23651;
                  }
                  break;
                }
              }
              goto LAB_14dd2337a;
            }
LAB_14dd233c7:
            uVar24 = 1;
          }
          if (((int)uVar27 < 1) || ((int)uVar24 <= (int)local_70)) {
            uVar8 = local_70 - 1 & uVar8;
            *(uint *)((longlong)&pUVar10->_padding_ + 4) = uVar8;
            FVar20.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_78.Data;
            }
            lVar21 = (longlong)(int)(local_70 - 1 & uVar8);
            *(undefined4 *)&pUVar10->_padding_ = *(undefined4 *)(FVar20.Data + lVar21 * 4);
            *(int *)(FVar20.Data + lVar21 * 4) = local_128.Index;
            this = local_1e0;
          }
          else {
            local_70 = uVar24;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
            }
            if (uVar24 != 0) {
              uVar8 = uVar24;
              if (uVar24 < 2) {
                if (local_78.Data != (FScriptContainerElement *)0x0) {
                  uVar8 = 0;
                  goto LAB_14dd2341c;
                }
              }
              else {
LAB_14dd2341c:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_78,0,uVar8,4);
              }
              if (0 < (int)uVar24) {
                uVar19 = (ulonglong)uVar24;
                pUVar10 = pUVar29;
                do {
                  FVar20.Data = local_80;
                  if (local_78.Data != (FScriptContainerElement *)0x0) {
                    FVar20.Data = local_78.Data;
                  }
                  uVar14 = (ulonglong)pUVar10 & (longlong)(int)uVar24 - 1U;
                  pUVar10 = (UMaterialParameterCollection *)((longlong)&pUVar10->_padding_ + 1);
                  *(undefined4 *)(FVar20.Data + uVar14 * 4) = 0xffffffff;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
            this = local_1e0;
            if (local_70 != 0) {
              pTStack_1c0 = &local_b8.AllocationFlags;
              uVar8 = 0;
              local_1d0.C = 0;
              local_1d0.D = 1;
              uStack_1b4 = 0;
              if (local_b8.AllocationFlags.NumBits != 0) {
                FVar23 = (ForElementType<unsigned_int>)&local_b8.AllocationFlags;
                if (local_b8.AllocationFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar23 = local_b8.AllocationFlags.AllocatorInstance.SecondaryData;
                }
                uVar27 = *(uint *)FVar23;
                pUVar10 = pUVar29;
                pUVar26 = pUVar29;
                while (uVar27 == 0) {
                  uVar8 = (int)pUVar26 + 0x20;
                  pUVar26 = (UMaterialParameterCollection *)(ulonglong)uVar8;
                  iVar9 = (int)pUVar10;
                  local_1d0.C = iVar9 + 1;
                  pUVar10 = (UMaterialParameterCollection *)(ulonglong)local_1d0.C;
                  uStack_1b4 = (ulonglong)uVar8 << 0x20;
                  if ((int)(local_b8.AllocationFlags.NumBits + -1 +
                           (local_b8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_1d0.C) {
                    uStack_1b4 = CONCAT44(uVar8,local_b8.AllocationFlags.NumBits);
                    goto LAB_14dd23545;
                  }
                  uVar27 = *(uint *)((uchar *)((longlong)FVar23 + 4) + (longlong)iVar9 * 4);
                }
                local_1d0.D = -uVar27 & uVar27;
                uVar19 = (ulonglong)local_1d0.D * 2 + 1;
                lVar21 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                local_158 = (int)lVar21;
                iVar9 = (uVar8 - 1) + local_158;
                if (local_b8.AllocationFlags.NumBits < iVar9) {
                  iVar9 = local_b8.AllocationFlags.NumBits;
                }
                uStack_1b4._4_4_ = (int)((ulonglong)uStack_1b4 >> 0x20);
                uStack_1b4 = CONCAT44(uStack_1b4._4_4_,iVar9);
              }
LAB_14dd23545:
              local_1b8 = 0xffffffff;
              local_188 = &local_b8;
              local_180._padding_ = CONCAT44(local_1d0.D,local_1d0.C);
              local_180.UnvisitedBitMask = 0xffffffff;
              local_180.CurrentBitIndex = (int)uStack_1b4;
              local_180.BaseBitIndex = uStack_1b4._4_4_;
              local_180._28_4_ = uStack_1ac;
              local_180.Array = pTStack_1c0;
              if ((int)uStack_1b4 < local_b8.AllocationFlags.NumBits) {
                do {
                  iVar9 = local_180.CurrentBitIndex;
                  pFVar25 = (local_188->Data).AllocatorInstance.Data +
                            (longlong)local_180.CurrentBitIndex * 0x10;
                  uVar4 = *(undefined8 *)pFVar25;
                  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                  uVar8 = local_70 - 1 & uVar8 + (int)((ulonglong)uVar4 >> 0x20);
                  *(uint *)(pFVar25 + 0xc) = uVar8;
                  FVar20.Data = local_80;
                  if (local_78.Data != (FScriptContainerElement *)0x0) {
                    FVar20.Data = local_78.Data;
                  }
                  lVar21 = (longlong)(int)(local_70 - 1 & uVar8);
                  *(undefined4 *)(pFVar25 + 8) = *(undefined4 *)(FVar20.Data + lVar21 * 4);
                  *(int *)(FVar20.Data + lVar21 * 4) = iVar9;
                  local_180.UnvisitedBitMask =
                       local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
                  this = local_1e0;
                } while (local_180.CurrentBitIndex < (local_180.Array)->NumBits);
              }
            }
          }
        }
      }
    }
LAB_14dd23651:
    uVar19 = (ulonglong)local_1d4;
    pFVar30 = pFVar30 + 8;
  }
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  (**(code **)(this[-1]._padding_ + 0x2d0))(&this[-1]._padding_,&local_198);
  uVar8 = local_190;
  uVar19 = (ulonglong)(int)local_190;
  pFVar28 = (FName *)(uVar19 * 0x40 + (longlong)local_198);
  pFVar30 = (FName *)((longlong)local_198 + 0x18);
LAB_14dd236a0:
  do {
    if ((uint)uVar19 != uVar8) {
      local_1e7 = 0;
      `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e7);
    }
    if (pFVar30 + -3 == pFVar28) {
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      pTVar11 = local_138;
      local_130 = this->_padding_;
      (local_138->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_138->ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_138->AllocatorInstance,1,&local_138->ArrayMax);
      *(longlong *)(pTVar11->AllocatorInstance).Data = local_130;
      local_70 = 0;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_b8);
      return pTVar11;
    }
    FVar3 = *pFVar30;
    cVar2 = (char)pFVar30[1].ComparisonIndex.Value;
    uVar27 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (local_b8.Data.ArrayNum != local_b8.NumFreeIndices) {
      FVar20.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_78.Data;
      }
      iVar9 = *(int *)(FVar20.Data + (ulonglong)(local_70 - 1 & FVar3.Number + uVar27) * 4);
      if (iVar9 == -1) goto LAB_14dd23a51;
      do {
        if (*(FName *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x10) == FVar3) {
          pUVar10 = (UMaterialParameterCollection *)
                    TPersistentObjectPtr<FSoftObjectPath>::Get(local_148);
          if (pUVar10 == (UMaterialParameterCollection *)0x0) {
LAB_14dd23774:
            pUVar10 = pUVar29;
          }
          else {
            pUVar15 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
            iVar9 = (int)pUVar15->_padding_;
            if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar15->_padding_)) goto LAB_14dd23774;
          }
          UMaterialParameterCollection::GetParameterName(pUVar10,&local_1d0);
          this = local_1e0;
          if (local_1d0._0_8_ == 0) goto LAB_14dd23a51;
          if (cVar2 == '\x05') {
            FInstancedPropertyBag::GetValueFloat
                      ((FInstancedPropertyBag *)&local_1e0[-1].field_0xb8,(FName)local_68);
            uVar19 = (ulonglong)local_64;
            if ((2 < uVar19) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
              ;
              return pTVar11;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar19) == '\0') goto LAB_14dd23a51;
            lVar21 = this->_padding_;
            if ((local_64 != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
              ;
              return pTVar11;
            }
            local_108 = &local_1d0;
            local_100 = local_68;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                      ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                        *)(lVar21 + 0x50),(TPairInitializer<FName_const_&,float_const_&> *)local_154
                       ,(bool *)&local_108);
            uVar19 = (ulonglong)local_190;
            pFVar30 = pFVar30 + 8;
            goto LAB_14dd236a0;
          }
          if (cVar2 != '\v') {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphMaterialParameterCollectionModifierNode.cpp"
                               ,0xf8,L"");
            this = local_1e0;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
              ;
              return pTVar11;
            }
            goto LAB_14dd23a51;
          }
          pUVar16 = TBaseStructure<FLinearColor>::Get();
          this = local_1e0;
          FInstancedPropertyBag::GetValueStruct
                    ((FInstancedPropertyBag *)&local_1e0[-1].field_0xb8,&local_60,FVar3,pUVar16);
          uVar19 = (ulonglong)local_60.Variant.TypeIndex;
          if ((2 < local_60.Variant.TypeIndex) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar11;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar19 + 4) == '\0') {
            if ((local_60.Variant.TypeIndex != 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
              ;
              return pTVar11;
            }
            local_118 = CONCAT71(local_118._1_7_,(undefined1)local_60.Variant._padding_);
LAB_14dd239b1:
            lVar22 = 1;
          }
          else {
            if ((local_60.Variant.TypeIndex != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
              ;
              return pTVar11;
            }
            lVar21 = local_60.Variant._padding_;
            pUVar16 = (UScriptStruct *)
                      CONCAT71(local_60.Variant._padding_._1_7_,
                               (undefined1)local_60.Variant._padding_);
            if ((local_60.Variant._padding_ == 0) || (pUVar16 == (UScriptStruct *)0x0)) {
LAB_14dd2399f:
              local_140 = 0;
              local_1d8 = 1;
              local_118 = CONCAT71(local_118._1_7_,1);
              this = local_1e0;
              goto LAB_14dd239b1;
            }
            pUVar17 = TBaseStructure<FLinearColor>::Get();
            if (pUVar16 != pUVar17) {
              pUVar17 = TBaseStructure<FLinearColor>::Get();
              if (pUVar17 != (UScriptStruct *)0x0) {
                iVar9 = (int)pUVar17->_padding_;
                if (((int)pUVar16->_padding_ < iVar9) ||
                   ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar9 * 8) !=
                    &pUVar17->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) goto LAB_14dd2398e;
              }
              goto LAB_14dd2399f;
            }
LAB_14dd2398e:
            local_140 = lVar21;
            lVar22 = 0;
            local_118 = lVar21;
            this = local_1e0;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,FText,TValueOrError<class_FText,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + lVar22 + 4) == '\0') goto LAB_14dd23a51;
          lVar21 = this->_padding_;
          if (((char)lVar22 != '\0') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar11;
          }
          local_f8 = &local_1d0;
          local_f0 = local_118;
          TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
                    ((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                      *)(lVar21 + 0xa0),
                     (TPairInitializer<FName_const_&,FLinearColor_const_&> *)(local_154 + 4),
                     (bool *)&local_f8);
          uVar19 = (ulonglong)local_190;
          pFVar30 = pFVar30 + 8;
          goto LAB_14dd236a0;
        }
        iVar9 = *(int *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8);
      } while (iVar9 != -1);
      uVar19 = (ulonglong)local_190;
      pFVar30 = pFVar30 + 8;
      goto LAB_14dd236a0;
    }
LAB_14dd23a51:
    uVar19 = (ulonglong)local_190;
    pFVar30 = pFVar30 + 8;
  } while( true );
}

// GetDynamicPropertyDescriptions @ 14dd24eb0

TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::GetDynamicPropertyDescriptions
          (UMovieGraphMaterialParameterCollectionModifierNode *this,
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UMaterialParameterCollection *this_00;
  UScriptStruct *pUVar2;
  FCollectionParameterBase *pFVar3;
  FCollectionParameterBase *pFVar4;
  undefined1 local_res8 [8];
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = TSoftObjectPtr<UMaterialParameterCollection>::LoadSynchronous
                      (&this->MaterialParameterCollection);
  if ((this_00 != (UMaterialParameterCollection *)0x0) &&
     (local_res10 = __return_storage_ptr__, ((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    do {
      iVar1 = (this_00->ScalarParameters).ArrayNum;
      pFVar4 = (FCollectionParameterBase *)(this_00->ScalarParameters).AllocatorInstance.Data;
      pFVar3 = (FCollectionParameterBase *)((longlong)pFVar4 + (longlong)iVar1 * 0x1c);
      while( true ) {
        if ((this_00->ScalarParameters).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FCollectionScalarParameter,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar4 == pFVar3) break;
        `UMovieGraphMaterialParameterCollectionModifierNode::GetDynamicPropertyDescriptions'::__l2::
        <lambda_1>::operator()(&local_res10,this_00,pFVar4,Float,(UObject *)0x0);
        pFVar4 = (FCollectionParameterBase *)&pFVar4[1].ParameterName.Number;
      }
      iVar1 = (this_00->VectorParameters).ArrayNum;
      pFVar3 = (FCollectionParameterBase *)(this_00->VectorParameters).AllocatorInstance.Data;
      pFVar4 = (FCollectionParameterBase *)((longlong)pFVar3 + (longlong)iVar1 * 0x28);
      while( true ) {
        if ((this_00->VectorParameters).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FCollectionVectorParameter,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar3 == pFVar4) break;
        pUVar2 = TBaseStructure<FLinearColor>::Get();
        `UMovieGraphMaterialParameterCollectionModifierNode::GetDynamicPropertyDescriptions'::__l2::
        <lambda_1>::operator()(&local_res10,this_00,pFVar3,Struct,(UObject *)pUVar2);
        pFVar3 = (FCollectionParameterBase *)&pFVar3[1].Id.C;
      }
      this_00 = UMaterialParameterCollection::GetBaseParameterCollection(this_00);
    } while (this_00 != (UMaterialParameterCollection *)0x0);
  }
  return __return_storage_ptr__;
}

// GetDynamicPropertyValue @ 14dd24fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::GetDynamicPropertyValue
          (UMovieGraphMaterialParameterCollectionModifierNode *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  TValueOrError<FString,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueSerializedString
            ((FInstancedPropertyBag *)&this->_padding_,&local_28,param_1);
  uVar5 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_28.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    iVar6 = (int)local_28.Variant._padding_ + -1;
    if ((int)local_28.Variant._padding_ == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(param_2,(wchar_t *)local_28.Variant._padding_,iVar6);
    bVar2 = true;
  }
  if (2 < local_28.Variant.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
  return bVar2;
}

// GetNodeInstanceName @ 14dd29290

FString * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::GetNodeInstanceName
          (UMovieGraphMaterialParameterCollectionModifierNode *this,FString *__return_storage_ptr__)

{
  undefined1 *this_00;
  
  this_00 = &(this->MaterialParameterCollection).SoftObjectPtr.field_0x8;
  if (*(longlong *)this_00 != 0) {
    FSoftObjectPath::GetAssetName((FSoftObjectPath *)this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOverrideablePropertyInfo @ 14dd2b6b0

TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::GetOverrideablePropertyInfo
          (UMovieGraphMaterialParameterCollectionModifierNode *this,
          TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  FName local_res20;
  
  UMovieGraphNode::GetOverrideablePropertyInfo((UMovieGraphNode *)this,__return_storage_ptr__);
  lVar4 = (longlong)__return_storage_ptr__->ArrayNum;
  if (__return_storage_ptr__->ArrayNum == 0) {
    return __return_storage_ptr__;
  }
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  iVar9 = 0;
  pFVar2 = ::FName::FName(&local_res20,0x1b,L"MaterialParameterCollection",FNAME_Add);
  bVar10 = *pFVar1 != *pFVar2;
  lVar5 = 0;
  iVar6 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar7 = iVar6 + 1;
    if (lVar5 < lVar4) {
      pFVar2 = pFVar1 + lVar5 * 7;
      do {
        pFVar3 = ::FName::FName(&local_res20,0x1b,L"MaterialParameterCollection",FNAME_Add);
        if (bVar10 != (*pFVar2 != *pFVar3)) break;
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 1;
        pFVar2 = pFVar2 + 7;
      } while (lVar5 < lVar4);
    }
    iVar8 = iVar7 - iVar6;
    if (bVar10 == false) {
      DestructItems<FMovieGraphPropertyInfo,int>
                ((FMovieGraphPropertyInfo *)(pFVar1 + (longlong)iVar6 * 7),iVar8);
    }
    else {
      if (iVar9 != iVar6) {
        memmove(pFVar1 + (longlong)iVar9 * 7,pFVar1 + (longlong)iVar6 * 7,(longlong)iVar8 * 0x38);
      }
      iVar9 = iVar9 + iVar8;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar6 = iVar7;
    if (lVar4 <= lVar5) {
      __return_storage_ptr__->ArrayNum = iVar9;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetPrivateStaticClass @ 14dd2c990

UClass * __cdecl UMovieGraphMaterialParameterCollectionModifierNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",
               L"MovieGraphMaterialParameterCollectionModifierNode",
               &Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.
                InnerSingleton,
               StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifierNode,0xf0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMaterialParameterCollectionModifierNode>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialParameterCollectionModifierNode>,
               local_res8,UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifierNode.
         InnerSingleton;
}

// OnObjectPropertyChanged @ 14dd38590

void __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::OnObjectPropertyChanged
          (UMovieGraphMaterialParameterCollectionModifierNode *this,UObject *param_1,
          FPropertyChangedEvent *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UMaterialParameterCollection *this_00;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  UMaterialParameterCollection *local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  if (((param_2->ChangeType != 0x40) && (param_1 != (UObject *)0x0)) &&
     (pUVar5 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister(),
     *(UClass **)&param_1->field_0x10 == pUVar5)) {
    this_00 = TSoftObjectPtr<UMaterialParameterCollection>::LoadSynchronous
                        (&this->MaterialParameterCollection);
    uVar6 = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18._0_4_ = 0;
    local_18 = 0;
    uVar2 = local_18;
    while (local_18 = uVar2, this_00 != (UMaterialParameterCollection *)0x0) {
      iVar4 = (int)uVar6;
      local_28 = this_00;
      if ((local_20.Data <= (FScriptContainerElement *)&local_28) &&
         (local_18._4_4_ = (int)(uVar2 >> 0x20), lVar7 = (longlong)local_18._4_4_,
         (FScriptContainerElement *)&local_28 < local_20.Data + lVar7 * 8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_18;
      }
      if (iVar4 == local_18._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_20,(int *)((longlong)&local_18 + 4));
      }
      local_18 = CONCAT44(local_18._4_4_,iVar4 + 1);
      *(UMaterialParameterCollection **)(local_20.Data + (longlong)iVar4 * 8) = local_28;
      this_00 = UMaterialParameterCollection::GetBaseParameterCollection(this_00);
      uVar6 = local_18 & 0xffffffff;
      uVar2 = local_18;
    }
    lVar7 = (longlong)(int)local_18;
    for (pFVar8 = local_20.Data; pFVar8 != local_20.Data + lVar7 * 8; pFVar8 = pFVar8 + 8) {
      if (*(UMaterialParameterCollection **)pFVar8 == (UMaterialParameterCollection *)param_1) {
        UMovieGraphNode::UpdateDynamicProperties((UMovieGraphNode *)this);
        break;
      }
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  return;
}

// PrepareForFlattening @ 14dd3a610

void __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::PrepareForFlattening
          (UMovieGraphMaterialParameterCollectionModifierNode *this,UMovieGraphSettingNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphSettingNode *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&this->MaterialParameterCollection,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x10);
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifierNode @ 14dd45240

void __cdecl
UMovieGraphMaterialParameterCollectionModifierNode::
StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifierNode(void)

{
  return;
}

// SupportsCollections @ 14dd45a20

bool __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::SupportsCollections
          (UMovieGraphMaterialParameterCollectionModifierNode *this)

{
  return false;
}

// _getUObject @ 14dd4de90

UObject * __thiscall
UMovieGraphMaterialParameterCollectionModifierNode::_getUObject
          (UMovieGraphMaterialParameterCollectionModifierNode *this)

{
  return (UObject *)&this[-1]._padding_;
}

