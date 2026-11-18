// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dcf8ba0

UClass * __cdecl UMovieGraphSelectNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSelectNode",
               &Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSelectNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphSelectNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSelectNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton;
}

// UMovieGraphSelectNode @ 14dd0b290

UMovieGraphSelectNode * __thiscall
UMovieGraphSelectNode::UMovieGraphSelectNode(UMovieGraphSelectNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphSelectNode__6B_;
  (this->SelectOptions).field0_0x0.DebugPtr = (UMovieGraphValueContainer *)0x0;
  (this->SelectedOption).field0_0x0.DebugPtr = (UMovieGraphValueContainer *)0x0;
  return this;
}

// UMovieGraphSelectNode @ 14dd0b2d0

UMovieGraphSelectNode * __thiscall
UMovieGraphSelectNode::UMovieGraphSelectNode(UMovieGraphSelectNode *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphValueContainer *pUVar4;
  FName local_res8;
  
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphSelectNode__6B_;
  (this->SelectOptions).field0_0x0.DebugPtr = (UMovieGraphValueContainer *)0x0;
  (this->SelectedOption).field0_0x0.DebugPtr = (UMovieGraphValueContainer *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pFVar2 = ::FName::FName(&local_res8,L"SelectOptions");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();
    pUVar4 = (UMovieGraphValueContainer *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMovieGraphValueContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SelectOptions).field0_0x0.DebugPtr = pUVar4;
    UMovieGraphValueContainer::SetValueContainerType(pUVar4,Array);
    UMovieGraphValueContainer::SetValueType
              ((this->SelectOptions).field0_0x0.DebugPtr,String,(UObject *)0x0);
    pUVar4 = (this->SelectOptions).field0_0x0.DebugPtr;
    pFVar2 = ::FName::FName(&local_res8,L"Options");
    UMovieGraphValueContainer::SetPropertyName(pUVar4,pFVar2);
    pFVar2 = ::FName::FName(&local_res8,L"SelectedOption");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();
    pUVar4 = (UMovieGraphValueContainer *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMovieGraphValueContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SelectedOption).field0_0x0.DebugPtr = pUVar4;
    UMovieGraphValueContainer::SetValueType(pUVar4,String,(UObject *)0x0);
    pUVar4 = (this->SelectedOption).field0_0x0.DebugPtr;
    pFVar2 = ::FName::FName(&local_res8,L"Selection");
    UMovieGraphValueContainer::SetPropertyName(pUVar4,pFVar2);
  }
  return this;
}

// ~UMovieGraphSelectNode @ 14dd0ddd0

void __thiscall UMovieGraphSelectNode::~UMovieGraphSelectNode(UMovieGraphSelectNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSelectNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// EvaluatePinsToFollow @ 14dd1b9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSelectNode::EvaluatePinsToFollow
          (UMovieGraphSelectNode *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieGraphEvaluationContext *param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphValueContainer *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EMovieGraphValueType EVar6;
  int iVar7;
  uint uVar8;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UMovieGraphPin *this_00;
  UMovieGraphPin *pUVar10;
  UObject *pUVar11;
  UEnum *this_01;
  UClass *pUVar12;
  UEnum *pUVar13;
  UEnum *pUVar14;
  ulonglong uVar15;
  uint uVar16;
  UMovieGraphSelectNode *this_02;
  undefined8 *puVar17;
  undefined1 auStackY_298 [32];
  char local_248;
  byte local_247;
  uchar local_246;
  byte local_245;
  uchar local_244;
  byte local_243;
  undefined1 local_242;
  bool local_241;
  uchar local_240;
  uchar local_23f [7];
  UMovieGraphSelectNode *local_238;
  int local_230 [2];
  UMovieGraphPin *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  UMovieGraphPin *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  FName local_1d8;
  longlong local_1d0;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  FString local_1a8;
  UMovieGraphPin *local_198;
  longlong local_190;
  FText local_188;
  FString local_178;
  int local_168;
  byte local_164;
  FName local_160;
  byte local_158;
  TValueOrError<FString,EPropertyBagResult> local_150;
  TValueOrError<__int64,EPropertyBagResult> local_138;
  TValueOrError<FText,EPropertyBagResult> local_128;
  FPropertyBagArrayRef local_108;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pUVar14 = (UEnum *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_238 = this;
  bVar5 = UMovieGraphNode::IsDisabled((UMovieGraphNode *)this);
  if (bVar5) {
    local_228 = UMovieGraphNode::GetFirstConnectedInputPin((UMovieGraphNode *)this);
    if (local_228 == (UMovieGraphPin *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 <
         pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UMovieGraphPin **)(pFVar1 + (longlong)iVar7 * 8) = local_228;
    return __return_storage_ptr__;
  }
  this_00 = UMovieGraphNode::GetInputPin
                      ((UMovieGraphNode *)this,&UE::MovieGraph::SelectNode::SelectedOption,BuiltIn);
  if ((this_00 != (UMovieGraphPin *)0x0) &&
     (pUVar10 = UMovieGraphPin::GetFirstConnectedPin(this_00,true), pUVar10 != (UMovieGraphPin *)0x0
     )) {
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 1;
    local_198 = pUVar10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_1c8.AllocatorInstance,1,&local_1c8.ArrayMax);
    *(UMovieGraphPin **)local_1c8.AllocatorInstance.Data = local_198;
    bVar5 = UE::MovieGraph::ResolveConnectedPinValue(this_00,&local_1c8,param_1,&local_1a8);
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    this_01 = pUVar14;
    if (bVar5) {
      pUVar11 = GetTransientPackageAsObject();
      this_01 = (UEnum *)NewObject<UMovieGraphValueContainer>(pUVar11);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      UMovieGraphValueContainer::SetValueType
                ((UMovieGraphValueContainer *)this_01,(pUVar10->Properties).Type,(UObject *)0x0);
      UMovieGraphValueContainer::SetValueTypeObject
                ((UMovieGraphValueContainer *)this_01,
                 (pUVar10->Properties).TypeObject.field0_0x0.DebugPtr);
      UMovieGraphValueContainer::SetValueSerializedString
                ((UMovieGraphValueContainer *)this_01,&local_1a8);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    this_02 = local_238;
    if (bVar5) goto LAB_14dd1bbff;
  }
  this_02 = local_238;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (local_238->SelectedOption).field0_0x0.DebugPtr,
     pUVar2 != (UMovieGraphValueContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this_01 = (UEnum *)(this_02->SelectedOption).field0_0x0.DebugPtr;
LAB_14dd1bbff:
  UMovieGraphValueContainer::GetArrayRef((this_02->SelectOptions).field0_0x0.DebugPtr,&local_a8);
  uVar15 = (ulonglong)local_a8.Variant.TypeIndex;
  if ((2 < uVar15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar15 + 4) != '\0') {
    uVar15 = (ulonglong)local_a8.Variant.TypeIndex;
    if ((2 < uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar15) == '\0') {
      if ((local_a8.Variant.TypeIndex != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      FPropertyBagArrayRef::FPropertyBagArrayRef(&local_108,(FPropertyBagArrayRef *)&local_a8);
      local_1d0 = 0;
LAB_14dd1bcf0:
      lVar4 = local_1d0;
      uVar16 = (uint)pUVar14;
      if (*(int *)(local_108._padding_ + 8) <= (int)uVar16) {
        if (__return_storage_ptr__->ArrayNum != 0) {
          return __return_storage_ptr__;
        }
        local_208 = UMovieGraphNode::GetInputPin
                              ((UMovieGraphNode *)this_02,&UE::MovieGraph::SelectNode::DefaultBranch
                               ,BuiltIn);
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_208) &&
            ((FScriptContainerElement *)&local_208 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(UMovieGraphPin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8)
             = local_208;
        return __return_storage_ptr__;
      }
      if (((int)uVar16 < 0) || ((int)this_02->_padding_ <= (int)uVar16)) {
        local_242 = 0;
        bVar5 = `UMovieGraphSelectNode::EvaluatePinsToFollow'::__l44::<lambda_1>::operator()
                          (&local_242);
        if (bVar5) goto LAB_14dd1bd26;
        goto LAB_14dd1cbfc;
      }
LAB_14dd1bd26:
      uVar8 = 0;
      if ((int)uVar16 < (int)this_02->_padding_) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      puVar17 = (undefined8 *)(lVar4 + this_02->_padding_);
      bVar5 = UMovieGraphPin::IsConnected((UMovieGraphPin *)*puVar17);
      if (!bVar5) goto LAB_14dd1cbfc;
      EVar6 = UMovieGraphValueContainer::GetValueType((this_02->SelectOptions).field0_0x0.DebugPtr);
      switch(EVar6) {
      case Bool:
        FPropertyBagArrayRef::GetValueBool(&local_108,(int)&local_248);
        uVar15 = (ulonglong)local_247;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          uVar15 = (ulonglong)local_247;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueBool
                                ((UMovieGraphValueContainer *)this_01,&local_241), bVar5)) {
            if ((local_247 != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if ((bool)local_248 == local_241) {
              local_220 = *puVar17;
              pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_220) &&
                  ((FScriptContainerElement *)&local_220 <
                   pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
              local_1d0 = local_1d0 + 8;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_220;
              goto LAB_14dd1bcf0;
            }
          }
        }
        break;
      case Byte:
        FPropertyBagArrayRef::GetValueByte(&local_108,(int)&local_246);
        uVar15 = (ulonglong)local_245;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          uVar15 = (ulonglong)local_245;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueByte
                                ((UMovieGraphValueContainer *)this_01,&local_240), bVar5)) {
            if ((local_245 != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if (local_246 == local_240) {
              local_218 = *puVar17;
              pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_218) &&
                  ((FScriptContainerElement *)&local_218 <
                   pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
              local_1d0 = local_1d0 + 8;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_218;
              goto LAB_14dd1bcf0;
            }
          }
        }
        break;
      case Int32:
        FPropertyBagArrayRef::GetValueInt32(&local_108,(int)&local_168);
        uVar15 = (ulonglong)local_164;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          uVar15 = (ulonglong)local_164;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15 + 4) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueInt32
                                ((UMovieGraphValueContainer *)this_01,local_230), bVar5)) {
            if ((local_164 != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if (local_168 == local_230[0]) {
              local_200 = *puVar17;
              pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_200) &&
                  ((FScriptContainerElement *)&local_200 <
                   pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
              local_1d0 = local_1d0 + 8;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_200;
              goto LAB_14dd1bcf0;
            }
          }
        }
        break;
      case Int64:
        FPropertyBagArrayRef::GetValueInt64(&local_108,&local_138,uVar16);
        uVar15 = (ulonglong)local_138.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          uVar15 = (ulonglong)local_138.Variant.TypeIndex;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,__int64,TValueOrError<__int64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueInt64
                                ((UMovieGraphValueContainer *)this_01,&local_190), bVar5)) {
            if ((local_138.Variant.TypeIndex != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if (local_138.Variant._padding_ == local_190) {
              local_1f8 = *puVar17;
              pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_1f8) &&
                  ((FScriptContainerElement *)&local_1f8 <
                   pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
              local_1d0 = local_1d0 + 8;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_1f8;
              goto LAB_14dd1bcf0;
            }
          }
        }
        break;
      default:
        pUVar14 = StaticEnum<enum_EMovieGraphValueType>();
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          EVar6 = UMovieGraphValueContainer::GetValueType
                            ((this_02->SelectOptions).field0_0x0.DebugPtr);
          UEnum::GetNameStringByValue(pUVar14,&local_178,(ulonglong)EVar6);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
            pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
            local_1d0 = local_1d0 + 8;
            goto LAB_14dd1bcf0;
          }
        }
        break;
      case Name:
        FPropertyBagArrayRef::GetValueName
                  (&local_108,(TValueOrError<FName,EPropertyBagResult> *)&local_160,uVar16);
        local_1d8.ComparisonIndex.Value = 0;
        local_1d8.Number = 0;
        uVar15 = (ulonglong)local_158;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          uVar15 = (ulonglong)local_158;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15 + 4) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueName
                                ((UMovieGraphValueContainer *)this_01,&local_1d8), bVar5)) {
            if ((local_158 != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if (local_160 == local_1d8) {
              local_1f0 = *puVar17;
              pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_1f0) &&
                  ((FScriptContainerElement *)&local_1f0 <
                   pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
              local_1d0 = local_1d0 + 8;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_1f0;
              goto LAB_14dd1bcf0;
            }
          }
        }
        break;
      case String:
        FPropertyBagArrayRef::GetValueString(&local_108,&local_150,uVar16);
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        uVar15 = (ulonglong)local_150.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          uVar15 = (ulonglong)local_150.Variant.TypeIndex;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if ((*(char *)((longlong)
                         &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                          ::__l2::bIsSameType + uVar15) == '\0') &&
             (bVar5 = UMovieGraphValueContainer::GetValueString
                                ((UMovieGraphValueContainer *)this_01,&local_1b8), bVar5)) {
            if ((local_150.Variant.TypeIndex != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            if ((int)local_150.Variant._padding_ == local_1b8.Data.ArrayNum) {
              if (1 < (int)local_150.Variant._padding_) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)local_150.Variant._padding_,
                                   (wchar_t *)local_1b8.Data.AllocatorInstance.Data);
                bVar5 = iVar7 == 0;
                goto LAB_14dd1c201;
              }
            }
            else {
              bVar5 = (int)local_150.Variant._padding_ + local_1b8.Data.ArrayNum == 1;
LAB_14dd1c201:
              if (!bVar5) goto LAB_14dd1c2a8;
            }
            local_210 = *puVar17;
            pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar1 <= (FScriptContainerElement *)&local_210) &&
                ((FScriptContainerElement *)&local_210 <
                 pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            iVar7 = __return_storage_ptr__->ArrayNum;
            if (iVar7 == __return_storage_ptr__->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar7 + 1;
            *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8)
                 = local_210;
          }
        }
LAB_14dd1c2a8:
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        uVar15 = (ulonglong)local_150.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_150);
        pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
        local_1d0 = local_1d0 + 8;
        goto LAB_14dd1bcf0;
      case Text:
        goto switchD_14dd1bdb4_caseD_9;
      case Enum:
        pUVar11 = UMovieGraphValueContainer::GetValueTypeObject
                            ((this_02->SelectOptions).field0_0x0.DebugPtr);
        if (pUVar11 == (UObject *)0x0) {
LAB_14dd1ca1a:
          pUVar11 = (UObject *)0x0;
        }
        else {
          pUVar12 = Z_Construct_UClass_UEnum_NoRegister();
          iVar7 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar12->_padding_)) goto LAB_14dd1ca1a;
        }
        pUVar13 = (UEnum *)UMovieGraphValueContainer::GetValueTypeObject
                                     ((UMovieGraphValueContainer *)this_01);
        if (pUVar13 == (UEnum *)0x0) {
LAB_14dd1ca4f:
          pUVar13 = (UEnum *)0x0;
        }
        else {
          pUVar12 = Z_Construct_UClass_UEnum_NoRegister();
          iVar7 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar12->_padding_)) goto LAB_14dd1ca4f;
        }
        FPropertyBagArrayRef::GetValueEnum(&local_108,(int)&local_244,pUVar14);
        this_02 = local_238;
        if ((pUVar11 != (UObject *)0x0) && (pUVar13 != (UEnum *)0x0)) {
          uVar15 = (ulonglong)local_243;
          if ((2 < uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          this_02 = local_238;
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar15 + 4) != '\0') {
            uVar15 = (ulonglong)local_243;
            if ((2 < uVar15) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            this_02 = local_238;
            if ((*(char *)((longlong)
                           &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                            ::__l2::bIsSameType + uVar15) == '\0') &&
               (bVar5 = UMovieGraphValueContainer::GetValueEnum
                                  ((UMovieGraphValueContainer *)this_01,local_23f,pUVar13),
               this_02 = local_238, bVar5)) {
              if ((local_243 != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              this_02 = local_238;
              if (local_244 == local_23f[0]) {
                local_1e0 = *puVar17;
                pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar1 <= (FScriptContainerElement *)&local_1e0) &&
                    ((FScriptContainerElement *)&local_1e0 <
                     pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar9;
                }
                iVar7 = __return_storage_ptr__->ArrayNum;
                if (iVar7 == __return_storage_ptr__->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar7 + 1;
                *(undefined8 *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                     local_1e0;
                this_02 = local_238;
              }
            }
          }
        }
      }
LAB_14dd1cbfc:
      pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
      local_1d0 = local_1d0 + 8;
      goto LAB_14dd1bcf0;
    }
  }
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return __return_storage_ptr__;
switchD_14dd1bdb4_caseD_9:
  FPropertyBagArrayRef::GetValueText(&local_108,&local_128,uVar16);
  FText::FText(&local_188);
  uVar15 = (ulonglong)local_128.Variant.TypeIndex;
  if ((2 < uVar15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar15) != '\0') {
    uVar15 = (ulonglong)local_128.Variant.TypeIndex;
    if ((2 < uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,FText,TValueOrError<class_FText,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar15) == '\0') &&
       (bVar5 = UMovieGraphValueContainer::GetValueText
                          ((UMovieGraphValueContainer *)this_01,&local_188), bVar5)) {
      if ((local_128.Variant.TypeIndex != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      bVar5 = FText::EqualTo((FText *)&local_128,&local_188,Default);
      if (bVar5) {
        local_1e8 = *puVar17;
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
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
             local_1e8;
      }
    }
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  uVar15 = (ulonglong)local_128.Variant.TypeIndex;
  if ((2 < uVar15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar15])(&local_128);
  pUVar14 = (UEnum *)(ulonglong)(uVar16 + 1);
  local_1d0 = local_1d0 + 8;
  goto LAB_14dd1bcf0;
}

// GetInputPinProperties @ 14dd269e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSelectNode::GetInputPinProperties
          (UMovieGraphSelectNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  EMovieGraphValueType EVar4;
  int iVar5;
  int iVar6;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar7;
  UEnum *this_00;
  UClass *pUVar8;
  FString *pFVar9;
  UEnum *pUVar10;
  FName FVar11;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  undefined1 auStack_398 [32];
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  *local_378;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 local_358;
  char local_348;
  byte local_347;
  undefined1 local_346;
  byte local_345;
  byte local_344;
  byte local_343;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_340;
  FName local_330;
  undefined4 local_328;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_320;
  FName local_310;
  undefined4 local_308;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_300;
  FName local_2f0;
  undefined4 local_2e8;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_2e0;
  FName local_2d0;
  undefined4 local_2c8;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_2c0;
  FName local_2b0;
  undefined4 local_2a8;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_2a0;
  FName local_290;
  undefined4 local_288;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_280;
  FName local_270;
  undefined4 local_268;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_260;
  FName local_250;
  undefined4 local_248;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_240;
  UObject *local_230;
  undefined4 local_228;
  TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
  local_220;
  FName local_210;
  undefined4 local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  undefined1 local_168 [4];
  byte local_164;
  TValueOrError<FName,EPropertyBagResult> local_160;
  TValueOrError<FString,EPropertyBagResult> local_150;
  TValueOrError<FText,EPropertyBagResult> local_138;
  TValueOrError<__int64,EPropertyBagResult> local_120;
  FPropertyBagArrayRef local_108;
  undefined1 local_a8 [67];
  uchar local_65;
  ulong64 local_60;
  FProperty *local_58;
  int local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_398;
  pUVar10 = (UEnum *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UMovieGraphValueContainer::GetArrayRef
            ((this->SelectOptions).field0_0x0.DebugPtr,
             (TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *)local_a8);
  uVar15 = (ulonglong)local_48;
  if ((2 < uVar15) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar7;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar15 + 4) != '\0') {
    uVar15 = (ulonglong)local_48;
    if ((2 < uVar15) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar15) == '\0') {
      if ((local_48 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      local_108.ValueDesc.ValueTypeObject.field0_0x0.DebugPtr =
           (TObjectPtr<UObject_const_>_u_0)local_a8._32_8_;
      local_108._padding_ = local_a8._0_8_;
      local_108._padding_ = local_a8._8_8_;
      local_108._padding_ = local_a8._16_8_;
      local_108._padding_ = local_a8._24_8_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_a8._32_8_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a8._32_8_);
      }
      local_108.ValueDesc.Name.ComparisonIndex.Value = local_a8._56_4_;
      local_108.ValueDesc.Name.Number = local_a8._60_4_;
      local_108.ValueDesc.ValueType = local_a8[0x40];
      local_108.ValueDesc.ContainerTypes.Types.Elements[0] = local_a8[0x41];
      local_108.ValueDesc.ContainerTypes.Types.Elements[1] = local_a8[0x42];
      local_108.ValueDesc.ContainerTypes.NumContainers = local_65;
      local_108.ValueDesc.PropertyFlags = local_60;
      local_108.ValueDesc.CachedProperty = local_58;
      local_108.ValueDesc.CachedIndex = local_50;
      local_108.ValueDesc.ID.A = local_a8._40_4_;
      local_108.ValueDesc.ID.B = local_a8._44_4_;
      local_108.ValueDesc.ID.C = local_a8._48_4_;
      local_108.ValueDesc.ID.D = local_a8._52_4_;
LAB_14dd26ba0:
      iVar6 = (int)pUVar10;
      if (*(int *)(local_108._padding_ + 8) <= iVar6) {
        pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                  *)(__return_storage_ptr__->AllocatorInstance).Data;
        local_2a0._0_4_ = UE::MovieGraph::SelectNode::DefaultBranch.ComparisonIndex.Value;
        local_2a0._4_4_ = UE::MovieGraph::SelectNode::DefaultBranch.Number;
        local_2a0.TypeIndex = '\0';
        local_290.ComparisonIndex.Value = 0;
        local_290.Number = 0;
        local_288 = 0x1000100;
        if ((pTVar1 <= &local_2a0) &&
           (&local_2a0 <
            (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
             *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
          local_360 = (longlong)__return_storage_ptr__->ArrayNum;
          local_358 = 0x20;
          local_378 = &local_2a0;
          local_370 = pTVar1;
          local_368 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                           (longlong)iVar6 * 0x20);
        pFVar17->ComparisonIndex = (FNameEntryId)local_2a0._0_4_;
        pFVar17->Number = local_2a0._4_4_;
        *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_2a0.TypeIndex;
        pFVar17[2] = local_290;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_290);
        }
        *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_288;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_288._1_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_288._2_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_288._3_1_;
        FVar11 = (FName)UMovieGraphValueContainer::GetValueTypeObject
                                  ((this->SelectOptions).field0_0x0.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar11);
        }
        local_2c0.TypeIndex =
             UMovieGraphValueContainer::GetValueType((this->SelectOptions).field0_0x0.DebugPtr);
        local_2c0._0_4_ = UE::MovieGraph::SelectNode::SelectedOption.ComparisonIndex.Value;
        local_2c0._4_4_ = UE::MovieGraph::SelectNode::SelectedOption.Number;
        local_2b0 = FVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar11);
        }
        pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                  *)(__return_storage_ptr__->AllocatorInstance).Data;
        local_2a8 = 0x1000000;
        if ((pTVar1 <= &local_2c0) &&
           (&local_2c0 <
            (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
             *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
          local_360 = (longlong)__return_storage_ptr__->ArrayNum;
          local_358 = 0x20;
          local_378 = &local_2c0;
          local_370 = pTVar1;
          local_368 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                           (longlong)iVar6 * 0x20);
        pFVar17->ComparisonIndex = (FNameEntryId)local_2c0._0_4_;
        pFVar17->Number = local_2c0._4_4_;
        *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_2c0.TypeIndex;
        pFVar17[2] = local_2b0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b0 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_2b0);
        }
        *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_2a8;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_2a8._1_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_2a8._2_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_2a8._3_1_;
        return __return_storage_ptr__;
      }
      EVar4 = UMovieGraphValueContainer::GetValueType((this->SelectOptions).field0_0x0.DebugPtr);
      iVar5 = 0;
      switch(EVar4) {
      case Bool:
        FPropertyBagArrayRef::GetValueBool(&local_108,(int)&local_348);
        uVar15 = (ulonglong)local_347;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          if ((local_347 != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          pwVar14 = L"true";
          if (local_348 == '\0') {
            pwVar14 = L"false";
          }
          ::FString::FString(&local_200,pwVar14);
          if (local_200.Data.ArrayNum != 0) {
            iVar5 = local_200.Data.ArrayNum + -1;
          }
          pFVar17 = ::FName::FName(&local_170,iVar5,(wchar_t *)local_200.Data.AllocatorInstance.Data
                                   ,FNAME_Add);
          local_2e0._0_8_ = *pFVar17;
          local_2e0.TypeIndex = '\0';
          local_2d0.ComparisonIndex.Value = 0;
          local_2d0.Number = 0;
          local_2c8 = 0x1000100;
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_2c8 = local_2c8 & 0xffffff;
          if ((pTVar1 <= &local_2e0) &&
             (&local_2e0 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_2e0;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_2e0._0_4_;
          pFVar17->Number = local_2e0._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_2e0.TypeIndex;
          pFVar17[2] = local_2d0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2d0 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_2d0);
          }
          pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_2c8;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_2c8._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_2c8._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_2c8._3_1_;
          goto LAB_14dd26ba0;
        }
        break;
      case Byte:
        FPropertyBagArrayRef::GetValueByte(&local_108,(int)&local_346);
        uVar15 = (ulonglong)local_345;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          if ((local_345 != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          ::FString::PrintfImpl(&local_1f0,L"%u");
          iVar12 = local_1f0.Data.ArrayNum + -1;
          if (local_1f0.Data.ArrayNum == 0) {
            iVar12 = iVar5;
          }
          pFVar17 = ::FName::FName(&local_178,iVar12,
                                   (wchar_t *)local_1f0.Data.AllocatorInstance.Data,FNAME_Add);
          local_300._0_8_ = *pFVar17;
          local_300.TypeIndex = '\0';
          local_2f0.ComparisonIndex.Value = 0;
          local_2f0.Number = 0;
          local_2e8 = 0x1000100;
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_2e8 = local_2e8 & 0xffffff;
          if ((pTVar1 <= &local_300) &&
             (&local_300 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_300;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_300._0_4_;
          pFVar17->Number = local_300._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_300.TypeIndex;
          pFVar17[2] = local_2f0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f0 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_2f0);
          }
          pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_2e8;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_2e8._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_2e8._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_2e8._3_1_;
          goto LAB_14dd26ba0;
        }
        break;
      case Int32:
        FPropertyBagArrayRef::GetValueInt32(&local_108,(int)local_168);
        uVar15 = (ulonglong)local_164;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          if ((local_164 != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          ::FString::PrintfImpl(&local_1e0,L"%d");
          iVar12 = local_1e0.Data.ArrayNum + -1;
          if (local_1e0.Data.ArrayNum == 0) {
            iVar12 = iVar5;
          }
          pFVar17 = ::FName::FName(&local_188,iVar12,
                                   (wchar_t *)local_1e0.Data.AllocatorInstance.Data,FNAME_Add);
          local_320._0_8_ = *pFVar17;
          local_320.TypeIndex = '\0';
          local_310.ComparisonIndex.Value = 0;
          local_310.Number = 0;
          local_308 = 0x1000100;
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_308 = local_308 & 0xffffff;
          if ((pTVar1 <= &local_320) &&
             (&local_320 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_320;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_320._0_4_;
          pFVar17->Number = local_320._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_320.TypeIndex;
          pFVar17[2] = local_310;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_310 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_310);
          }
          pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_308;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_308._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_308._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_308._3_1_;
          goto LAB_14dd26ba0;
        }
        break;
      case Int64:
        FPropertyBagArrayRef::GetValueInt64(&local_108,&local_120,iVar6);
        uVar15 = (ulonglong)local_120.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          if ((local_120.Variant.TypeIndex != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          ::FString::PrintfImpl(&local_1d0,L"%lld");
          iVar12 = local_1d0.Data.ArrayNum + -1;
          if (local_1d0.Data.ArrayNum == 0) {
            iVar12 = iVar5;
          }
          pFVar17 = ::FName::FName(&local_190,iVar12,
                                   (wchar_t *)local_1d0.Data.AllocatorInstance.Data,FNAME_Add);
          local_340._0_8_ = *pFVar17;
          local_340.TypeIndex = '\0';
          local_330.ComparisonIndex.Value = 0;
          local_330.Number = 0;
          local_328 = 0x1000100;
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_328 = local_328 & 0xffffff;
          if ((pTVar1 <= &local_340) &&
             (&local_340 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_340;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_340._0_4_;
          pFVar17->Number = local_340._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_340.TypeIndex;
          pFVar17[2] = local_330;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_330);
          }
          pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_328;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_328._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_328._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_328._3_1_;
          goto LAB_14dd26ba0;
        }
        break;
      default:
        pUVar10 = StaticEnum<enum_EMovieGraphValueType>();
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          UEnum::GetNameStringByValue(pUVar10,&local_1b0,(ulonglong)EVar4);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
            goto LAB_14dd26ba0;
          }
        }
        break;
      case Name:
        FPropertyBagArrayRef::GetValueName(&local_108,&local_160,iVar6);
        uVar15 = (ulonglong)local_160.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          if ((local_160.Variant.TypeIndex != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_240._0_8_ = local_160.Variant._0_8_;
          local_240.TypeIndex = '\0';
          local_230 = (UObject *)0x0;
          local_228 = 0x100;
          if ((pTVar1 <= &local_240) &&
             (&local_240 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_240;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
          *(undefined8 *)pFVar16 = local_240._0_8_;
          pFVar16[8] = (FScriptContainerElement)local_240.TypeIndex;
          *(UObject **)(pFVar16 + 0x10) = local_230;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_230);
          }
          pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
          pFVar16[0x18] = local_228._0_1_;
          pFVar16[0x19] = local_228._1_1_;
          pFVar16[0x1a] = local_228._2_1_;
          pFVar16[0x1b] = local_228._3_1_;
          goto LAB_14dd26ba0;
        }
        break;
      case String:
        FPropertyBagArrayRef::GetValueString(&local_108,&local_150,iVar6);
        uVar15 = (ulonglong)local_150.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) != '\0') {
          if ((local_150.Variant.TypeIndex != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          iVar12 = (int)local_150.Variant._padding_ + -1;
          if ((int)local_150.Variant._padding_ == 0) {
            iVar12 = iVar5;
          }
          pFVar17 = ::FName::FName(&local_180,iVar12,(wchar_t *)local_150.Variant._padding_,
                                   FNAME_Add);
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_220._0_8_ = *pFVar17;
          local_220.TypeIndex = '\0';
          local_210.ComparisonIndex.Value = 0;
          local_210.Number = 0;
          local_208 = 0x100;
          if ((pTVar1 <= &local_220) &&
             (&local_220 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_220;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_220._0_4_;
          pFVar17->Number = local_220._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_220.TypeIndex;
          pFVar17[2] = local_210;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_210);
          }
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_208;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_208._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_208._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_208._3_1_;
        }
        uVar15 = (ulonglong)local_150.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_150);
        pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
        goto LAB_14dd26ba0;
      case Text:
        FPropertyBagArrayRef::GetValueText(&local_108,&local_138,iVar6);
        uVar15 = (ulonglong)local_138.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15) != '\0') {
          if ((local_138.Variant.TypeIndex != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          pFVar9 = FText::ToString((FText *)&local_138);
          iVar12 = (pFVar9->Data).ArrayNum;
          iVar13 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar13 = iVar5;
          }
          pFVar17 = ::FName::FName(&local_198,iVar13,
                                   (wchar_t *)(pFVar9->Data).AllocatorInstance.Data,FNAME_Add);
          pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                    *)(__return_storage_ptr__->AllocatorInstance).Data;
          local_260._0_8_ = *pFVar17;
          local_260.TypeIndex = '\0';
          local_250.ComparisonIndex.Value = 0;
          local_250.Number = 0;
          local_248 = 0x100;
          if ((pTVar1 <= &local_260) &&
             (&local_260 <
              (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
               *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
            local_360 = (longlong)__return_storage_ptr__->ArrayNum;
            local_358 = 0x20;
            local_378 = &local_260;
            local_370 = pTVar1;
            local_368 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                             (longlong)iVar5 * 0x20);
          pFVar17->ComparisonIndex = (FNameEntryId)local_260._0_4_;
          pFVar17->Number = local_260._4_4_;
          *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_260.TypeIndex;
          pFVar17[2] = local_250;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_250 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_250);
          }
          *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_248;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_248._1_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_248._2_1_;
          *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_248._3_1_;
        }
        uVar15 = (ulonglong)local_138.Variant.TypeIndex;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_138);
        pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
        goto LAB_14dd26ba0;
      case Enum:
        this_00 = (UEnum *)UMovieGraphValueContainer::GetValueTypeObject
                                     ((this->SelectOptions).field0_0x0.DebugPtr);
        if (this_00 == (UEnum *)0x0) {
LAB_14dd27925:
          this_00 = (UEnum *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
          iVar5 = (int)pUVar8->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar8->_padding_)) goto LAB_14dd27925;
        }
        FPropertyBagArrayRef::GetValueEnum(&local_108,(int)&local_344,pUVar10);
        uVar15 = (ulonglong)local_343;
        if ((2 < uVar15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar15 + 4) == '\0') break;
        if ((local_343 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        UEnum::GetDisplayNameTextByValue(this_00,&local_1c0,(ulonglong)local_344);
        pFVar9 = FText::ToString(&local_1c0);
        iVar12 = (pFVar9->Data).ArrayNum;
        iVar5 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar5 = 0;
        }
        pFVar17 = ::FName::FName(&local_1a0,iVar5,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                                 FNAME_Add);
        pTVar1 = (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
                  *)(__return_storage_ptr__->AllocatorInstance).Data;
        local_280._0_8_ = *pFVar17;
        local_280.TypeIndex = '\0';
        local_270.ComparisonIndex.Value = 0;
        local_270.Number = 0;
        local_268 = 0x100;
        if ((pTVar1 <= &local_280) &&
           (&local_280 <
            (TVariant<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,EPropertyBagResult>::FEmptyType>
             *)((longlong)pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x20))) {
          local_360 = (longlong)__return_storage_ptr__->ArrayNum;
          local_358 = 0x20;
          local_378 = &local_280;
          local_370 = pTVar1;
          local_368 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar17 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                           (longlong)iVar5 * 0x20);
        pFVar17->ComparisonIndex = (FNameEntryId)local_280._0_4_;
        pFVar17->Number = local_280._4_4_;
        *(uchar *)&pFVar17[1].ComparisonIndex.Value = local_280.TypeIndex;
        pFVar17[2] = local_270;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_270);
        }
        *(undefined1 *)&pFVar17[3].ComparisonIndex.Value = (undefined1)local_268;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 1) = local_268._1_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 2) = local_268._2_1_;
        *(undefined1 *)((longlong)&pFVar17[3].ComparisonIndex.Value + 3) = local_268._3_1_;
        if (local_1c0.TextData.Reference == (ITextData *)0x0) break;
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
        pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
        goto LAB_14dd26ba0;
      }
      pUVar10 = (UEnum *)(ulonglong)(iVar6 + 1);
      goto LAB_14dd26ba0;
    }
  }
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dd2b030

/* WARNING: Removing unreachable block (ram,0x00014dd2b0ab) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSelectNode::GetOutputPinProperties
          (UMovieGraphSelectNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d1a0

UClass * __cdecl UMovieGraphSelectNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSelectNode",
               &Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSelectNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphSelectNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSelectNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSelectNode.InnerSingleton;
}

// GetValueType @ 14dd319b0

EMovieGraphValueType __thiscall UMovieGraphSelectNode::GetValueType(UMovieGraphSelectNode *this)

{
  EMovieGraphValueType EVar1;
  
  EVar1 = UMovieGraphValueContainer::GetValueType((this->SelectOptions).field0_0x0.DebugPtr);
  return EVar1;
}

// GetValueTypeObject @ 14dd31a90

UObject * __thiscall UMovieGraphSelectNode::GetValueTypeObject(UMovieGraphSelectNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = UMovieGraphValueContainer::GetValueTypeObject((this->SelectOptions).field0_0x0.DebugPtr);
  return pUVar1;
}

// SetDataType @ 14dd401a0

void __thiscall
UMovieGraphSelectNode::SetDataType
          (UMovieGraphSelectNode *this,EMovieGraphValueType param_1,UObject *param_2)

{
  UMovieGraphValueContainer::SetValueType((this->SelectOptions).field0_0x0.DebugPtr,param_1,param_2)
  ;
  UMovieGraphValueContainer::SetValueType
            ((this->SelectedOption).field0_0x0.DebugPtr,param_1,param_2);
  UMovieGraphNode::UpdatePins((UMovieGraphNode *)this);
  return;
}

// StaticRegisterNativesUMovieGraphSelectNode @ 14dd453b0

void __cdecl UMovieGraphSelectNode::StaticRegisterNativesUMovieGraphSelectNode(void)

{
  return;
}

// operator() @ 15058ddb0

bool __thiscall
`UMovieGraphSelectNode::EvaluatePinsToFollow'::__l44::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4026869497443909858>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4026869497443909858>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

