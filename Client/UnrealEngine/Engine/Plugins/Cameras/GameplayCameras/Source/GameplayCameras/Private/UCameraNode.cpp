// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 16

// StaticClass @ 14d538350

UClass * __cdecl UCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraNode",
               &Z_Registration_Info_UClass_UCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraNode>,
               InternalVTableHelperCtorCaller<UCameraNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraNode.InnerSingleton;
}

// UCameraNode @ 14d543b80

UCameraNode * __thiscall UCameraNode::UCameraNode(UCameraNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->PrivateFlags = None;
  return this;
}

// UCameraNode @ 14d543bc0

UCameraNode * __thiscall UCameraNode::UCameraNode(UCameraNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->PrivateFlags = None;
  return this;
}

// ~UCameraNode @ 14d544c10

void __thiscall UCameraNode::~UCameraNode(UCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Build @ 14d549a30

void __thiscall UCameraNode::Build(UCameraNode *this,FCameraObjectBuildContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d549a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// BuildEvaluator @ 14d54cae0

FCameraNodeEvaluator * __thiscall
UCameraNode::BuildEvaluator(UCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  FCameraNodeEvaluator *pFVar1;
  
  pFVar1 = (FCameraNodeEvaluator *)(**(code **)(this->_padding_ + 0x2c8))();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
  }
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = this;
  return pFVar1;
}

// GetChildren @ 14d556720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UCameraNode::GetChildren
          (UCameraNode *this,TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FProperty *this_00;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  TObjectPtr<UCameraNode>_u_0 TVar8;
  FString *pFVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  TFieldIterator<FProperty> local_f8;
  TObjectPtr<UCameraNode>_u_0 local_e0;
  TObjectPtr<UCameraNode>_u_0 local_d8;
  UCameraNode *local_d0;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d0 = this;
  local_c8 = __return_storage_ptr__;
  if ((this->PrivateFlags & CustomGetChildren) == None) {
    local_f8.Struct = (UStruct *)this->_padding_;
    local_80.Storage._padding_ = 0;
    local_80.Storage._padding_._0_4_ = 0;
    local_80.Storage.TypeIndex = 0;
    if (local_f8.Struct == (UStruct *)0x0) {
      local_f8.Field = (FField *)0x0;
    }
    else {
      local_f8.Field = (local_f8.Struct)->ChildProperties;
    }
    local_f8.InterfaceIndex = -1;
    local_f8.bIncludeSuper = true;
    local_f8.bIncludeDeprecated = true;
    local_f8.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_f8);
    this_00 = (FProperty *)local_f8.Field;
    while (local_f8.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
      pwVar14 = L"";
      uVar11 = *(ulonglong *)(this_00->_padding_ + 0x18);
      if (((uVar11 >> 0x10 & 1) == 0) || (this_00 == (FProperty *)0x0)) {
        if (((uVar11 >> 0x15 & 1) != 0) &&
           (((this_00 != (FProperty *)0x0 &&
             (plVar3 = (longlong *)this_00[1]._padding_, plVar3 != (longlong *)0x0)) &&
            ((*(uint *)(plVar3[1] + 0x18) >> 0x10 & 1) != 0)))) {
          lVar13 = plVar3[0xe];
          pUVar7 = StaticClass();
          if (pUVar7 != (UClass *)0x0) {
            iVar1 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar13 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
              lVar5 = this_00[1]._padding_;
              (**(code **)(*(longlong *)this_00[1]._padding_ + 0x168))();
              lVar13 = this_00[1]._padding_;
              iVar1 = *(int *)(lVar13 + 0x34);
              if ((iVar1 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar12 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar4)();
                return pTVar12;
              }
              if ((lVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar12 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar4)();
                return pTVar12;
              }
              for (iVar16 = 0; this = local_d0, iVar16 < (int)puVar10[1]; iVar16 = iVar16 + 1) {
                if ((int)puVar10[1] == 0) {
                  lVar13 = 0;
                }
                else {
                  uVar11 = *puVar10;
                  if (((lVar5 & 1) != 0) && ((uVar11 & 1) != 0)) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar10;
                  }
                  lVar13 = (longlong)iVar1 * (longlong)iVar16 + uVar11;
                }
                TVar8.DebugPtr = (UCameraNode *)(**(code **)(*plVar3 + 0x1f8))(plVar3,lVar13);
                if (TVar8.DebugPtr == (UCameraNode *)0x0) {
                  TVar8.DebugPtr = (UCameraNode *)0x0;
                }
                else {
                  pUVar7 = StaticClass();
                  iVar2 = (int)pUVar7->_padding_;
                  if ((*(int *)((TVar8.DebugPtr)->_padding_ + 0x38) < iVar2) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                      &pUVar7->_padding_)) {
                    pFVar9 = GetTypeName<UCameraNode>(&local_a0);
                    pwVar14 = L"";
                    if ((pFVar9->Data).ArrayNum == 0) {
                      pwVar15 = L"";
                    }
                    else {
                      pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    pFVar9 = GetFullNameForCastLogError<UObject>
                                       (&local_90,(UObject *)TVar8.DebugPtr);
                    if ((pFVar9->Data).ArrayNum != 0) {
                      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(pwVar14,pwVar15);
                  }
                }
                local_d8 = TVar8;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar8.DebugPtr != (UCameraNode *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
                }
                UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::Add
                          (&local_80,(TObjectPtr<UCameraNode> *)&local_d8.ObjectPtr);
              }
            }
          }
        }
      }
      else {
        lVar13 = this_00[1]._padding_;
        pUVar7 = StaticClass();
        if (pUVar7 != (UClass *)0x0) {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            TVar8.DebugPtr = (UCameraNode *)(**(code **)(this_00->_padding_ + 0x208))(this_00,this);
            if (TVar8.DebugPtr == (UCameraNode *)0x0) {
              TVar8.DebugPtr = (UCameraNode *)0x0;
            }
            else {
              pUVar7 = StaticClass();
              iVar1 = (int)pUVar7->_padding_;
              if ((*(int *)((TVar8.DebugPtr)->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar7->_padding_)) {
                pFVar9 = GetTypeName<UCameraNode>(&local_c0);
                if ((pFVar9->Data).ArrayNum == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                }
                pFVar9 = GetFullNameForCastLogError<UObject>(&local_b0,(UObject *)TVar8.DebugPtr);
                if ((pFVar9->Data).ArrayNum != 0) {
                  pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(pwVar14,pwVar15);
              }
            }
            local_e0 = TVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar8.DebugPtr != (UCameraNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
            }
            UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::Add
                      (&local_80,(TObjectPtr<UCameraNode> *)&local_e0.ObjectPtr);
          }
        }
      }
      local_f8.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_f8);
      __return_storage_ptr__ = local_c8;
      this_00 = (FProperty *)local_f8.Field;
    }
    (__return_storage_ptr__->Storage).TypeIndex = local_80.Storage.TypeIndex;
    uVar11 = (ulonglong)local_80.Storage.TypeIndex;
    if ((1 < local_80.Storage.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar4)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar11])(__return_storage_ptr__,&local_80);
    uVar11 = (ulonglong)local_80.Storage.TypeIndex;
    if ((1 < uVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar4)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(&local_80);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b0))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d5586a0

UClass * __cdecl UCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraNode",
               &Z_Registration_Info_UClass_UCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraNode>,
               InternalVTableHelperCtorCaller<UCameraNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraNode.InnerSingleton;
}

// OnBuild @ 14d55ae80

void __thiscall UCameraNode::OnBuild(UCameraNode *this,FCameraObjectBuildContext *param_1)

{
  return;
}

// OnBuildEvaluator @ 14d55b570

FCameraNodeEvaluator * __thiscall
UCameraNode::OnBuildEvaluator(UCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  return (FCameraNodeEvaluator *)0x0;
}

// OnGetChildren @ 14d55cae0

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UCameraNode::OnGetChildren
          (UCameraNode *this,TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// OnPreBuild @ 14d55ccf0

void __thiscall UCameraNode::OnPreBuild(UCameraNode *this,FCameraBuildLog *param_1)

{
  return;
}

// PostLoad @ 14d55dd40

void __thiscall UCameraNode::PostLoad(UCameraNode *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UCameraNode **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreBuild @ 14d55df10

void __thiscall UCameraNode::PreBuild(UCameraNode *this,FCameraBuildLog *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d55df13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// StaticRegisterNativesUCameraNode @ 14d5685b0

void __cdecl UCameraNode::StaticRegisterNativesUCameraNode(void)

{
  return;
}

// _getUObject @ 14d56ad10

UObject * __thiscall UCameraNode::_getUObject(UCameraNode *this)

{
  return (UObject *)&this[-1]._padding_;
}

