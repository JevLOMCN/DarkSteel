// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 62

// CanBeAddedByUser @ 14dc78460

bool __thiscall UMovieGraphNode::CanBeAddedByUser(UMovieGraphNode *this)

{
  return true;
}

// GetBranchRestriction @ 14dc7f380

EMovieGraphBranchRestriction __thiscall UMovieGraphNode::GetBranchRestriction(UMovieGraphNode *this)

{
  return Any;
}

// GetDynamicPropertyDescriptions @ 14dc80190

TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetDynamicPropertyDescriptions
          (UMovieGraphNode *this,
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetExposedProperties @ 14dc80400

TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetExposedProperties
          (UMovieGraphNode *this,
          TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FMovieGraphPropertyInfo *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ExposedPropertyInfo).ArrayNum;
  pFVar2 = (FMovieGraphPropertyInfo *)(this->ExposedPropertyInfo).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FMovieGraphPropertyInfo,FMovieGraphPropertyInfo,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetPropertyValueContainerForPin @ 14dc82ad0

UMovieGraphValueContainer * __thiscall
UMovieGraphNode::GetPropertyValueContainerForPin(UMovieGraphNode *this,FString *param_1)

{
  return (UMovieGraphValueContainer *)0x0;
}

// GetResolvedValueForOutputPin @ 14dc82b40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphNode::GetResolvedValueForOutputPin
          (UMovieGraphNode *this,FString *__return_storage_ptr__,FName *param_1,
          FMovieGraphTraversalContext *param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetResolvedValueForOutputPin @ 14dc82b60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphNode::GetResolvedValueForOutputPin
          (UMovieGraphNode *this,FName *param_1,FMovieGraphTraversalContext *param_2,
          TObjectPtr<UMovieGraphValueContainer> *param_3)

{
  return false;
}

// RegisterDelegates @ 14dc855d0

void __thiscall UMovieGraphNode::RegisterDelegates(UMovieGraphNode *this)

{
  return;
}

// StaticClass @ 14dc9bd50

UClass * __cdecl UMovieGraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphNode",
               &Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphNode,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphNode>,
               InternalVTableHelperCtorCaller<UMovieGraphNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton;
}

// UMovieGraphNode @ 14dcb00d0

UMovieGraphNode * __thiscall
UMovieGraphNode::UMovieGraphNode(UMovieGraphNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphNode__6B_;
  *(undefined8 *)&this->OnNodeChangedDelegate = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x18 = 2;
  (this->ScriptTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptTags).ArrayNum = 0;
  (this->ScriptTags).ArrayMax = 0;
  (this->InputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPins).ArrayNum = 0;
  (this->InputPins).ArrayMax = 0;
  (this->OutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 0;
  (this->OutputPins).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DynamicProperties).Value);
  (this->ExposedPropertyInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedPropertyInfo).ArrayNum = 0;
  (this->ExposedPropertyInfo).ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UMovieGraphNode @ 14dcb0160

UMovieGraphNode * __thiscall UMovieGraphNode::UMovieGraphNode(UMovieGraphNode *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieGraphNode__6B_;
  *(undefined8 *)&this->OnNodeChangedDelegate = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeChangedDelegate).field_0x18 = 2;
  (this->ScriptTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptTags).ArrayNum = 0;
  (this->ScriptTags).ArrayMax = 0;
  (this->InputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPins).ArrayNum = 0;
  (this->InputPins).ArrayMax = 0;
  (this->OutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 0;
  (this->OutputPins).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DynamicProperties).Value);
  (this->ExposedPropertyInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedPropertyInfo).ArrayNum = 0;
  (this->ExposedPropertyInfo).ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UMovieGraphNode @ 14dcb2ee0

void __thiscall UMovieGraphNode::~UMovieGraphNode(UMovieGraphNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphNode__6B_;
  DestructItems<FMovieGraphPropertyInfo,int>
            ((FMovieGraphPropertyInfo *)(this->ExposedPropertyInfo).AllocatorInstance.Data,
             (this->ExposedPropertyInfo).ArrayNum);
  pFVar1 = (this->ExposedPropertyInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->DynamicProperties).Value);
  pFVar1 = (this->OutputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ScriptTags).AllocatorInstance.Data,(this->ScriptTags).ArrayNum);
  pFVar1 = (this->ScriptTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeChangedDelegate).field_0x8,
             *(int *)&(this->OnNodeChangedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnNodeChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeChangedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dcb5d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UMovieGraphNode::UpdatePins'::__l2::<lambda_1>::operator()
          (void *this,TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  UObject *pUVar4;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [6];
  ForAnyElementType local_120;
  undefined8 local_118;
  ForAnyElementType local_110;
  int local_108;
  int iStack_104;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *local_100;
  longlong local_f8;
  UObject *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar19 = (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  pFVar21 = pFVar19 + (longlong)iVar15 * 8;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  iStack_104 = 0;
  local_100 = param_2;
  local_e0 = this;
  local_d0 = param_1;
LAB_14dcb5d87:
  do {
    if (param_1->ArrayNum != iVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<UMovieGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    pFVar17 = (param_2->AllocatorInstance).Data;
    if (pFVar19 == pFVar21) {
      iVar15 = param_2->ArrayNum;
      iVar7 = 0;
      local_120.Data = (FScriptContainerElement *)0x0;
      pFVar21 = pFVar17 + (longlong)iVar15 * 0x20;
      local_118 = 0;
      do {
        if (param_2->ArrayNum != iVar15) {
          local_127 = 0;
          `TCheckedPointerIterator<FMovieGraphPinProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_127);
          iVar7 = (int)local_118;
        }
        if (pFVar17 == pFVar21) {
          if ((local_108 != 0) || (iVar15 = 0, iVar7 != 0)) {
            **(undefined1 **)((longlong)this + 8) = 1;
            iVar15 = (int)local_118;
          }
          uVar18 = local_108 - 1;
          if (-1 < (int)uVar18) {
            lVar13 = (longlong)(int)uVar18 * 8;
            do {
              uVar16 = 0;
              if ((int)uVar18 < local_108) {
                uVar16 = ~uVar18 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar21 = (param_1->AllocatorInstance).Data;
              if (pFVar21 != pFVar21 + (longlong)param_1->ArrayNum * 8) {
                pFVar19 = pFVar21;
                do {
                  if (*(longlong *)pFVar19 == *(longlong *)(local_110.Data + lVar13)) {
                    uVar16 = (uint)((longlong)pFVar19 - (longlong)pFVar21 >> 3);
                    if ((int)uVar16 < 0) goto LAB_14dcb613a;
                    goto LAB_14dcb6160;
                  }
                  pFVar19 = pFVar19 + 8;
                } while (pFVar19 != pFVar21 + (longlong)param_1->ArrayNum * 8);
              }
              uVar16 = 0xffffffff;
LAB_14dcb613a:
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("PinIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphNode.cpp"
                                 ,0x11e,L"");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
LAB_14dcb6160:
              uVar8 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar21 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8;
              iVar15 = param_1->ArrayNum + ~uVar16;
              if (iVar15 != 0) {
                memmove(pFVar21,pFVar21 + 8,(longlong)iVar15 << 3);
              }
              param_1->ArrayNum = param_1->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
              lVar13 = lVar13 + -8;
              uVar18 = uVar18 - 1;
            } while (-1 < (int)uVar18);
            param_2 = local_100;
            iVar15 = (int)local_118;
          }
          pFVar19 = local_120.Data + (longlong)iVar15 * 0x20;
          pFVar21 = local_120.Data + 0x10;
          iVar7 = iVar15;
          do {
            if (iVar7 != iVar15) {
              local_126[0] = 0;
              `TCheckedPointerIterator<FMovieGraphPinProperties,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_126);
            }
            pFVar17 = pFVar21 + -0x10;
            if (pFVar17 == pFVar19) {
              if (local_120.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data);
              }
              if (local_110.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data);
              }
              return;
            }
            pFVar10 = (param_2->AllocatorInstance).Data;
            if (pFVar10 != pFVar10 + (longlong)local_100->ArrayNum * 0x20) {
              pFVar20 = pFVar10;
              do {
                if ((((*(longlong *)pFVar20 == *(longlong *)pFVar17) && (pFVar20[8] == pFVar21[-8]))
                    && (*(longlong *)(pFVar20 + 0x10) == *(longlong *)pFVar21)) &&
                   (((pFVar20[0x18] == pFVar21[8] && (pFVar20[0x19] == pFVar21[9])) &&
                    (pFVar20[0x1b] == pFVar21[0xb])))) {
                  iVar7 = (int)((longlong)pFVar20 - (longlong)pFVar10 >> 5);
                  goto LAB_14dcb62b6;
                }
                pFVar20 = pFVar20 + 0x20;
              } while (pFVar20 != pFVar10 + (longlong)local_100->ArrayNum * 0x20);
            }
            iVar7 = -1;
LAB_14dcb62b6:
            local_e8 = 0;
            pUVar12 = (UObject *)*local_e0;
            FObjectInitializer::AssertIfInConstructor
                      (pUVar12,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar11 = UMovieGraphPin::StaticClass();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar11);
            local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_c8._56_8_ = (UPackage *)0x0;
            local_c8._16_4_ = 0;
            local_c8._20_4_ = 0;
            local_c8._24_4_ = RF_Transactional;
            local_c8._40_8_ = (UObject *)0x0;
            local_c8[0x20] = false;
            local_c8._8_8_ = pUVar12;
            pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            if (local_c8._64_8_ != 0) {
              plVar14 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar14 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            pUVar2 = (UObject *)*local_e0;
            local_f0 = pUVar12;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar2);
            }
            pUVar4 = local_f0;
            *(UObject **)(pUVar12 + 1) = pUVar2;
            *(longlong *)&local_f0[1].field_0x8 = *(longlong *)pFVar17;
            local_f0[1].field_0x10 = pFVar21[-8];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)pFVar21 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)pFVar21);
            }
            pTVar5 = local_d0;
            *(longlong *)&pUVar4[1].field_0x18 = *(longlong *)pFVar21;
            pUVar4[1].field_0x20 = pFVar21[8];
            pUVar4[1].field_0x21 = pFVar21[9];
            pUVar4[1].field_0x22 = pFVar21[10];
            pUVar4[1].field_0x23 = pFVar21[0xb];
            pFVar17 = (local_d0->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_f0) &&
                ((FScriptContainerElement *)&local_f0 < pFVar17 + (longlong)local_d0->ArrayMax * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = pTVar5->ArrayNum;
            if (iVar9 == pTVar5->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
            }
            pFVar17 = (pTVar5->AllocatorInstance).Data;
            pTVar5->ArrayNum = iVar9 + 1;
            pFVar17 = pFVar17 + (longlong)iVar7 * 8;
            memmove(pFVar17 + 8,pFVar17,(longlong)(iVar9 - iVar7) << 3);
            pFVar21 = pFVar21 + 0x20;
            *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_f0;
            param_2 = local_100;
            iVar7 = (int)local_118;
          } while( true );
        }
        pFVar10 = (param_1->AllocatorInstance).Data;
        pFVar19 = pFVar10 + (longlong)param_1->ArrayNum * 8;
        if (pFVar10 != pFVar19) {
          do {
            if (*(longlong *)(*(longlong *)pFVar10 + 0x30) == *(longlong *)pFVar17)
            goto LAB_14dcb607a;
            pFVar10 = pFVar10 + 8;
          } while (pFVar10 != pFVar19);
        }
        if ((local_120.Data <= pFVar17) &&
           (pFVar17 < local_120.Data + (longlong)local_118._4_4_ * 0x20)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)local_118;
        }
        if (iVar7 == local_118._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_120,(int *)((longlong)&local_118 + 4));
        }
        local_118 = CONCAT44(local_118._4_4_,iVar7 + 1);
        pFVar19 = local_120.Data + (longlong)iVar7 * 0x20;
        *(longlong *)pFVar19 = *(longlong *)pFVar17;
        pFVar19[8] = pFVar17[8];
        pUVar12 = *(UObject **)(pFVar17 + 0x10);
        *(UObject **)(pFVar19 + 0x10) = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        pFVar19[0x18] = pFVar17[0x18];
        pFVar19[0x19] = pFVar17[0x19];
        pFVar19[0x1a] = pFVar17[0x1a];
        pFVar19[0x1b] = pFVar17[0x1b];
        param_2 = local_100;
        iVar7 = (int)local_118;
LAB_14dcb607a:
        pFVar17 = pFVar17 + 0x20;
      } while( true );
    }
    lVar13 = *(longlong *)pFVar19;
    pFVar10 = pFVar17 + (longlong)param_2->ArrayNum * 0x20;
    local_f8 = lVar13;
    if (pFVar17 != pFVar10) {
      do {
        lVar1 = *(longlong *)pFVar17;
        if (lVar1 == *(longlong *)(lVar13 + 0x30)) {
          if (((((*(longlong *)(lVar13 + 0x30) != lVar1) ||
                (*(FScriptContainerElement *)(lVar13 + 0x38) != pFVar17[8])) ||
               (*(longlong *)(lVar13 + 0x40) != *(longlong *)(pFVar17 + 0x10))) ||
              ((*(FScriptContainerElement *)(lVar13 + 0x48) != pFVar17[0x18] ||
               (*(FScriptContainerElement *)(lVar13 + 0x49) != pFVar17[0x19])))) ||
             (*(FScriptContainerElement *)(lVar13 + 0x4b) != pFVar17[0x1b])) {
            *(longlong *)(lVar13 + 0x30) = lVar1;
            *(FScriptContainerElement *)(lVar13 + 0x38) = pFVar17[8];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)(pFVar17 + 0x10) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)(pFVar17 + 0x10));
            }
            *(longlong *)(lVar13 + 0x40) = *(longlong *)(pFVar17 + 0x10);
            *(FScriptContainerElement *)(lVar13 + 0x48) = pFVar17[0x18];
            *(FScriptContainerElement *)(lVar13 + 0x49) = pFVar17[0x19];
            *(FScriptContainerElement *)(lVar13 + 0x4a) = pFVar17[0x1a];
            *(FScriptContainerElement *)(lVar13 + 0x4b) = pFVar17[0x1b];
            **(undefined1 **)((longlong)this + 8) = 1;
          }
          pFVar19 = pFVar19 + 8;
          param_2 = local_100;
          goto LAB_14dcb5d87;
        }
        pFVar17 = pFVar17 + 0x20;
      } while (pFVar17 != pFVar10);
    }
    if (((local_110.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < local_110.Data + (longlong)iStack_104 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_108 == iStack_104) {
      local_108 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_110,&iStack_104);
    }
    lVar13 = (longlong)local_108;
    pFVar19 = pFVar19 + 8;
    local_108 = local_108 + 1;
    *(longlong *)(local_110.Data + lVar13 * 8) = local_f8;
  } while( true );
}

// CanBeDisabled @ 14dcbe3c0

bool __thiscall UMovieGraphNode::CanBeDisabled(UMovieGraphNode *this)

{
  return true;
}

// EvaluatePinsToFollow @ 14dcc65d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::EvaluatePinsToFollow
          (UMovieGraphNode *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieGraphEvaluationContext *param_1)

{
  UMovieGraphPin *pUVar1;
  UMovieGraphNode *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  UMovieGraphPin *local_38;
  UMovieGraphPin *local_30;
  longlong local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar1 = (param_1->PinBeingFollowed).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieGraphPin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6837426427281800619>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphNode.cpp"
                       ,0x255,"InContext.PinBeingFollowed");
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  if (this->bIsDisabled == 0) {
    if ((pUVar1->Properties).bIsBranch != false) {
      pFVar9 = (this->InputPins).AllocatorInstance.Data;
      iVar5 = (this->InputPins).ArrayNum;
      pFVar8 = pFVar9 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->InputPins).ArrayNum != iVar5) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UMovieGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar9 == pFVar8) break;
        local_28[0] = *(longlong *)pFVar9;
        if (*(char *)(local_28[0] + 0x49) != '\0') {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
               local_28[0];
        }
        pFVar9 = pFVar9 + 8;
      }
      return __return_storage_ptr__;
    }
  }
  else if ((pUVar1->Properties).bIsBranch != false) {
    local_38 = GetFirstConnectedInputPin(this);
    if (local_38 == (UMovieGraphPin *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    goto LAB_14dcc66fd;
  }
  this_00 = (pUVar1->Node).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UMovieGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  bVar4 = UMovieGraphPin::IsInputPin((param_1->PinBeingFollowed).field0_0x0.DebugPtr);
  if (!bVar4) {
    if (this_00 == (UMovieGraphNode *)0x0) {
      return __return_storage_ptr__;
    }
    bVar4 = UObjectBaseUtility::IsA<UMovieGraphRerouteNode>((UObjectBaseUtility *)this_00);
    if (!bVar4) {
      return __return_storage_ptr__;
    }
  }
  local_30 = UMovieGraphPin::GetFirstConnectedPin
                       ((param_1->PinBeingFollowed).field0_0x0.DebugPtr,true);
  if (local_30 == (UMovieGraphPin *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_30) &&
      ((FScriptContainerElement *)&local_30 <
       pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_38 = local_30;
LAB_14dcc66fd:
  *(UMovieGraphPin **)(pFVar8 + (longlong)iVar5 * 8) = local_38;
  return __return_storage_ptr__;
}

// FindOverridePropertyForDynamicProperty @ 14dcc87c0

FBoolProperty * __thiscall
UMovieGraphNode::FindOverridePropertyForDynamicProperty(UMovieGraphNode *this,FName *param_1)

{
  FBoolProperty *pFVar1;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  FBoolProperty *pFVar5;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  ::FString::PrintfImpl(&local_28,L"bOverride_%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar5 = (FBoolProperty *)0x0;
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->DynamicProperties,*pFVar2);
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (pFVar1 = (FBoolProperty *)pFVar3->CachedProperty, pFVar1 != (FBoolProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    pFVar5 = pFVar1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar5;
}

// GetAllOverrideableProperties @ 14dcca780

TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetAllOverrideableProperties
          (UMovieGraphNode *this,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FBoolProperty *pFVar8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UPropertyBag *pUVar10;
  FScriptContainerElement *pFVar11;
  FProperty *local_28;
  TFieldIterator<FProperty> local_20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_20.Struct = (UStruct *)this->_padding_;
  if (local_20.Struct == (UStruct *)0x0) {
    local_20.Field = (FField *)0x0;
  }
  else {
    local_20.Field = (local_20.Struct)->ChildProperties;
  }
  local_20.bIncludeInterface = false;
  local_20.InterfaceIndex = -1;
  local_20.bIncludeSuper = true;
  local_20.bIncludeDeprecated = true;
  TFieldIterator<FProperty>::IterateToNext(&local_20);
  pFVar4 = (FProperty *)local_20.Field;
  while (local_20.Field = (FField *)pFVar4, pFVar4 != (FProperty *)0x0) {
    pFVar8 = UMovieGraphConfig::FindOverridePropertyForRealProperty
                       ((UClass *)this->_padding_,pFVar4);
    if (pFVar8 != (FBoolProperty *)0x0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_28 = pFVar4;
      if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(FProperty **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_28;
    }
    local_20.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_20);
    pFVar4 = (FProperty *)local_20.Field;
  }
  pUVar10 = FInstancedPropertyBag::GetPropertyBagStruct(&this->DynamicProperties);
  if (pUVar10 != (UPropertyBag *)0x0) {
    pFVar1 = (pUVar10->PropertyDescs).AllocatorInstance.Data;
    iVar6 = (pUVar10->PropertyDescs).ArrayNum;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    if (pFVar1 != pFVar1 + (longlong)iVar6 * 0x40) {
      pFVar11 = pFVar1 + 0x30;
      do {
        pFVar8 = FindOverridePropertyForDynamicProperty(this,(FName *)(pFVar11 + -0x18));
        if (pFVar8 != (FBoolProperty *)0x0) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= pFVar11) &&
              (pFVar11 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
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
               *(undefined8 *)pFVar11;
        }
        pFVar2 = pFVar11 + 0x10;
        pFVar11 = pFVar11 + 0x40;
      } while (pFVar2 != pFVar1 + (longlong)iVar6 * 0x40);
    }
  }
  return __return_storage_ptr__;
}

// GetDynamicPropertyValue @ 14dccd3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphNode::GetDynamicPropertyValue(UMovieGraphNode *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  TValueOrError<FString,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueSerializedString(&this->DynamicProperties,&local_28,param_1);
  uVar4 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar4) {
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
                 ::__l2::bIsSameType + uVar4 + 4) != '\0') {
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
    ::FString::operator=(param_2,(FString *)&local_28);
  }
  uVar4 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar4) {
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
  uVar3 = *(undefined1 *)
           ((longlong)
            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
             ::__l2::bIsSameType + uVar4 + 4);
  if (2 < local_28.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
  return (bool)uVar3;
}

// GetExposedPinProperties @ 14dccd4f0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetExposedPinProperties
          (UMovieGraphNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EMovieGraphValueType EVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar6;
  FName *pFVar7;
  FMovieGraphPropertyInfo *pFVar8;
  FMovieGraphPropertyInfo *pFVar9;
  undefined1 local_res8 [8];
  FMovieGraphPropertyInfo *local_58;
  int local_50;
  FName local_48;
  EMovieGraphValueType local_40;
  FName local_38;
  undefined4 local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_58);
  iVar3 = local_50;
  pFVar9 = local_58 + local_50;
  pFVar8 = local_58;
  while( true ) {
    if (local_50 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieGraphPropertyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    EVar1 = pFVar8->ValueType;
    if (EVar1 != None) {
      local_48 = pFVar8->Name;
      local_38 = (FName)(pFVar8->ValueTypeObject).field0_0x0.DebugPtr;
      local_40 = EVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38);
      }
      pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_30 = 0x1000000;
      if ((pFVar7 <= &local_48) &&
         (&local_48 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
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
      pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
      *pFVar7 = local_48;
      *(EMovieGraphValueType *)&pFVar7[1].ComparisonIndex.Value = local_40;
      pFVar7[2] = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38);
      }
      *(undefined1 *)&pFVar7[3].ComparisonIndex.Value = (undefined1)local_30;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) = local_30._1_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 2) = local_30._2_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 3) = local_30._3_1_;
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<FMovieGraphPropertyInfo,int>(local_58,local_50);
  if (local_58 != (FMovieGraphPropertyInfo *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// GetFirstConnectedInputPin @ 14dccd710

UMovieGraphPin * __thiscall UMovieGraphNode::GetFirstConnectedInputPin(UMovieGraphNode *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->InputPins).AllocatorInstance.Data;
  iVar3 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    plVar7 = *(longlong **)(lVar5 + 0x50);
    iVar4 = *(int *)(lVar5 + 0x58);
    plVar2 = plVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x58) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar7 == plVar2) break;
      lVar6 = *plVar7;
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) && (*(longlong *)(lVar6 + 0x30) != 0)
         ) {
        return *(UMovieGraphPin **)pFVar8;
      }
      plVar7 = plVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return (UMovieGraphPin *)0x0;
}

// GetFirstConnectedOutputPin @ 14dccd7d0

UMovieGraphPin * __thiscall UMovieGraphNode::GetFirstConnectedOutputPin(UMovieGraphNode *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->OutputPins).AllocatorInstance.Data;
  iVar3 = (this->OutputPins).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    plVar7 = *(longlong **)(lVar5 + 0x50);
    iVar4 = *(int *)(lVar5 + 0x58);
    plVar2 = plVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x58) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar7 == plVar2) break;
      lVar6 = *plVar7;
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) && (*(longlong *)(lVar6 + 0x30) != 0)
         ) {
        return *(UMovieGraphPin **)pFVar8;
      }
      plVar7 = plVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return (UMovieGraphPin *)0x0;
}

// GetGraph @ 14dccd9a0

UMovieGraphConfig * __thiscall UMovieGraphNode::GetGraph(UMovieGraphNode *this)

{
  int iVar1;
  UMovieGraphConfig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMovieGraphConfig *)this->_padding_;
  if (pUVar2 != (UMovieGraphConfig *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieGraphConfig *)0x0;
}

// GetInputPin @ 14dcce2c0

UMovieGraphPin * __thiscall
UMovieGraphNode::GetInputPin
          (UMovieGraphNode *this,FName *param_1,EMovieGraphPinQueryRequirement param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UMovieGraphPin *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->InputPins).AllocatorInstance.Data;
  iVar3 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar4 = *(UMovieGraphPin **)pFVar5;
    if ((pUVar4->Properties).Label == *param_1) {
      if (param_2 == BuiltInOrDynamic) {
        return pUVar4;
      }
      bVar2 = (pUVar4->Properties).bIsBuiltIn;
      if (param_2 == BuiltIn) {
        if (bVar2 != false) {
          return pUVar4;
        }
      }
      else if ((param_2 == Dynamic) && (bVar2 == false)) {
        return pUVar4;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UMovieGraphPin *)0x0;
}

// GetInputPinProperties @ 14dcce6f0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetInputPinProperties
          (UMovieGraphNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMutableDynamicProperties_Unsafe @ 14dcced10

FInstancedPropertyBag * __thiscall
UMovieGraphNode::GetMutableDynamicProperties_Unsafe(UMovieGraphNode *this)

{
  return &this->DynamicProperties;
}

// GetNodeValidationErrors @ 14dccedc0

bool __thiscall
UMovieGraphNode::GetNodeValidationErrors
          (UMovieGraphNode *this,FName *param_1,UMovieGraphEvaluatedConfig *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// GetOutputPin @ 14dccffc0

UMovieGraphPin * __thiscall UMovieGraphNode::GetOutputPin(UMovieGraphNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->OutputPins).AllocatorInstance.Data;
  iVar2 = (this->OutputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(UMovieGraphPin **)pFVar3)->Properties).Label == *param_1) {
      return *(UMovieGraphPin **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UMovieGraphPin *)0x0;
}

// GetOutputPinProperties @ 14dcd01b0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetOutputPinProperties
          (UMovieGraphNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOverrideablePropertyInfo @ 14dcd05b0

TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphNode::GetOverrideablePropertyInfo
          (UMovieGraphNode *this,
          TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  FProperty *pFVar3;
  uint uVar4;
  bool bVar5;
  EMovieGraphValueType EVar6;
  int iVar7;
  int iVar8;
  FBoolProperty *pFVar9;
  TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  FName *pFVar14;
  undefined8 *puVar15;
  FName *pFVar16;
  undefined8 *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  TFieldIterator<FProperty> local_118;
  longlong local_100;
  FText local_f8;
  longlong local_e8;
  undefined2 local_e0;
  TObjectPtr<UObject_const_>_u_0 local_d8;
  FScriptContainerElement local_d0;
  undefined8 local_c8;
  FText local_c0;
  undefined8 local_b0;
  FScriptContainerElement local_a8;
  FScriptContainerElement local_a7;
  UObject *local_a0;
  FScriptContainerElement local_98;
  FName local_90;
  FText local_88;
  FName local_78;
  undefined1 local_70;
  undefined1 local_6f;
  FName local_68;
  undefined1 local_60;
  void *local_58;
  uint local_50;
  void *local_48;
  int local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_118.Struct = (UStruct *)this->_padding_;
  if (local_118.Struct == (UStruct *)0x0) {
    local_118.Field = (FField *)0x0;
  }
  else {
    local_118.Field = (local_118.Struct)->ChildProperties;
  }
  local_118.InterfaceIndex = -1;
  local_118.bIncludeSuper = true;
  local_118.bIncludeDeprecated = true;
  local_118.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_118);
  pFVar3 = (FProperty *)local_118.Field;
  while (local_118.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
    if ((((pFVar3->PropertyFlags & CPF_Edit) != CPF_None) &&
        ((pFVar3->PropertyFlags >> 0x11 & 1) == 0)) &&
       (pFVar9 = UMovieGraphConfig::FindOverridePropertyForRealProperty
                           ((UClass *)this->_padding_,pFVar3), pFVar9 != (FBoolProperty *)0x0)) {
      local_100 = 0;
      FText::FText(&local_f8);
      local_e8 = 0;
      local_e0 = 0;
      local_d8.DebugPtr = (UObject *)0x0;
      local_d0 = (FScriptContainerElement)0x0;
      bVar5 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar5) {
        local_res18 = pFVar3->_padding_;
      }
      else {
        local_res18 = 0;
      }
      local_e0 = local_e0 & 0xff00;
      local_100 = local_res18;
      EVar6 = UE::MovieGraph::Private::GetValueTypeFromProperty
                        (pFVar3,(TObjectPtr<UObject_const_> *)&local_d8.ObjectPtr);
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_e0 = CONCAT11(EVar6,local_e0._0_1_);
      if (((pFVar12 <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 <
           pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar10;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(longlong *)pFVar12 = local_100;
      FText::FText((FText *)(pFVar12 + 8),&local_f8);
      *(longlong *)(pFVar12 + 0x18) = local_e8;
      pFVar12[0x20] = local_e0._0_1_;
      pFVar12[0x21] = local_e0._1_1_;
      ((TObjectPtr<UObject_const_>_u_0 *)(pFVar12 + 0x28))->DebugPtr = (UObject *)local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d8.DebugPtr);
      }
      pFVar12[0x30] = local_d0;
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
    }
    local_118.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_118);
    pFVar3 = (FProperty *)local_118.Field;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,&local_58);
  uVar4 = local_50;
  uVar11 = (ulonglong)(int)local_50;
  pFVar16 = (FName *)(uVar11 * 0x40 + (longlong)local_58);
  pFVar13 = (FName *)((longlong)local_58 + 0x18);
  while( true ) {
    if ((uint)uVar11 != uVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 + -3 == pFVar16) break;
    pFVar9 = FindOverridePropertyForDynamicProperty(this,pFVar13);
    if (pFVar9 != (FBoolProperty *)0x0) {
      local_90.ComparisonIndex.Value = 0;
      local_90.Number = 0;
      FText::FText(&local_88);
      FVar1 = pFVar13[-3];
      local_78.ComparisonIndex.Value = 0;
      local_78.Number = 0;
      local_68.ComparisonIndex.Value = 0;
      local_68.Number = 0;
      local_60 = 0;
      local_90 = *pFVar13;
      local_6f = (undefined1)pFVar13[1].ComparisonIndex.Value;
      local_70 = 1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar1);
      }
      pFVar14 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_68 = FVar1;
      if (((pFVar14 <= &local_90) &&
          (&local_90 < pFVar14 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar10;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar14 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38)
      ;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *pFVar14 = local_90;
      FText::FText((FText *)(pFVar14 + 1),&local_88);
      pFVar14[3] = local_78;
      *(undefined1 *)&pFVar14[4].ComparisonIndex.Value = local_70;
      *(undefined1 *)((longlong)&pFVar14[4].ComparisonIndex.Value + 1) = local_6f;
      pFVar14[5] = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68);
      }
      *(undefined1 *)&pFVar14[6].ComparisonIndex.Value = local_60;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    uVar11 = (ulonglong)local_50;
    pFVar13 = pFVar13 + 8;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  (**(code **)(this->_padding_ + 0x2b0))(this,&local_48);
  iVar7 = local_40;
  puVar17 = (undefined8 *)((longlong)local_40 * 0x20 + (longlong)local_48);
  puVar15 = (undefined8 *)((longlong)local_48 + 0x10);
  while( true ) {
    if (local_40 != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieGraphPinProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar15 + -2 == puVar17) break;
    if (*(char *)((longlong)puVar15 + 9) == '\0') {
      local_c8 = 0;
      FText::FText(&local_c0);
      local_c8 = puVar15[-2];
      local_a7 = *(FScriptContainerElement *)(puVar15 + -1);
      local_b0 = 0;
      local_a8 = (FScriptContainerElement)0x0;
      local_a0 = (UObject *)0x0;
      local_98 = (FScriptContainerElement)0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)*puVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)*puVar15);
      }
      local_a0 = (UObject *)*puVar15;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_98 = *(FScriptContainerElement *)((longlong)puVar15 + 0xb);
      if (((pFVar12 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x38;
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(undefined8 *)pFVar12 = local_c8;
      FText::FText((FText *)(pFVar12 + 8),&local_c0);
      *(undefined8 *)(pFVar12 + 0x18) = local_b0;
      pFVar12[0x20] = local_a8;
      pFVar12[0x21] = local_a7;
      *(UObject **)(pFVar12 + 0x28) = local_a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      pFVar12[0x30] = local_98;
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
    }
    puVar15 = puVar15 + 4;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd2a50

UClass * __cdecl UMovieGraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphNode",
               &Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphNode,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphNode>,
               InternalVTableHelperCtorCaller<UMovieGraphNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton;
}

// IsDisabled @ 14dcd7060

bool __thiscall UMovieGraphNode::IsDisabled(UMovieGraphNode *this)

{
  return this->bIsDisabled;
}

// IsDynamicPropertyOverridden @ 14dcd7070

bool __thiscall UMovieGraphNode::IsDynamicPropertyOverridden(UMovieGraphNode *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FBoolProperty *pFVar4;
  ulonglong uVar5;
  char local_res18;
  byte local_res19;
  undefined8 local_res20;
  
  pFVar4 = FindOverridePropertyForDynamicProperty(this,param_1);
  if (pFVar4 != (FBoolProperty *)0x0) {
    bVar2 = IsThisNotNull(pFVar4,"FField::GetFName");
    if (!bVar2) {
      local_res20 = 0;
    }
    FInstancedPropertyBag::GetValueBool(&this->DynamicProperties,(FName)&local_res18);
    uVar5 = (ulonglong)local_res19;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) != '\0') {
      if ((local_res19 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (local_res18 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// PostDuplicate @ 14dcda340

void __thiscall UMovieGraphNode::PostDuplicate(UMovieGraphNode *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
                    /* WARNING: Could not recover jumptable at 0x00014dcda363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this);
  return;
}

// PostLoad @ 14dcda380

void __thiscall UMovieGraphNode::PostLoad(UMovieGraphNode *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x00014dcda399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this);
  return;
}

// PromotePropertyToPin @ 14dcdbf40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphNode::PromotePropertyToPin(UMovieGraphNode *this,FName *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  FMovieGraphPropertyInfo *pFVar8;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FMovieGraphPropertyInfo local_68;
  
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  bVar4 = false;
  FText::FText(&local_68.ContextMenuName);
  local_68.PromotionName.ComparisonIndex.Value = 0;
  local_68.PromotionName.Number = 0;
  local_68.bIsDynamicProperty = false;
  local_68.ValueType = None;
  local_68.ValueTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_68.bIsPermanentlyExposed = false;
  (**(code **)(this->_padding_ + 0x2e0))(this,&local_88);
  iVar5 = local_88.Data.ArrayNum;
  pFVar8 = (FMovieGraphPropertyInfo *)
           (local_88.Data.AllocatorInstance.Data + (longlong)local_88.Data.ArrayNum * 0x38);
  FVar7.Data = local_88.Data.AllocatorInstance.Data;
  while( true ) {
    if (local_88.Data.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FMovieGraphPropertyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    TVar6.Reference = local_68.ContextMenuName.TextData.Reference;
    if ((FMovieGraphPropertyInfo *)FVar7.Data == pFVar8) goto LAB_14dcdc04c;
    FVar1 = ((FMovieGraphPropertyInfo *)FVar7.Data)->Name;
    if (FVar1 == *param_1) break;
    FVar7.Data = FVar7.Data + 0x38;
  }
  bVar4 = true;
  pIVar2 = (((FMovieGraphPropertyInfo *)FVar7.Data)->ContextMenuName).TextData.Reference;
  local_68.Name = FVar1;
  if (local_68.ContextMenuName.TextData.Reference != pIVar2) {
    local_68.ContextMenuName.TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
  }
  local_68.ContextMenuName.Flags = (((FMovieGraphPropertyInfo *)FVar7.Data)->ContextMenuName).Flags;
  local_68.PromotionName = ((FMovieGraphPropertyInfo *)FVar7.Data)->PromotionName;
  local_68.bIsDynamicProperty = ((FMovieGraphPropertyInfo *)FVar7.Data)->bIsDynamicProperty;
  local_68.ValueType = ((FMovieGraphPropertyInfo *)FVar7.Data)->ValueType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (((FMovieGraphPropertyInfo *)FVar7.Data)->ValueTypeObject).field0_0x0.DebugPtr,
     pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_68.ValueTypeObject.field0_0x0 =
       (((FMovieGraphPropertyInfo *)FVar7.Data)->ValueTypeObject).field0_0x0;
  local_68.bIsPermanentlyExposed = ((FMovieGraphPropertyInfo *)FVar7.Data)->bIsPermanentlyExposed;
LAB_14dcdc04c:
  DestructItems<FMovieGraphPropertyInfo,int>
            ((FMovieGraphPropertyInfo *)local_88.Data.AllocatorInstance.Data,local_88.Data.ArrayNum)
  ;
  if ((FMovieGraphPropertyInfo *)local_88.Data.AllocatorInstance.Data !=
      (FMovieGraphPropertyInfo *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FMovieGraphPropertyInfo>(&this->ExposedPropertyInfo,&local_68);
  }
  else {
    ::FName::ToString(param_1,&local_78);
    ::FString::PrintfImpl
              (&local_88,L"%hs: Could not find a property with the name \'%s\' to promote to pin.");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Error,(FName)0x0);
    if ((FMovieGraphPropertyInfo *)local_88.Data.AllocatorInstance.Data !=
        (FMovieGraphPropertyInfo *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  UpdatePins(this);
  if (local_68.ContextMenuName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.ContextMenuName.TextData.Reference + 0x10))();
  }
  return;
}

// SetDisabled @ 14dce2fc0

void __thiscall UMovieGraphNode::SetDisabled(UMovieGraphNode *this,bool param_1)

{
  this->bIsDisabled = '\0';
  this->field_0x98 = this->field_0x98 | param_1;
  return;
}

// SetDynamicPropertyOverridden @ 14dce2fe0

void __thiscall
UMovieGraphNode::SetDynamicPropertyOverridden(UMovieGraphNode *this,FName *param_1,bool param_2)

{
  bool bVar1;
  FBoolProperty *pFVar2;
  FName FVar3;
  
  pFVar2 = FindOverridePropertyForDynamicProperty(this,param_1);
  if (pFVar2 != (FBoolProperty *)0x0) {
    bVar1 = IsThisNotNull(pFVar2,"FField::GetFName");
    if (bVar1) {
      FVar3 = (FName)pFVar2->_padding_;
    }
    else {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
    }
    FInstancedPropertyBag::SetValueBool(&this->DynamicProperties,FVar3,param_2);
  }
  return;
}

// SetDynamicPropertyValue @ 14dce3050

bool __thiscall
UMovieGraphNode::SetDynamicPropertyValue(UMovieGraphNode *this,FName param_1,FString *param_2)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueSerializedString(&this->DynamicProperties,param_1,param_2);
  return EVar1 == Success;
}

// StaticRegisterNativesUMovieGraphNode @ 14dce6600

void __cdecl UMovieGraphNode::StaticRegisterNativesUMovieGraphNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TogglePromotePropertyToPin @ 14dce8910

void __thiscall UMovieGraphNode::TogglePromotePropertyToPin(UMovieGraphNode *this,FName *param_1)

{
  FName *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  
  pFVar1 = (FName *)(this->ExposedPropertyInfo).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(this->ExposedPropertyInfo).ArrayNum * 7;
  do {
    if (pFVar1 == pFVar3) {
      lVar2 = this->_padding_;
LAB_14dce8941:
                    /* WARNING: Could not recover jumptable at 0x00014dce8941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x308))();
      return;
    }
    if (*pFVar1 == *param_1) {
      lVar2 = this->_padding_;
      if (pFVar1 != (FName *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dce8950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x310))();
        return;
      }
      goto LAB_14dce8941;
    }
    pFVar1 = pFVar1 + 7;
  } while( true );
}

// UnpromotePropertyFromPin @ 14dcebe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphNode::UnpromotePropertyFromPin(UMovieGraphNode *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  FString local_48;
  FString local_38;
  
  pFVar1 = (FName *)(this->ExposedPropertyInfo).AllocatorInstance.Data;
  iVar6 = (this->ExposedPropertyInfo).ArrayNum;
  lVar8 = (longlong)iVar6;
  pFVar2 = pFVar1;
  do {
    if (pFVar2 == pFVar1 + lVar8 * 7) {
      ::FName::ToString(param_1,&local_38);
      ::FString::PrintfImpl
                (&local_48,L"%hs: Could not find a property with the name \'%s\' to promote to pin."
                );
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar4.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Error,(FName)0x0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
LAB_14dcec00d:
      UpdatePins(this);
      return;
    }
    if (*pFVar2 == *param_1) {
      if (iVar6 != 0) {
        iVar9 = 0;
        bVar10 = *pFVar1 != *param_1;
        lVar3 = 0;
        iVar6 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar7 = iVar6 + 1;
          if (lVar3 < lVar8) {
            pFVar2 = pFVar1 + lVar3 * 7;
            do {
              if (bVar10 != (*pFVar2 != *param_1)) break;
              iVar7 = iVar7 + 1;
              lVar3 = lVar3 + 1;
              pFVar2 = pFVar2 + 7;
            } while (lVar3 < lVar8);
          }
          iVar5 = iVar7 - iVar6;
          if (bVar10 == false) {
            DestructItems<FMovieGraphPropertyInfo,int>
                      ((FMovieGraphPropertyInfo *)(pFVar1 + (longlong)iVar6 * 7),iVar5);
          }
          else {
            if (iVar9 != iVar6) {
              memmove(pFVar1 + (longlong)iVar9 * 7,pFVar1 + (longlong)iVar6 * 7,
                      (longlong)iVar5 * 0x38);
            }
            iVar9 = iVar9 + iVar5;
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar6 = iVar7;
          if (lVar8 <= lVar3) {
            (this->ExposedPropertyInfo).ArrayNum = iVar9;
            UpdatePins(this);
            return;
          }
        } while( true );
      }
      goto LAB_14dcec00d;
    }
    pFVar2 = pFVar2 + 7;
  } while( true );
}

// UpdateDynamicProperties @ 14dcec030

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall UMovieGraphNode::UpdateDynamicProperties(UMovieGraphNode *this)

{
  FInstancedPropertyBag *this_00;
  code *pcVar1;
  int iVar2;
  int iVar3;
  FPropertyBagPropertyDesc *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  FPropertyBagPropertyDesc *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FPropertyBagPropertyDesc *local_58;
  int local_50;
  FInstancedStruct local_48;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_28;
  
  this_00 = &this->DynamicProperties;
  (**(code **)(this->_padding_ + 0x2d0))(this,&local_58);
  iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag(this_00);
  iVar2 = local_50;
  bVar7 = iVar3 == local_50;
  if (bVar7) {
    pFVar6 = local_58 + local_50;
    pFVar5 = local_58;
    while( true ) {
      if (local_50 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) goto LAB_14dcec0bd;
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName(this_00,pFVar5->Name);
      if (pFVar4 == (FPropertyBagPropertyDesc *)0x0) break;
      pFVar5 = pFVar5 + 1;
    }
  }
  else {
LAB_14dcec0bd:
    if (bVar7) goto LAB_14dcec13c;
  }
  FInstancedStruct::FInstancedStruct(&local_48);
  local_38 = local_58;
  if (local_50 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_30 = local_50;
  local_28.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)&local_48,&local_28,true);
  FInstancedPropertyBag::MigrateToNewBagInstance(this_00,(FInstancedPropertyBag *)&local_48);
  FInstancedStruct::Reset(&local_48);
LAB_14dcec13c:
  if (local_58 != (FPropertyBagPropertyDesc *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// UpdatePins @ 14dceca00

void __thiscall UMovieGraphNode::UpdatePins(UMovieGraphNode *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> local_98;
  UMovieGraphNode *local_88;
  char *local_80;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> local_78;
  void *local_68 [2];
  FDestructionSentinel local_58;
  
  (**(code **)(this->_padding_ + 0x2b0))(this,&local_98);
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_78);
  pTVar10 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 0x338))(this,local_68);
  if (&local_98 == pTVar10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = pTVar10->ArrayNum;
  if (iVar11 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar11,&local_98.AllocatorInstance,&local_98.ArrayNum,
                       &local_98.ArrayMax);
    memmove(local_98.AllocatorInstance.Data + (longlong)iVar8 * 0x20,
            (pTVar10->AllocatorInstance).Data,(longlong)iVar11 << 5);
    pTVar10->ArrayNum = 0;
  }
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  pFVar13 = (this->InputPins).AllocatorInstance.Data;
  local_80 = local_res8;
  iVar11 = (this->InputPins).ArrayNum;
  local_res8[0] = '\0';
  pFVar15 = pFVar13 + (longlong)iVar11 * 8;
  local_88 = this;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar15) break;
    pFVar13 = pFVar13 + 8;
  }
  `UMovieGraphNode::UpdatePins'::__l2::<lambda_1>::operator()
            (&local_88,(TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)&this->InputPins,
             &local_98);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pFVar15 = (this->InputPins).AllocatorInstance.Data;
    iVar11 = 0;
    if (0 < (this->InputPins).ArrayNum) {
      do {
        if (*(UObject **)pFVar15 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar15);
        }
        iVar11 = iVar11 + 1;
        pFVar15 = pFVar15 + 8;
      } while (iVar11 < (this->InputPins).ArrayNum);
    }
  }
  pFVar13 = (this->OutputPins).AllocatorInstance.Data;
  iVar11 = (this->OutputPins).ArrayNum;
  pFVar15 = pFVar13 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar15) break;
    pFVar13 = pFVar13 + 8;
  }
  `UMovieGraphNode::UpdatePins'::__l2::<lambda_1>::operator()
            (&local_88,(TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)&this->OutputPins,
             &local_78);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pFVar15 = (this->OutputPins).AllocatorInstance.Data;
    iVar11 = 0;
    if (0 < (this->OutputPins).ArrayNum) {
      do {
        if (*(UObject **)pFVar15 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar15);
        }
        iVar11 = iVar11 + 1;
        pFVar15 = pFVar15 + 8;
      } while (iVar11 < (this->OutputPins).ArrayNum);
    }
  }
  if (local_res8[0] != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNodeChangedDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(this->OnNodeChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar12 = *(int *)&(this->OnNodeChangedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->OnNodeChangedDelegate).field_0x10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar2 = *(longlong *)&(this->OnNodeChangedDelegate).field_0x8;
        if ((*(int *)(lVar14 + 8 + lVar2) == 0) ||
           (plVar3 = *(longlong **)(lVar14 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_14dcecc89:
          bVar5 = true;
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x68))();
          if (cVar7 == '\0') goto LAB_14dcecc89;
        }
        lVar14 = lVar14 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnNodeChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnNodeChangedDelegate,
                 false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execCanBeAddedByUser @ 14dcef620

void __cdecl UMovieGraphNode::execCanBeAddedByUser(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x318))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execCanBeDisabled @ 14dcef660

void __cdecl UMovieGraphNode::execCanBeDisabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x328))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetBranchRestriction @ 14dcf0680

void __cdecl
UMovieGraphNode::execGetBranchRestriction(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetExposedProperties @ 14dcf0b40

void __cdecl
UMovieGraphNode::execGetExposedProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FMovieGraphPropertyInfo *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,&local_18);
  if (param_3 != puVar1) {
    DestructItems<FMovieGraphPropertyInfo,int>
              (*(FMovieGraphPropertyInfo **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  DestructItems<FMovieGraphPropertyInfo,int>(local_18,local_10);
  if (local_18 != (FMovieGraphPropertyInfo *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetFirstConnectedInputPin @ 14dcf0be0

void __cdecl
UMovieGraphNode::execGetFirstConnectedInputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieGraphPin *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetFirstConnectedInputPin((UMovieGraphNode *)param_1);
  *(UMovieGraphPin **)param_3 = pUVar1;
  return;
}

// execGetFirstConnectedOutputPin @ 14dcf0c20

void __cdecl
UMovieGraphNode::execGetFirstConnectedOutputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar8 = *(longlong **)&param_1[2].field_0x18;
  iVar3 = *(int *)&param_1[2].field_0x20;
  plVar1 = plVar8 + iVar3;
  while( true ) {
    if (*(int *)&param_1[2].field_0x20 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    lVar5 = *plVar8;
    plVar7 = *(longlong **)(lVar5 + 0x50);
    iVar4 = *(int *)(lVar5 + 0x58);
    plVar2 = plVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x58) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar7 == plVar2) break;
      lVar6 = *plVar7;
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) && (*(longlong *)(lVar6 + 0x30) != 0)
         ) {
        *(longlong *)param_3 = *plVar8;
        return;
      }
      plVar7 = plVar7 + 1;
    }
    plVar8 = plVar8 + 1;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInputPin @ 14dcf0e90

void __cdecl UMovieGraphNode::execGetInputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_48 [2];
  
  local_48[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res8[0] = '\0';
  plVar7 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  cVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar6 = *(longlong **)&param_1[2].field_0x8;
  iVar2 = *(int *)&param_1[2].field_0x10;
  plVar1 = plVar6 + iVar2;
  do {
    if (*(int *)&param_1[2].field_0x10 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar6 == plVar1) {
      *(undefined8 *)param_3 = 0;
      return;
    }
    lVar4 = *plVar6;
    if (*(longlong *)(lVar4 + 0x30) == *plVar7) {
      if (cVar5 == '\x02') {
LAB_14dcf0f9a:
        *(longlong *)param_3 = lVar4;
        return;
      }
      if (cVar5 == '\0') {
        if (*(char *)(lVar4 + 0x4b) != '\0') goto LAB_14dcf0f9a;
      }
      else if ((cVar5 == '\x01') && (*(char *)(lVar4 + 0x4b) == '\0')) goto LAB_14dcf0f9a;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// execGetInputPinProperties @ 14dcf0fd0

void __cdecl
UMovieGraphNode::execGetInputPinProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetInputPins @ 14dcf1060

void __cdecl UMovieGraphNode::execGetInputPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)&param_1[2].field_0x8);
  return;
}

// execGetNodeValidationErrors @ 14dcf1390

void __cdecl
UMovieGraphNode::execGetNodeValidationErrors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  FText **ppFVar4;
  uchar local_res8 [8];
  undefined8 local_res10;
  FText *local_28;
  undefined8 local_20;
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (FText *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppFVar4 = &local_28;
  if ((FText **)param_2->MostRecentPropertyAddress != (FText **)0x0) {
    ppFVar4 = (FText **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x330))(param_1,puVar3,local_res10,ppFVar4);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FText,int>(local_28,(int)local_20);
  if (local_28 != (FText *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetOutputPin @ 14dcf1560

void __cdecl UMovieGraphNode::execGetOutputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  local_38[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar5 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar4 = *(longlong **)&param_1[2].field_0x18;
  iVar2 = *(int *)&param_1[2].field_0x20;
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)&param_1[2].field_0x20 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if (*(longlong *)(*plVar4 + 0x30) == *plVar5) {
      *(longlong *)param_3 = *plVar4;
      return;
    }
    plVar4 = plVar4 + 1;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetOutputPinProperties @ 14dcf1640

void __cdecl
UMovieGraphNode::execGetOutputPinProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetOutputPins @ 14dcf16d0

void __cdecl UMovieGraphNode::execGetOutputPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)&param_1[2].field_0x18)
  ;
  return;
}

// execGetOverrideablePropertyInfo @ 14dcf1700

void __cdecl
UMovieGraphNode::execGetOverrideablePropertyInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FMovieGraphPropertyInfo *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,&local_18);
  if (param_3 != puVar1) {
    DestructItems<FMovieGraphPropertyInfo,int>
              (*(FMovieGraphPropertyInfo **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  DestructItems<FMovieGraphPropertyInfo,int>(local_18,local_10);
  if (local_18 != (FMovieGraphPropertyInfo *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execIsDisabled @ 14dcf2030

void __cdecl UMovieGraphNode::execIsDisabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[3].field_0x20 & 1;
  return;
}

// execPromotePropertyToPin @ 14dcf2ae0

void __cdecl
UMovieGraphNode::execPromotePropertyToPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,puVar2);
  return;
}

// execSetDisabled @ 14dcf3690

void __cdecl UMovieGraphNode::execSetDisabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x20 = param_1[3].field_0x20 & 0xfe;
  param_1[3].field_0x20 = param_1[3].field_0x20 | local_res8[0] != 0;
  return;
}

// execTogglePromotePropertyToPin @ 14dcf3d70

void __cdecl
UMovieGraphNode::execTogglePromotePropertyToPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,puVar2);
  return;
}

// execUnpromotePropertyFromPin @ 14dcf3e40

void __cdecl
UMovieGraphNode::execUnpromotePropertyFromPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1,puVar2);
  return;
}

