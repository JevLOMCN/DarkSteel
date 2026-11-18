// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// StaticClass @ 147892d20

UClass * __cdecl UModelComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ModelComponent",
               &Z_Registration_Info_UClass_UModelComponent.InnerSingleton,
               StaticRegisterNativesUModelComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UModelComponent>,
               InternalVTableHelperCtorCaller<UModelComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelComponent.InnerSingleton;
}

// UModelComponent @ 1478aa2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UModelComponent * __thiscall
UModelComponent::UModelComponent(UModelComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UModelComponent__6B_;
  (this->Model).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->ModelBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Elements).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).Array.ArrayNum = 0;
  (this->Elements).Array.ArrayMax = 0;
  return this;
}

// UModelComponent @ 1478aa370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UModelComponent * __thiscall
UModelComponent::UModelComponent(UModelComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->field_0x27e = this->field_0x27e | 1;
  this->field_0x27d = this->field_0x27d | 8;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UModelComponent__6B_;
  (this->Model).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->ModelBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Elements).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).Array.ArrayNum = 0;
  (this->Elements).Array.ArrayMax = 0;
  this->field_0x1ab = 0;
  if ((this->field_0x27b & 8) != 0) {
    this->field_0x27b = this->field_0x27b & 0xf7;
    if (*(code **)(*(longlong *)this + 0xa10) == UPrimitiveComponent::OnGenerateOverlapEventsChanged
       ) {
      USceneComponent::ClearSkipUpdateOverlaps((USceneComponent *)this);
    }
    else {
      (**(code **)(*(longlong *)this + 0xa10))();
    }
  }
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAll_ProfileName,true);
  return this;
}

// ~UModelComponent @ 1478ac330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UModelComponent::~UModelComponent(UModelComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UModelComponent__6B_;
  TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>(&this->Elements);
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x548 = &___7IInterface_CollisionDataProvider__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AddReferencedObjects @ 1478b3390

void __cdecl UModelComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<UModelComponent>(&local_48);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = GetPrivateStaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,param_1 + 0x22,param_1,0);
    uVar9 = 0;
    if (0 < *(int *)&param_1[0x23].field_0x8) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < *(int *)&param_1[0x23].field_0x8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(lVar11 + *(longlong *)(param_1 + 0x23));
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar2 + 8,param_1,0);
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar2 + 0x10,param_1);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < *(int *)&param_1[0x23].field_0x8);
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar7 = GetTypeName<UModelComponent>(&local_38);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// CommitSurfaces @ 1478ba720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UModelComponent::CommitSurfaces(UModelComponent *this)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined2 *puVar3;
  TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *pTVar4;
  ushort uVar5;
  FModelElement **ppFVar6;
  UModel *pUVar7;
  UModel *pUVar8;
  UObject *pUVar9;
  code *pcVar10;
  undefined8 uVar11;
  ForAnyElementType _Src;
  UModelComponent *pUVar12;
  FModelElement **ppFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  FGuid *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint *puVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168 [2];
  undefined8 *local_160;
  int local_158 [2];
  UModelComponent *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  TPairInitializer<unsigned_short_const_&,FModelElement_*_&&> local_110;
  FModelElement **local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  FScriptContainerElement *local_c8;
  FModelElement ***local_c0;
  FGuid local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_68 = (uint *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_168[0] = 0;
  local_150 = this;
  if (0 < (this->Elements).Array.ArrayNum) {
    do {
      uVar15 = local_168[0];
      uVar21 = 0;
      uVar20 = 0;
      if ((int)local_168[0] < (this->Elements).Array.ArrayNum) {
        uVar20 = ~local_168[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ppFVar6 = *(FModelElement ***)
                 ((this->Elements).Array.AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      pFVar1 = (ForAnyElementType *)(ppFVar6 + 3);
      uVar27 = uVar21;
      local_110.Value = ppFVar6;
      if (0 < *(int *)(ppFVar6 + 4)) {
        do {
          pUVar12 = local_150;
          uVar20 = (uint)uVar21;
          uVar24 = ~uVar20 >> 0x1f;
          pUVar7 = (local_150->Model).field0_0x0.DebugPtr;
          uVar15 = 0;
          if ((int)uVar20 < *(int *)(ppFVar6 + 4)) {
            uVar15 = uVar24;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar5 = *(ushort *)(pFVar1->Data + uVar27);
          if (((pUVar7->Nodes).ArrayNum <= (int)(uint)uVar5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pUVar8 = (pUVar12->Model).field0_0x0.DebugPtr;
          uVar15 = *(uint *)((pUVar7->Nodes).AllocatorInstance.Data + (ulonglong)uVar5 * 0x40 + 0x14
                            );
          uVar16 = 0;
          if ((int)uVar15 < (pUVar8->Surfs).ArrayNum) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          ppFVar13 = local_110.Value;
          if (*(FModelElement **)
               ((pUVar8->Surfs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x50) ==
              local_110.Value[2]) {
            uVar15 = 0;
            if ((int)uVar20 < *(int *)(ppFVar6 + 4)) {
              uVar15 = uVar24;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar28 = pFVar1->Data + uVar27;
            if (((local_178.Data <= pFVar28) &&
                (pFVar28 < local_178.Data + (longlong)local_170._4_4_ * 2)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((int)local_170 == local_170._4_4_) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_178,(int *)((longlong)&local_170 + 4));
              local_170 = CONCAT44(local_170._4_4_,iVar17);
            }
            lVar22 = (longlong)(int)local_170;
            local_170 = CONCAT44(local_170._4_4_,(int)local_170 + 1);
            *(undefined2 *)(local_178.Data + lVar22 * 2) = *(undefined2 *)pFVar28;
          }
          else {
            local_100 = local_110.Value;
            uVar15 = 0;
            if ((int)uVar20 < *(int *)(ppFVar6 + 4)) {
              uVar15 = uVar24;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_c8 = pFVar1->Data + (longlong)(int)uVar20 * 2;
            local_c0 = &local_100;
            TSet<TTuple<unsigned_short,FModelElement_*>,TDefaultMapHashableKeyFuncs<unsigned_short,FModelElement_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_short_const_&,FModelElement_*_&&>_>
                      ((TSet<TTuple<unsigned_short,FModelElement_*>,TDefaultMapHashableKeyFuncs<unsigned_short,FModelElement_*,0>,FDefaultSetAllocator>
                        *)local_88,&local_110,(bool *)&local_c8);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&local_148,(int *)local_168);
          }
          uVar21 = (ulonglong)(uVar20 + 1);
          this = local_150;
          uVar27 = uVar27 + 2;
        } while ((int)(uVar20 + 1) < *(int *)(ppFVar13 + 4));
      }
      _Src.Data = local_178.Data;
      if (pFVar1 != &local_178) {
        iVar17 = (int)local_170;
        lVar22 = (longlong)(int)local_170;
        piVar2 = (int *)((longlong)ppFVar6 + 0x24);
        *(int *)(ppFVar6 + 4) = (int)local_170;
        if (((int)local_170 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_170,*piVar2,pFVar1,(int)local_170,piVar2);
          if (iVar17 != 0) {
            memcpy(pFVar1->Data,_Src.Data,lVar22 * 2);
          }
        }
      }
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      local_168[0] = local_168[0] + 1;
    } while ((int)local_168[0] < (this->Elements).Array.ArrayNum);
  }
  iStack_dc = 0;
  iStack_f0 = 0;
  uStack_ec = 1;
  local_d8 = iStack_f0;
  if (local_60 != 0) {
    puVar26 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar26 = local_68;
    }
    uVar15 = *puVar26;
    iStack_f0 = 0;
    local_d8 = 0;
    while (uVar15 == 0) {
      lVar22 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
      goto LAB_1478babd9;
      uVar15 = puVar26[lVar22 + 1];
    }
    uStack_ec = -uVar15 & uVar15;
    uVar21 = (ulonglong)uStack_ec * 2 + 1;
    lVar22 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_110.Key._4_4_ = (int)lVar22;
    iStack_dc = local_110.Key._4_4_ + -1 + local_d8;
    if (local_60 < iStack_dc) {
LAB_1478babd9:
      iStack_dc = local_60;
    }
  }
  local_138 = (longlong *)local_88;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_e0 = 0xffffffff;
  uStack_d4 = local_8c;
  TStack_130._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = local_8c;
  TStack_130.BaseBitIndex = local_d8;
  local_f8 = local_138;
  local_e8 = TStack_130.Array;
  TStack_130.CurrentBitIndex = iStack_dc;
  if (iStack_dc < local_60) {
    pTVar4 = &this->Elements;
    do {
      pUVar7 = (this->Model).field0_0x0.DebugPtr;
      uVar5 = *(ushort *)(*local_138 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      if (((pUVar7->Nodes).ArrayNum <= (int)(uint)uVar5) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar8 = (this->Model).field0_0x0.DebugPtr;
      uVar15 = *(uint *)((pUVar7->Nodes).AllocatorInstance.Data + (ulonglong)uVar5 * 0x40 + 0x14);
      uVar20 = 0;
      if ((int)uVar15 < (pUVar8->Surfs).ArrayNum) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar28 = (pUVar8->Surfs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x50;
      puVar23 = (undefined8 *)0x0;
      lVar22 = *(longlong *)(*local_138 + 8 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      puVar18 = puVar23;
      puVar25 = puVar23;
      if ((this->Elements).Array.ArrayNum < 1) {
LAB_1478badce:
        puVar23 = (undefined8 *)0x0;
        puVar18 = ::operator_new(0x90);
        if (puVar18 != (undefined8 *)0x0) {
          pUVar9 = *(UObject **)pFVar28;
          *puVar18 = &___7FModelElement__6B_;
          puVar18[1] = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar18[2] = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar18[6] = 0;
          puVar18[7] = 0;
          puVar18[8] = 0;
          puVar18[9] = 0;
          puVar18[10] = 0;
          puVar18[0xb] = 0;
          puVar18[0xc] = 0;
          puVar18[0xd] = 0;
          puVar18[0xe] = 0;
          puVar18[0xf] = 0;
          puVar18[0x10] = 0;
          puVar18[3] = 0;
          *(undefined1 *)(puVar18 + 0x11) = 0;
          *(undefined4 *)((longlong)puVar18 + 0x89) = 0;
          *(undefined2 *)((longlong)puVar18 + 0x8d) = 0;
          *(undefined1 *)((longlong)puVar18 + 0x8f) = 0;
          pFVar19 = FGuid::NewGuid(local_b8);
          uVar11 = *(undefined8 *)&pFVar19->C;
          puVar18[6] = *(undefined8 *)pFVar19;
          puVar18[7] = uVar11;
          puVar23 = puVar18;
        }
        pFVar28 = (pTVar4->Array).AllocatorInstance.Data;
        local_160 = puVar23;
        if (((pFVar28 <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar28 + (longlong)(this->Elements).Array.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar17 = (this->Elements).Array.ArrayNum;
        piVar2 = &(this->Elements).Array.ArrayMax;
        if (iVar17 == *piVar2) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar4,piVar2);
        }
        (this->Elements).Array.ArrayNum = iVar17 + 1;
        *(undefined8 **)((pTVar4->Array).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_160;
        uVar11 = *(undefined8 *)(lVar22 + 0x38);
        puVar23[6] = *(undefined8 *)(lVar22 + 0x30);
        puVar23[7] = uVar11;
      }
      else {
        do {
          uVar20 = (uint)puVar25;
          uVar15 = 0;
          if ((int)uVar20 < (this->Elements).Array.ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar25 = *(undefined8 **)
                     ((longlong)puVar18 + (longlong)(pTVar4->Array).AllocatorInstance.Data);
          if ((puVar25[2] == *(longlong *)pFVar28) &&
             (((*(int *)(lVar22 + 0x3c) == *(int *)((longlong)puVar25 + 0x3c) &&
               *(int *)(lVar22 + 0x38) == *(int *)(puVar25 + 7)) &&
              *(int *)(lVar22 + 0x34) == *(int *)((longlong)puVar25 + 0x34)) &&
              *(int *)(lVar22 + 0x30) == *(int *)(puVar25 + 6))) {
            puVar23 = puVar25;
          }
          puVar18 = puVar18 + 1;
          puVar25 = (undefined8 *)(ulonglong)(uVar20 + 1);
        } while ((int)(uVar20 + 1) < (this->Elements).Array.ArrayNum);
        if (puVar23 == (undefined8 *)0x0) goto LAB_1478badce;
      }
      puVar3 = (undefined2 *)(*local_138 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      if ((((undefined2 *)puVar23[3] <= puVar3) &&
          (puVar3 < (undefined2 *)puVar23[3] + *(int *)((longlong)puVar23 + 0x24))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar17 = *(int *)(puVar23 + 4);
      if (iVar17 == *(int *)((longlong)puVar23 + 0x24)) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,(ForAnyElementType *)(puVar23 + 3),
                            (int *)((longlong)puVar23 + 0x24));
      }
      *(int *)(puVar23 + 4) = iVar17 + 1;
      *(undefined2 *)(puVar23[3] + (longlong)iVar17 * 2) = *puVar3;
      local_158[0] = (this->Elements).Array.ArrayNum + -1;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(&local_148,local_158);
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
  }
  BuildRenderData(this);
  ShrinkElements(this);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,FModelElement_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,FModelElement_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,FModelElement_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// ContainsPhysicsTriMeshData @ 1478bf440

bool __thiscall UModelComponent::ContainsPhysicsTriMeshData(UModelComponent *this,bool param_1)

{
  return 0 < *(int *)&this->field_0x38;
}

// CopyElementsFrom @ 1478bf7f0

void __thiscall UModelComponent::CopyElementsFrom(UModelComponent *this,UModelComponent *param_1)

{
  TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  UObject *pUVar3;
  void *_Src;
  UBodySetup *pUVar4;
  UBodySetup *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  longlong local_res8;
  undefined8 *local_48 [2];
  
  pTVar1 = &this->Elements;
  pFVar12 = (pTVar1->Array).AllocatorInstance.Data;
  for (iVar14 = (this->Elements).Array.ArrayNum; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar11 = *(undefined8 **)pFVar12;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    pFVar12 = pFVar12 + 8;
  }
  iVar14 = (this->Elements).Array.ArrayMax;
  (this->Elements).Array.ArrayNum = 0;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar1,0,&(this->Elements).Array.ArrayMax);
  }
  uVar15 = 0;
  if (0 < (param_1->Elements).Array.ArrayNum) {
    local_res8 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar15 < (param_1->Elements).Array.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar2 = *(longlong *)((param_1->Elements).Array.AllocatorInstance.Data + local_res8);
      puVar11 = ::operator_new(0x90);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        *puVar11 = &___7FModelElement__6B_;
        pUVar3 = *(UObject **)(lVar2 + 8);
        puVar11[1] = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pUVar3 = *(UObject **)(lVar2 + 0x10);
        puVar11[2] = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        puVar11[3] = 0;
        iVar14 = *(int *)(lVar2 + 0x20);
        _Src = *(void **)(lVar2 + 0x18);
        *(int *)(puVar11 + 4) = iVar14;
        if (iVar14 == 0) {
          *(int *)((longlong)puVar11 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)(puVar11 + 3),iVar14,
                     (int *)((longlong)puVar11 + 0x24));
          memcpy(((ForAnyElementType *)(puVar11 + 3))->Data,_Src,(longlong)iVar14 * 2);
        }
        puVar11[5] = *(undefined8 *)(lVar2 + 0x28);
        uVar7 = *(undefined8 *)(lVar2 + 0x38);
        puVar11[6] = *(undefined8 *)(lVar2 + 0x30);
        puVar11[7] = uVar7;
        puVar11[8] = *(undefined8 *)(lVar2 + 0x40);
        *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(lVar2 + 0x48);
        *(undefined4 *)((longlong)puVar11 + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
        *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(lVar2 + 0x50);
        *(undefined4 *)((longlong)puVar11 + 0x54) = *(undefined4 *)(lVar2 + 0x54);
        uVar7 = *(undefined8 *)(lVar2 + 0x60);
        puVar11[0xb] = *(undefined8 *)(lVar2 + 0x58);
        puVar11[0xc] = uVar7;
        uVar7 = *(undefined8 *)(lVar2 + 0x70);
        puVar11[0xd] = *(undefined8 *)(lVar2 + 0x68);
        puVar11[0xe] = uVar7;
        uVar7 = *(undefined8 *)(lVar2 + 0x80);
        puVar11[0xf] = *(undefined8 *)(lVar2 + 0x78);
        puVar11[0x10] = uVar7;
        puVar11[0x11] = *(undefined8 *)(lVar2 + 0x88);
      }
      piVar13 = &(this->Elements).Array.ArrayMax;
      pFVar12 = (pTVar1->Array).AllocatorInstance.Data;
      local_48[0] = puVar11;
      if (((pFVar12 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar12 + (longlong)*piVar13 * 8)) &&
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
      iVar14 = (this->Elements).Array.ArrayNum;
      if (iVar14 == *piVar13) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pTVar1,piVar13);
      }
      (this->Elements).Array.ArrayNum = iVar14 + 1;
      *(undefined8 **)((pTVar1->Array).AllocatorInstance.Data + (longlong)iVar14 * 8) = local_48[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UModelComponent *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8 = local_res8 + 8;
      puVar11[1] = this;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (param_1->Elements).Array.ArrayNum);
  }
  pUVar4 = (this->ModelBodySetup).field0_0x0.DebugPtr;
  if ((pUVar4 != (UBodySetup *)0x0) &&
     (pUVar5 = (param_1->ModelBodySetup).field0_0x0.DebugPtr, pUVar5 != (UBodySetup *)0x0)) {
    uVar15 = (pUVar5->BodySetupGuid).B;
    uVar10 = (pUVar5->BodySetupGuid).C;
    uVar8 = (pUVar5->BodySetupGuid).D;
    (pUVar4->BodySetupGuid).A = (pUVar5->BodySetupGuid).A;
    (pUVar4->BodySetupGuid).B = uVar15;
    (pUVar4->BodySetupGuid).C = uVar10;
    (pUVar4->BodySetupGuid).D = uVar8;
  }
  return;
}

// CreateModelBodySetup @ 1478c1790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UModelComponent::CreateModelBodySetup(UModelComponent *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  UClass *pUVar7;
  UBodySetup *pUVar8;
  FGuid *pFVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  FGuid local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->ModelBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UBodySetup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar7);
    local_98._8_8_ = this;
    pUVar8 = (UBodySetup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UBodySetup *)0x0)) {
      (this->ModelBodySetup).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 == (UBodySetup *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ModelBodySetup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                           ,0x25e,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      (this->ModelBodySetup).field0_0x0.DebugPtr = pUVar8;
    }
    pFVar9 = FGuid::NewGuid(&local_a8);
    uVar3 = pFVar9->B;
    uVar4 = pFVar9->C;
    uVar5 = pFVar9->D;
    pUVar8 = (this->ModelBodySetup).field0_0x0.DebugPtr;
    (pUVar8->BodySetupGuid).A = pFVar9->A;
    (pUVar8->BodySetupGuid).B = uVar3;
    (pUVar8->BodySetupGuid).C = uVar4;
    (pUVar8->BodySetupGuid).D = uVar5;
  }
  *(undefined1 *)((longlong)&((this->ModelBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 3;
  ((this->ModelBodySetup).field0_0x0.DebugPtr)->bGenerateMirroredCollision = '\0';
  ((this->ModelBodySetup).field0_0x0.DebugPtr)->bDoubleSidedGeometry = '\x01';
  return;
}

// GetBodySetup @ 1478cfc30

UBodySetup * __thiscall UModelComponent::GetBodySetup(UModelComponent *this)

{
  return (this->ModelBodySetup).field0_0x0.DebugPtr;
}

// GetMaterial @ 1478d5e30

UMaterialInterface * __thiscall UModelComponent::GetMaterial(UModelComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Elements).Array.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Elements).Array.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInterface *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMaterialInterface **)
            (*(longlong *)((this->Elements).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
            0x10);
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialFromCollisionFaceIndex @ 1478d5f30

UMaterialInterface * __thiscall
UModelComponent::GetMaterialFromCollisionFaceIndex(UModelComponent *this,int param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  *param_2 = 0;
  if (param_1 < 0) {
    return (UMaterialInterface *)0x0;
  }
  uVar6 = 0;
  iVar7 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Elements).Array.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      lVar1 = *(longlong *)((this->Elements).Array.AllocatorInstance.Data + lVar8);
      iVar7 = iVar7 + *(int *)(lVar1 + 0x4c);
      if (param_1 < iVar7) {
        pUVar5 = *(UMaterialInterface **)(lVar1 + 0x10);
        *param_2 = uVar6;
        return pUVar5;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->Elements).Array.ArrayNum);
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 1478d66f0

int __thiscall UModelComponent::GetNumMaterials(UModelComponent *this)

{
  return (this->Elements).Array.ArrayNum;
}

// GetPhysicsTriMeshData @ 1478d7d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModelComponent::GetPhysicsTriMeshData
          (UModelComponent *this,FTriMeshCollisionData *param_1,bool param_2)

{
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  int iVar19;
  UPhysicsSettings *pUVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined2 local_138 [4];
  undefined8 local_130;
  uint local_128;
  int local_120;
  int *local_118;
  longlong local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8 [10];
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Model",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                          ,0x27e,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    uVar17 = (*pcVar10)();
    return (bool)uVar17;
  }
  local_120 = 0;
  pUVar20 = UPhysicsSettings::Get();
  fVar3 = *(float *)((longlong)&pUVar20->_padding_ + 4);
  pUVar20 = UPhysicsSettings::Get();
  pTVar1 = &param_1->UVs;
  bVar16 = pUVar20->bSupportUVFromHitResults;
  if (bVar16 != false) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,1,&pTVar1->AllocatorInstance,&(param_1->UVs).ArrayNum,
                        &(param_1->UVs).ArrayMax);
    pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)(pFVar21 + 8) = 0;
  }
  piVar2 = &(param_1->Vertices).ArrayNum;
  iVar19 = *(int *)(*(longlong *)&this->field_0x8 + 0xe8);
  local_118 = piVar2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar19,(ForAnyElementType *)param_1,piVar2,&(param_1->Vertices).ArrayMax);
  if (bVar16 != false) {
    if (((param_1->UVs).ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      uVar17 = (*pcVar10)();
      return (bool)uVar17;
    }
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar19,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 8),
               (int *)(pFVar21 + 0xc));
    local_118 = piVar2;
  }
  uVar22 = 0;
  local_110 = (longlong)iVar19;
  if (0 < iVar19) {
    lVar34 = 0;
    lVar33 = 0;
    lVar28 = 0;
    lVar31 = 0;
    do {
      lVar27 = *(longlong *)&this->field_0x8;
      uVar29 = ~uVar22 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar22 < *(int *)(lVar27 + 0xe8)) {
        uVar32 = uVar29;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      lVar27 = *(longlong *)(lVar27 + 0xe0);
      uVar8 = *(undefined8 *)(lVar27 + lVar28);
      uVar9 = *(undefined4 *)(lVar27 + 8 + lVar28);
      uVar32 = 0;
      if ((int)uVar22 < *local_118) {
        uVar32 = uVar29;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      pFVar21 = (param_1->Vertices).AllocatorInstance.Data;
      *(undefined8 *)(pFVar21 + lVar31) = uVar8;
      *(undefined4 *)(pFVar21 + lVar31 + 8) = uVar9;
      if (bVar16 != false) {
        lVar27 = *(longlong *)&this->field_0x8;
        uVar32 = 0;
        if ((int)uVar22 < *(int *)(lVar27 + 0xe8)) {
          uVar32 = uVar29;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        lVar27 = *(longlong *)(lVar27 + 0xe0);
        fVar4 = *(float *)(lVar27 + 0x30 + lVar28);
        fVar5 = *(float *)(lVar27 + 0x34 + lVar28);
        if (((param_1->UVs).ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        pFVar21 = (param_1->UVs).AllocatorInstance.Data;
        uVar32 = 0;
        if ((int)uVar22 < *(int *)(pFVar21 + 8)) {
          uVar32 = uVar29;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        lVar27 = *(longlong *)pFVar21;
        *(double *)(lVar27 + lVar33) = (double)fVar4;
        *(double *)(lVar27 + 8 + lVar33) = (double)fVar5;
      }
      uVar22 = uVar22 + 1;
      lVar34 = lVar34 + 1;
      lVar31 = lVar31 + 0xc;
      lVar28 = lVar28 + 0x40;
      lVar33 = lVar33 + 0x10;
    } while (lVar34 < local_110);
  }
  dVar15 = __real_3fe0000000000000;
  iVar19 = *(int *)&this->field_0x38;
  uVar22 = 0;
  if (0 < iVar19) {
    do {
      uVar32 = 0;
      if ((int)uVar22 < iVar19) {
        uVar32 = ~uVar22 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      lVar28 = *(longlong *)(*(longlong *)&this->field_0x30 + (longlong)(int)uVar22 * 8);
      iVar19 = *(int *)(lVar28 + 0x4c);
      if (iVar19 != 0) {
        lVar31 = *(longlong *)(lVar28 + 0x40);
        if (lVar31 == 0) {
          if (2 < (byte)LogPhysics._0_1_) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)&this[-1].field_0x48,&local_108,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (*(int *)(*(longlong *)&this->field_0x8 + 0xe8) < *(int *)(lVar28 + 0x54)) {
          if (2 < (byte)LogPhysics._0_1_) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)&this[-1].field_0x48,&local_f8,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (*(int *)(lVar31 + 0x30) < iVar19 * 2 + -1 + *(int *)(lVar28 + 0x48) + iVar19) {
          if (2 < (byte)LogPhysics._0_1_) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)&this[-1].field_0x48,&local_e8,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar29 = 0;
          uVar32 = uVar29;
          if (iVar19 != 0) {
            do {
              uVar30 = 0;
              uVar23 = *(int *)(lVar28 + 0x48) + uVar32;
              local_130 = 0;
              local_128 = 0;
              uVar25 = uVar30;
              if ((int)uVar23 < *(int *)(lVar31 + 0x30)) {
                uVar25 = ~uVar23 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              uVar24 = *(int *)(lVar28 + 0x48) + 1 + uVar32;
              local_130 = CONCAT44(local_130._4_4_,
                                   *(undefined4 *)
                                    (*(longlong *)(lVar31 + 0x28) + (longlong)(int)uVar23 * 4));
              uVar25 = uVar30;
              if ((int)uVar24 < *(int *)(lVar31 + 0x30)) {
                uVar25 = ~uVar24 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              uVar25 = *(int *)(lVar28 + 0x48) + 2 + uVar32;
              local_130 = CONCAT44(*(undefined4 *)
                                    (*(longlong *)(lVar31 + 0x28) + (longlong)(int)uVar24 * 4),
                                   (uint)local_130);
              if ((int)uVar25 < *(int *)(lVar31 + 0x30)) {
                uVar30 = ~uVar25 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              local_128 = *(uint *)(*(longlong *)(lVar31 + 0x28) + (longlong)(int)uVar25 * 4);
              if (fVar3 < 0.0) {
LAB_1478d863b:
                pFVar21 = (param_1->Indices).AllocatorInstance.Data;
                if (((pFVar21 <= (FScriptContainerElement *)&local_130) &&
                    ((FScriptContainerElement *)&local_130 <
                     pFVar21 + (longlong)(param_1->Indices).ArrayMax * 0xc)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                iVar19 = (param_1->Indices).ArrayNum;
                piVar2 = &(param_1->Indices).ArrayMax;
                if (iVar19 == *piVar2) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&(param_1->Indices).AllocatorInstance,piVar2);
                }
                (param_1->Indices).ArrayNum = iVar19 + 1;
                pFVar21 = (param_1->Indices).AllocatorInstance.Data;
                *(undefined8 *)(pFVar21 + (longlong)iVar19 * 0xc) = local_130;
                *(uint *)(pFVar21 + (longlong)iVar19 * 0xc + 8) = local_128;
                pFVar21 = (param_1->MaterialIndices).AllocatorInstance.Data;
                local_138[0] = (undefined2)uVar22;
                if (((pFVar21 <= (FScriptContainerElement *)local_138) &&
                    ((FScriptContainerElement *)local_138 <
                     pFVar21 + (longlong)(param_1->MaterialIndices).ArrayMax * 2)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                iVar19 = (param_1->MaterialIndices).ArrayNum;
                piVar2 = &(param_1->MaterialIndices).ArrayMax;
                if (iVar19 == *piVar2) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&(param_1->MaterialIndices).AllocatorInstance,piVar2);
                }
                (param_1->MaterialIndices).ArrayNum = iVar19 + 1;
                *(undefined2 *)
                 ((param_1->MaterialIndices).AllocatorInstance.Data + (longlong)iVar19 * 2) =
                     local_138[0];
              }
              else {
                lVar34 = (longlong)(int)(uint)local_130;
                lVar33 = *(longlong *)&this->field_0x8;
                uVar25 = 0;
                if ((int)(uint)local_130 < *(int *)(lVar33 + 0xe8)) {
                  uVar25 = ~(uint)local_130 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                lVar33 = *(longlong *)(lVar33 + 0xe0);
                lVar26 = (longlong)(int)local_130._4_4_;
                lVar27 = *(longlong *)&this->field_0x8;
                lVar34 = lVar34 * 0x40;
                fVar4 = *(float *)(lVar34 + lVar33);
                uVar25 = 0;
                if ((int)local_130._4_4_ < *(int *)(lVar27 + 0xe8)) {
                  uVar25 = ~local_130._4_4_ >> 0x1f;
                }
                dVar37 = (double)*(float *)(lVar34 + 4 + lVar33);
                dVar14 = (double)*(float *)(lVar34 + 8 + lVar33);
                if ((uVar25 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                lVar33 = *(longlong *)(lVar27 + 0xe0);
                lVar27 = (longlong)(int)local_128;
                lVar34 = *(longlong *)&this->field_0x8;
                lVar26 = lVar26 * 0x40;
                fVar5 = *(float *)(lVar26 + lVar33);
                fVar6 = *(float *)(lVar26 + 4 + lVar33);
                fVar7 = *(float *)(lVar26 + 8 + lVar33);
                uVar25 = 0;
                if ((int)local_128 < *(int *)(lVar34 + 0xe8)) {
                  uVar25 = ~local_128 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  uVar17 = (*pcVar10)();
                  return (bool)uVar17;
                }
                lVar33 = *(longlong *)(lVar34 + 0xe0);
                dVar11 = (double)fVar7 - dVar14;
                dVar12 = (double)fVar5 - (double)fVar4;
                lVar27 = lVar27 * 0x40;
                dVar13 = (double)fVar6 - dVar37;
                dVar14 = (double)*(float *)(lVar27 + 8 + lVar33) - dVar14;
                dVar37 = (double)*(float *)(lVar27 + 4 + lVar33) - dVar37;
                dVar39 = (double)*(float *)(lVar27 + lVar33) - (double)fVar4;
                dVar38 = dVar39 * dVar11 - dVar14 * dVar12;
                auVar35._0_8_ = dVar37 * dVar11;
                auVar35._8_8_ = 0;
                dVar14 = dVar14 * dVar13 - auVar35._0_8_;
                dVar37 = dVar37 * dVar12 - dVar39 * dVar13;
                auVar36._8_8_ = 0;
                auVar36._0_8_ = dVar14 * dVar14 + dVar38 * dVar38 + dVar37 * dVar37;
                auVar36 = sqrtpd(auVar35,auVar36);
                if (fVar3 < (float)(auVar36._0_8_ * dVar15)) goto LAB_1478d863b;
                local_120 = local_120 + 1;
              }
              uVar29 = uVar29 + 1;
              uVar32 = uVar32 + 3;
            } while (uVar29 < *(uint *)(lVar28 + 0x4c));
          }
        }
      }
      iVar19 = *(int *)&this->field_0x38;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < iVar19);
    if ((0 < local_120) && (4 < (byte)LogPhysics._0_1_)) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1].field_0x48,local_d8,
                 *(UObject **)&this[-1].field_0x68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if (local_d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8[0].Data.AllocatorInstance.Data);
      }
    }
  }
  param_1->bFlipNormals = 1;
  return true;
}

// GetPrivateStaticClass @ 1478d9a70

UClass * __cdecl UModelComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ModelComponent",
               &Z_Registration_Info_UClass_UModelComponent.InnerSingleton,
               StaticRegisterNativesUModelComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UModelComponent>,
               InternalVTableHelperCtorCaller<UModelComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelComponent.InnerSingleton;
}

// GetStaticLightingType @ 1478dc0f0

ELightMapInteractionType __thiscall UModelComponent::GetStaticLightingType(UModelComponent *this)

{
  return LMIT_Texture;
}

// GetStreamingRenderAssetInfo @ 1478dc180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UModelComponent::GetStreamingRenderAssetInfo
          (UModelComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  UModel *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  uint uVar13;
  UMaterial *pUVar14;
  UClass *pUVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined4 uVar45;
  undefined1 auStackY_238 [32];
  ForAnyElementType local_1e8;
  int local_1e0;
  int iStack_1dc;
  Type local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8;
  int iStack_1c4;
  uint local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  undefined1 local_1a4 [2];
  undefined1 local_1a2;
  longlong local_1a0;
  longlong local_198;
  TVector<double>_u_0 local_190;
  TPairInitializer<int_const_&,int_&&> local_178;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *local_168;
  FScriptContainerElement *local_160;
  uint *local_158;
  TVector<double>_u_0 local_150;
  undefined8 local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  undefined8 local_e8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((this->Model).field0_0x0.DebugPtr != (UModel *)0x0) {
    uVar26 = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    uVar18 = uVar26;
    uVar29 = uVar26;
    local_168 = param_2;
    if (0 < (this->Nodes).ArrayNum) {
      do {
        uVar25 = (uint)uVar18;
        pUVar2 = (this->Model).field0_0x0.DebugPtr;
        uVar13 = 0;
        if ((int)uVar25 < (this->Nodes).ArrayNum) {
          uVar13 = ~uVar25 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(ushort *)((this->Nodes).AllocatorInstance.Data + uVar29);
        if (((pUVar2->Nodes).ArrayNum <= (int)(uint)uVar1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar23 = (pUVar2->Nodes).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)uVar25 < (this->Nodes).ArrayNum) {
          uVar13 = ~uVar25 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_160 = pFVar23 + (ulonglong)uVar1 * 0x40 + 0x14;
        local_158 = &local_1a8;
        local_1a8 = (uint)*(ushort *)((this->Nodes).AllocatorInstance.Data + uVar29);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_d8,&local_178,(bool *)&local_160);
        uVar18 = (ulonglong)(uVar25 + 1);
        uVar29 = uVar29 + 2;
      } while ((int)(uVar25 + 1) < (this->Nodes).ArrayNum);
    }
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = 0;
    iStack_1dc = 0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    iStack_1c4 = 0;
    local_1c0 = 0;
    if (0 < (((this->Model).field0_0x0.DebugPtr)->Surfs).ArrayNum) {
      local_1a0 = 0;
      lVar28 = local_d8.Elements._0_8_;
      do {
        lVar19 = local_1a0;
        uVar25 = 0;
        uVar13 = (uint)uVar26;
        local_1e0 = 0;
        if (iStack_1dc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_1e8,0,&iStack_1dc);
          lVar28 = local_d8.Elements._0_8_;
        }
        if (local_d8.HashSize != 0) {
          FVar16 = (ForElementType<FSetElementId>)&local_d8.Hash;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_d8.Hash.SecondaryData;
          }
          iVar22 = *(int *)((longlong)FVar16 + (longlong)(int)(local_d8.HashSize - 1U & uVar13) * 4)
          ;
          do {
            iVar24 = iVar22;
            if (iVar24 == -1) goto LAB_1478dc55b;
            iVar22 = *(int *)(lVar28 + 8 + (longlong)iVar24 * 0x10);
          } while (*(uint *)(lVar28 + (longlong)iVar24 * 0x10) != uVar13);
          if (iVar24 != -1) {
            do {
              pFVar23 = (FScriptContainerElement *)(lVar28 + 4 + (longlong)iVar24 * 0x10);
              if (((local_1e8.Data <= pFVar23) &&
                  (pFVar23 < local_1e8.Data + (longlong)iStack_1dc * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_1e0 == iStack_1dc) {
                local_1e0 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_1e8,&iStack_1dc);
              }
              lVar28 = (longlong)local_1e0;
              local_1e0 = local_1e0 + 1;
              *(undefined4 *)(local_1e8.Data + lVar28 * 4) = *(undefined4 *)pFVar23;
              do {
                iVar24 = iVar22;
                lVar28 = local_d8.Elements._0_8_;
                if (iVar24 == -1) goto LAB_1478dc55b;
                iVar22 = *(int *)(local_d8.Elements._0_8_ + 8 + (longlong)iVar24 * 0x10);
              } while (*(uint *)(local_d8.Elements._0_8_ + (longlong)iVar24 * 0x10) != uVar13);
            } while( true );
          }
        }
LAB_1478dc55b:
        if (local_1e0 != 0) {
          pUVar2 = (this->Model).field0_0x0.DebugPtr;
          uVar17 = uVar25;
          if ((int)uVar13 < (pUVar2->Surfs).ArrayNum) {
            uVar17 = ~uVar13 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar23 = (pUVar2->Surfs).AllocatorInstance.Data;
          local_1c8 = 0;
          local_178.Value = (int *)pFVar23;
          if (iStack_1c4 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_1d0,0,&iStack_1c4);
          }
          if (0 < local_1e0) {
            local_198 = 0;
            do {
              lVar28 = local_198;
              pUVar2 = (this->Model).field0_0x0.DebugPtr;
              uVar13 = 0;
              if ((int)uVar25 < local_1e0) {
                uVar13 = ~uVar25 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar13 = *(uint *)(local_1e8.Data + lVar28);
              uVar17 = 0;
              if ((int)uVar13 < (pUVar2->Nodes).ArrayNum) {
                uVar17 = ~uVar13 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar23 = (pUVar2->Nodes).AllocatorInstance.Data;
              lVar28 = (longlong)(int)uVar13 * 0x40;
              iVar22 = 0;
              if (pFVar23[lVar28 + 0x36] != (FScriptContainerElement)0x0) {
                do {
                  pUVar2 = (this->Model).field0_0x0.DebugPtr;
                  uVar17 = *(int *)(pFVar23 + lVar28 + 0x10) + iVar22;
                  uVar13 = 0;
                  if ((int)uVar17 < (pUVar2->Verts).ArrayNum) {
                    uVar13 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar13 = *(uint *)((pUVar2->Verts).AllocatorInstance.Data +
                                    (longlong)(int)uVar17 * 0x18);
                  lVar19 = (longlong)(int)uVar13;
                  uVar17 = 0;
                  if ((int)uVar13 < (pUVar2->Points).ArrayNum) {
                    uVar17 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar27 = (pUVar2->Points).AllocatorInstance.Data;
                  dVar9 = *(double *)&this->field_0x208;
                  local_120 = (double)*(float *)(pFVar27 + lVar19 * 0xc + 8);
                  local_118 = *(undefined1 (*) [16])&this->field_0x1f0;
                  dVar7 = local_120 * *(double *)&this->field_0x240;
                  dVar8 = *(double *)&this->field_0x248 * 0.0;
                  dVar32 = (double)*(float *)(pFVar27 + lVar19 * 0xc + 4);
                  auVar33 = blendpd(local_118,*(undefined1 (*) [16])&this->field_0x200,2);
                  local_130._8_4_ = SUB84(dVar32,0);
                  local_130._0_8_ = (double)*(float *)(pFVar27 + lVar19 * 0xc);
                  local_130._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                  dVar6 = (double)*(float *)(pFVar27 + lVar19 * 0xc) * *(double *)&this->field_0x230
                  ;
                  dVar32 = dVar32 * *(double *)&this->field_0x238;
                  auVar40._8_4_ = SUB84(dVar32,0);
                  auVar40._0_8_ = dVar6;
                  auVar40._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                  auVar35._8_4_ = SUB84(dVar8,0);
                  auVar35._0_8_ = dVar7;
                  auVar35._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  auVar35 = blendpd(auVar40,auVar35,2);
                  auVar36._0_8_ =
                       auVar35._0_8_ * *(double *)&this->field_0x200 - auVar33._0_8_ * dVar7;
                  auVar36._8_8_ =
                       auVar35._8_8_ * *(double *)&this->field_0x208 - auVar33._8_8_ * dVar8;
                  auVar35 = blendpd(*(undefined1 (*) [16])&this->field_0x1f0,
                                    *(undefined1 (*) [16])&this->field_0x200,2);
                  dVar8 = dVar7 * local_118._8_8_ - *(double *)&this->field_0x200 * dVar32;
                  auVar42._8_4_ = SUB84(dVar8,0);
                  auVar42._0_8_ = dVar32 * local_118._0_8_ - local_118._8_8_ * dVar6;
                  auVar42._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  auVar33 = blendpd(auVar42,auVar36,2);
                  dVar8 = dVar8 + dVar8;
                  dVar5 = auVar36._0_8_ + auVar36._0_8_;
                  uVar45 = (undefined4)((ulonglong)dVar5 >> 0x20);
                  auVar43._0_8_ = auVar33._0_8_ + auVar33._0_8_;
                  auVar43._8_8_ = auVar33._8_8_ + auVar33._8_8_;
                  auVar37._8_4_ = SUB84(dVar5,0);
                  auVar37._0_8_ = dVar8;
                  auVar37._12_4_ = uVar45;
                  auVar39._8_4_ = SUB84(dVar5,0);
                  auVar39._0_8_ = dVar8;
                  auVar39._12_4_ = uVar45;
                  auVar40 = blendpd(auVar39,auVar43,2);
                  dVar38 = auVar43._0_8_ * *(double *)&this->field_0x1f8 -
                           *(double *)&this->field_0x200 * dVar5;
                  auVar33._8_4_ = SUB84(dVar38,0);
                  auVar33._0_8_ =
                       auVar37._8_8_ * *(double *)&this->field_0x1f0 -
                       *(double *)&this->field_0x1f8 * dVar8;
                  auVar33._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                  auVar41._0_8_ =
                       auVar40._0_8_ * *(double *)&this->field_0x200 - auVar35._0_8_ * auVar43._0_8_
                  ;
                  auVar41._8_8_ =
                       auVar40._8_8_ * *(double *)&this->field_0x208 - auVar35._8_8_ * auVar43._8_8_
                  ;
                  auVar35 = blendpd(auVar33,auVar41,2);
                  local_190._s_0.X = dVar38 + dVar8 * dVar9 + dVar6 + *(double *)&this->field_0x210;
                  local_190._s_0.Y =
                       auVar41._0_8_ + dVar5 * dVar9 + dVar32 + *(double *)&this->field_0x218;
                  local_190._s_0.Z =
                       auVar43._0_8_ * dVar9 + dVar7 + auVar35._0_8_ + *(double *)&this->field_0x220
                  ;
                  if (((local_1d0.Data <= &local_190) &&
                      (&local_190 <
                       (TVector<double>_u_0 *)(local_1d0.Data + (longlong)iStack_1c4 * 0x18))) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (local_1c8 == iStack_1c4) {
                    local_1c8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x818,&local_1d0,&iStack_1c4);
                  }
                  lVar19 = (longlong)local_1c8;
                  iVar22 = iVar22 + 1;
                  local_1c8 = local_1c8 + 1;
                  *(double *)(local_1d0.Data + lVar19 * 0x18) = local_190._s_0.X;
                  *(double *)(local_1d0.Data + lVar19 * 0x18 + 8) = local_190._s_0.Y;
                  *(double *)(local_1d0.Data + lVar19 * 0x18 + 0x10) = local_190._s_0.Z;
                } while (iVar22 < (int)(uint)(byte)pFVar23[lVar28 + 0x36]);
              }
              uVar25 = uVar25 + 1;
              local_198 = local_198 + 4;
              pFVar23 = (FScriptContainerElement *)local_178.Value;
              lVar19 = local_1a0;
              uVar13 = local_1c0;
            } while ((int)uVar25 < local_1e0);
          }
          UE::Math::TSphere<double>::TSphere<double>
                    ((TSphere<double> *)&local_150._s_0,(TVector<double> *)local_1d0.Data,local_1c8)
          ;
          fVar10 = UModel::BSPTexelScale;
          uVar25 = *(uint *)(pFVar23 + lVar19 + 0x18);
          lVar28 = (longlong)(int)uVar25;
          pFVar27 = (FScriptContainerElement *)0x0;
          pUVar2 = (this->Model).field0_0x0.DebugPtr;
          uVar17 = 0;
          if ((int)uVar25 < (pUVar2->Vectors).ArrayNum) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar30 = (pUVar2->Vectors).AllocatorInstance.Data;
          uVar25 = *(uint *)(pFVar23 + lVar19 + 0x14);
          lVar20 = (longlong)(int)uVar25;
          pUVar2 = (this->Model).field0_0x0.DebugPtr;
          uVar17 = 0;
          if ((int)uVar25 < (pUVar2->Vectors).ArrayNum) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          fVar44 = SQRT(*(float *)(pFVar30 + lVar28 * 0xc) * *(float *)(pFVar30 + lVar28 * 0xc) +
                        *(float *)(pFVar30 + lVar28 * 0xc + 4) *
                        *(float *)(pFVar30 + lVar28 * 0xc + 4) +
                        *(float *)(pFVar30 + lVar28 * 0xc + 8) *
                        *(float *)(pFVar30 + lVar28 * 0xc + 8));
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar30 = (pUVar2->Vectors).AllocatorInstance.Data;
          pUVar14 = *(UMaterial **)(pFVar23 + lVar19);
          fVar31 = SQRT(*(float *)(pFVar30 + lVar20 * 0xc) * *(float *)(pFVar30 + lVar20 * 0xc) +
                        *(float *)(pFVar30 + lVar20 * 0xc + 4) *
                        *(float *)(pFVar30 + lVar20 * 0xc + 4) +
                        *(float *)(pFVar30 + lVar20 * 0xc + 8) *
                        *(float *)(pFVar30 + lVar20 * 0xc + 8));
          if (fVar31 <= fVar44) {
            fVar31 = fVar44;
          }
          if (pUVar14 == (UMaterial *)0x0) {
            pUVar14 = UMaterial::GetDefaultMaterial(MD_Surface);
          }
          local_1b8 = (void *)0x0;
          local_1b0 = 0;
          local_1a2 = 0;
          pcVar4 = *(code **)(pUVar14->_padding_ + 0x330);
          local_1d8[0] = GetCurrentMaterialQualityLevelChecked();
          local_1d8[1] = 1;
          (*pcVar4)(pUVar14,&local_1b8,local_1d8,local_1a4);
          pTVar11 = local_168;
          pFVar23 = pFVar27;
          pFVar30 = pFVar27;
          if (0 < (int)local_1b0) {
            do {
              uVar25 = (uint)pFVar23;
              uVar13 = 0;
              if ((int)uVar25 < (int)local_1b0) {
                uVar13 = ~uVar25 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar3 = *(UObject **)(pFVar30 + (longlong)local_1b8);
              if (pUVar3 != (UObject *)0x0) {
                pUVar15 = Z_Construct_UClass_UTexture2D_NoRegister();
                iVar22 = (int)pUVar15->_padding_;
                if ((iVar22 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar22 * 8)
                    == &pUVar15->_padding_)) {
                  uVar13 = pTVar11->ArrayNum;
                  if (uVar13 == pTVar11->ArrayMax) {
                    uVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x850,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
                  }
                  pTVar11->ArrayNum = uVar13 + 1;
                  uVar17 = 0;
                  if ((int)uVar13 < (int)(uVar13 + 1)) {
                    uVar17 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar21 = (pTVar11->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x50;
                  pFVar23 = pFVar27;
                  if (pFVar21 != (FScriptContainerElement *)0x0) {
                    *(uint *)(pFVar21 + 0x48) = *(uint *)(pFVar21 + 0x48) & 0xfffffffe;
                    *(uint *)(pFVar21 + 0x48) = *(uint *)(pFVar21 + 0x48) | 2;
                    *(undefined8 *)pFVar21 = 0;
                    *(undefined8 *)(pFVar21 + 8) = 0;
                    *(undefined8 *)(pFVar21 + 0x10) = 0;
                    *(undefined8 *)(pFVar21 + 0x18) = 0;
                    *(undefined8 *)(pFVar21 + 0x20) = 0;
                    *(undefined8 *)(pFVar21 + 0x28) = 0;
                    *(undefined8 *)(pFVar21 + 0x30) = 0;
                    *(undefined8 *)(pFVar21 + 0x38) = 0;
                    *(undefined8 *)(pFVar21 + 0x40) = 0x3f800000;
                    pFVar23 = pFVar21;
                  }
                  *(double *)(pFVar23 + 8) = local_150._s_0.X;
                  *(double *)(pFVar23 + 0x10) = local_150._s_0.Y;
                  *(double *)(pFVar23 + 0x18) = local_150._s_0.Z;
                  *(undefined8 *)(pFVar23 + 0x20) = local_138;
                  auVar34._8_8_ = local_138;
                  auVar34._0_8_ = local_138;
                  *(undefined1 (*) [16])(pFVar23 + 0x28) = auVar34;
                  *(undefined8 *)(pFVar23 + 0x38) = local_138;
                  *(float *)(pFVar23 + 0x40) = fVar10 / fVar31;
                  local_e8 = local_138;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar3);
                  }
                  *(UObject **)pFVar23 = pUVar3;
                }
              }
              pFVar23 = (FScriptContainerElement *)(ulonglong)(uVar25 + 1);
              lVar19 = local_1a0;
              pFVar30 = pFVar30 + 8;
              uVar13 = local_1c0;
            } while ((int)(uVar25 + 1) < (int)local_1b0);
          }
          lVar28 = local_d8.Elements._0_8_;
          if (local_1b8 != (void *)0x0) {
            FMemory::Free(local_1b8);
            lVar28 = local_d8.Elements._0_8_;
          }
        }
        local_1c0 = uVar13 + 1;
        uVar26 = (ulonglong)local_1c0;
        local_1a0 = lVar19 + 0x50;
      } while ((int)local_1c0 < (((this->Model).field0_0x0.DebugPtr)->Surfs).ArrayNum);
    }
    if ((TVector<double>_u_0 *)local_1d0.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
  }
  return;
}

// GetTriMeshSizeEstimates @ 1478dd9c0

bool __thiscall
UModelComponent::GetTriMeshSizeEstimates
          (UModelComponent *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Model",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                       ,0x277,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  param_1->VerticeCount = (longlong)*(int *)(*(longlong *)&this->field_0x8 + 0xe8);
  return true;
}

// GetUsedMaterials @ 1478de270

void __thiscall
UModelComponent::GetUsedMaterials
          (UModelComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_18 [2];
  
  uVar7 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Elements).Array.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)
               (*(longlong *)((this->Elements).Array.AllocatorInstance.Data + lVar8) + 0x10);
      if (lVar1 != 0) {
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_18[0] = lVar1;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->Elements).Array.ArrayNum);
  }
  return;
}

// IsNameStableForNetworking @ 1478e1370

bool __thiscall UModelComponent::IsNameStableForNetworking(UModelComponent *this)

{
  return true;
}

// IsPrecomputedLightingValid @ 1478e1790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UModelComponent::IsPrecomputedLightingValid(UModelComponent *this)

{
  int iVar1;
  longlong lVar2;
  ULevel *pUVar3;
  UWorld *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UClass *pUVar9;
  UMapBuildDataRegistry *this_00;
  FMeshMapBuildData *pFVar10;
  uint uVar11;
  longlong lVar12;
  FGuid local_18;
  
  uVar11 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Elements).Array.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar2 = *(longlong *)((this->Elements).Array.AllocatorInstance.Data + lVar12);
      if ((*(longlong *)(lVar2 + 8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Component",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                             ,0x39,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pUVar3 = *(ULevel **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x550) + 0x20);
      if (pUVar3 != (ULevel *)0x0) {
        pUVar9 = Z_Construct_UClass_ULevel_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar9->_padding_)) &&
            (pUVar4 = (pUVar3->OwningWorld).field0_0x0.DebugPtr, pUVar4 != (UWorld *)0x0)) &&
           (this_00 = UMapBuildDataRegistry::Get(pUVar3,pUVar4),
           this_00 != (UMapBuildDataRegistry *)0x0)) {
          local_18._0_8_ = *(undefined8 *)(lVar2 + 0x30);
          local_18._8_8_ = *(undefined8 *)(lVar2 + 0x38);
          pFVar10 = UMapBuildDataRegistry::GetMeshBuildData(this_00,&local_18);
          if (pFVar10 != (FMeshMapBuildData *)0x0) {
            return true;
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (this->Elements).Array.ArrayNum);
  }
  return false;
}

// PostLoad @ 1478e7760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UModelComponent::PostLoad(UModelComponent *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  UClass *pUVar7;
  UBodySetup *pUVar8;
  FGuid *pFVar9;
  FPackageFileVersion FVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  FGuid local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  if ((this->Model).field0_0x0.DebugPtr == (UModel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Model",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                       ,0x11b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UObject::ConditionalPostLoad((UObject *)(this->Model).field0_0x0.DebugPtr);
  BuildRenderData(this);
  if ((this->ModelBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UBodySetup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar7);
    local_98._8_8_ = this;
    pUVar8 = (UBodySetup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar11 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UBodySetup *)0x0)) {
      (this->ModelBodySetup).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 == (UBodySetup *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ModelBodySetup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                           ,0x25e,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      (this->ModelBodySetup).field0_0x0.DebugPtr = pUVar8;
    }
    pFVar9 = FGuid::NewGuid(&local_b0);
    uVar3 = pFVar9->B;
    uVar4 = pFVar9->C;
    uVar5 = pFVar9->D;
    pUVar8 = (this->ModelBodySetup).field0_0x0.DebugPtr;
    (pUVar8->BodySetupGuid).A = pFVar9->A;
    (pUVar8->BodySetupGuid).B = uVar3;
    (pUVar8->BodySetupGuid).C = uVar4;
    (pUVar8->BodySetupGuid).D = uVar5;
    *(undefined1 *)((longlong)&((this->ModelBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 3;
    ((this->ModelBodySetup).field0_0x0.DebugPtr)->bGenerateMirroredCollision = '\0';
    ((this->ModelBodySetup).field0_0x0.DebugPtr)->bDoubleSidedGeometry = '\x01';
    if ((this->ModelBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelBodySetup != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                         ,0x125,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(((this->ModelBodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  }
  FVar10 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar10 < 0x145) &&
     (pUVar8 = (this->ModelBodySetup).field0_0x0.DebugPtr, pUVar8 != (UBodySetup *)0x0)) {
    pUVar8->bGenerateMirroredCollision = '\0';
  }
  ((this->ModelBodySetup).field0_0x0.DebugPtr)->bDoubleSidedGeometry = '\x01';
  return;
}

// Serialize @ 1478eebd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UModelComponent::Serialize(UModelComponent *this,FArchive *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FMeshMapBuildLegacyData *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_res8 [2];
  TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&> local_res10;
  ForAnyElementType local_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  undefined8 local_50;
  FMeshMapBuildLegacyData **local_48;
  FScriptContainerElement **local_40;
  
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Model);
  if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x14a)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  operator<<<FModelElement,TSizedDefaultAllocator<32>_>(param_1,&this->Elements);
  if (((param_1->field_0x28 & 1) != 0) && (0 < (this->Elements).Array.ArrayNum)) {
    uVar14 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    uVar16 = uVar14;
    uVar17 = uVar14;
    do {
      uVar15 = (uint)uVar16;
      uVar12 = 0;
      if ((int)uVar15 < (this->Elements).Array.ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = local_60 & 0xffffffff;
      }
      iVar13 = (int)uVar14;
      lVar4 = *(longlong *)((this->Elements).Array.AllocatorInstance.Data + uVar17);
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        if (iVar13 == local_60._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_68,(int *)((longlong)&local_60 + 4));
        }
        local_60 = CONCAT44(local_60._4_4_,iVar13 + 1U);
        uVar7 = *(undefined4 *)(lVar4 + 0x34);
        uVar8 = *(undefined4 *)(lVar4 + 0x38);
        uVar9 = *(undefined4 *)(lVar4 + 0x3c);
        pFVar2 = local_68.Data + (longlong)iVar13 * 0x18;
        *(undefined4 *)pFVar2 = *(undefined4 *)(lVar4 + 0x30);
        *(undefined4 *)(pFVar2 + 4) = uVar7;
        *(undefined4 *)(pFVar2 + 8) = uVar8;
        *(undefined4 *)(pFVar2 + 0xc) = uVar9;
        *(undefined8 *)(local_68.Data + (longlong)iVar13 * 0x18 + 0x10) =
             *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x28) = 0;
        uVar14 = (ulonglong)(iVar13 + 1U);
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar15 + 1) < (this->Elements).Array.ArrayNum);
    iVar13 = (int)uVar14;
    if (0 < iVar13) {
      local_58 = local_68.Data;
      uVar14 = local_60 >> 0x20;
      local_60 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_50 = CONCAT44((int)uVar14,iVar13);
      local_res10.Value = (FMeshMapBuildLegacyData *)this;
      if (iVar13 == 0) {
        FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
                  (&GComponentsWithLegacyLightmaps,(UObjectBase *)this);
      }
      else {
        AcquireSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
        uVar8 = GComponentsWithLegacyLightmaps.AnnotationMap._52_4_;
        uVar7 = GComponentsWithLegacyLightmaps.AnnotationMap._8_4_;
        local_48 = &local_res10.Value;
        local_40 = &local_58;
        TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&>_>
                  ((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                    *)&GComponentsWithLegacyLightmaps.AnnotationMap,&local_res10,(bool *)&local_48);
        pFVar10 = local_res10.Value;
        AcquireSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationCacheCritical);
        GComponentsWithLegacyLightmaps.AnnotationCacheKey = (UObjectBase *)pFVar10;
        if (GComponentsWithLegacyLightmaps.AnnotationCacheValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(GComponentsWithLegacyLightmaps.AnnotationCacheValue.Data.AllocatorInstance.
                        Data);
        }
        GComponentsWithLegacyLightmaps.AnnotationCacheValue.Data.AllocatorInstance.Data = local_58;
        GComponentsWithLegacyLightmaps.AnnotationCacheValue.Data.ArrayNum = (int)local_50;
        GComponentsWithLegacyLightmaps.AnnotationCacheValue.Data.ArrayMax = local_50._4_4_;
        local_50 = 0;
        local_58 = (FScriptContainerElement *)0x0;
        ReleaseSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationCacheCritical);
        ReleaseSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
        if (uVar7 == uVar8) {
          FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::ProcessRegistration
                    (&GComponentsWithLegacyLightmaps);
        }
      }
      if (local_58 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58);
      }
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  piVar1 = &this->ComponentIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&this->Nodes);
  return;
}

// Serialize @ 1478eef10

void __thiscall UModelComponent::Serialize(UModelComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// ShrinkElements @ 1478f77b0

void __thiscall UModelComponent::ShrinkElements(UModelComponent *this)

{
  int *piVar1;
  TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    pTVar2 = &this->Elements;
    lVar10 = 0;
    do {
      uVar13 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < (this->Elements).Array.ArrayNum) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = lVar10 * 8;
      lVar9 = lVar10;
      uVar11 = uVar12;
      if (*(int *)(*(longlong *)((pTVar2->Array).AllocatorInstance.Data + lVar3) + 0x20) == 0) {
        lVar9 = lVar10 + -1;
        uVar11 = uVar12 - 1;
        if ((lVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                               ,0x100,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->Elements).Array.ArrayNum <= (int)uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                               ,0x101,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar4 = *(undefined8 **)((pTVar2->Array).AllocatorInstance.Data + lVar3);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        uVar7 = 0;
        if ((int)uVar12 < (this->Elements).Array.ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Dst = (pTVar2->Array).AllocatorInstance.Data + lVar3;
        iVar8 = ~uVar12 + (this->Elements).Array.ArrayNum;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Elements).Array.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pTVar2,(this->Elements).Array.ArrayNum,
                   &(this->Elements).Array.ArrayMax);
      }
      uVar12 = uVar11 + 1;
      lVar10 = lVar9 + 1;
    } while ((int)uVar12 < (this->Elements).Array.ArrayNum);
  }
  return;
}

// StaticRegisterNativesUModelComponent @ 1478f8120

void __cdecl UModelComponent::StaticRegisterNativesUModelComponent(void)

{
  return;
}

// SupportsStaticLighting @ 1478f8610

bool __thiscall UModelComponent::SupportsStaticLighting(UModelComponent *this)

{
  return true;
}

// WantsNegXTriMesh @ 1478fe620

bool __thiscall UModelComponent::WantsNegXTriMesh(UModelComponent *this)

{
  return false;
}

// _getUObject @ 1478fff30

UObject * __thiscall UModelComponent::_getUObject(UModelComponent *this)

{
  return (UObject *)&this[-1].Nodes;
}

// _getUObject`adjustor{552}' @ 1478fff3c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UModelComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UModelComponent::_getUObject_adjustor_552__(UModelComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UModelComponent *)&this[-1].field_0x368);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1478fff50

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UModelComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UModelComponent::_getUObject_adjustor_560__(UModelComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UModelComponent *)&this[-1].field_0x360);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1478fff64

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UModelComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UModelComponent::_getUObject_adjustor_568__(UModelComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UModelComponent *)&this[-1].field_0x358);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1312}' @ 1478fff78

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UModelComponent::_getUObject`adjustor{1312}' (void)const __ptr64 */

UObject * __thiscall UModelComponent::_getUObject_adjustor_1312__(UModelComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UModelComponent *)&this[-1].field_0x70);
  return (UObject *)pUVar1;
}

// ApplyTempElements @ 147fb3480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UModelComponent::ApplyTempElements(bool param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  longlong lVar3;
  UModel *pUVar4;
  UObjectBaseUtility *this;
  code *pcVar5;
  UModelComponent *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UActorComponent *this_00;
  UWorld *pUVar10;
  UActorComponent *pUVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  UActorComponent *pUVar15;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTVar16;
  UActorComponent *pUVar17;
  ForAnyElementType FVar18;
  UActorComponent *pUVar19;
  uint uVar20;
  longlong lVar21;
  UModelComponent *local_res20;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  TArray<UModelComponent_*,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<UModel_*,TSizedDefaultAllocator<32>_> local_1d8;
  UActorComponent *local_1c8;
  TObjectPtr<UModel>_u_0 local_1c0;
  undefined8 local_1b8;
  UWorld *local_1b0;
  UActorComponent *local_1a8 [2];
  longlong *local_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  uint uStack_17c;
  longlong local_178;
  TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  if (param_1) {
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_d8,
               (TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&TempBSPElements);
    local_168 = (TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)&TempBSPElements;
    local_160 = 0;
    stack0xfffffffffffffe78 = local_d8._16_16_;
    local_198 = (longlong *)local_d8._0_8_;
    auStack_190._0_8_ = local_d8._8_8_;
    local_178 = local_b8;
    pTStack_170 = pTStack_b0;
    uVar12 = local_d8._24_8_ >> 0x20;
    if (local_d8._28_4_ < *(int *)(local_d8._16_8_ + 0x18)) {
      do {
        lVar13 = (longlong)(int)uVar12 * 0x20;
        local_res20 = *(UModelComponent **)(lVar13 + *local_198);
        TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>::operator=
                  (&local_res20->Elements,
                   (TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *)
                   (lVar13 + *local_198 + 8));
        uVar20 = 0;
        if (0 < (local_res20->Elements).Array.ArrayNum) {
          lVar13 = 0;
          do {
            pUVar6 = local_res20;
            uVar14 = 0;
            if ((int)uVar20 < (local_res20->Elements).Array.ArrayNum) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar14 = 0;
            lVar3 = *(longlong *)((pUVar6->Elements).Array.AllocatorInstance.Data + lVar13);
            if (0 < *(int *)(lVar3 + 0x20)) {
              lVar21 = 0;
              do {
                pUVar4 = (local_res20->Model).field0_0x0.DebugPtr;
                uVar8 = 0;
                if ((int)uVar14 < *(int *)(lVar3 + 0x20)) {
                  uVar8 = ~uVar14 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar2 = *(ushort *)(lVar21 + *(longlong *)(lVar3 + 0x18));
                if (((pUVar4->Nodes).ArrayNum <= (int)(uint)uVar2) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar14 = uVar14 + 1;
                lVar21 = lVar21 + 2;
                *(uint *)((pUVar4->Nodes).AllocatorInstance.Data + (ulonglong)uVar2 * 0x40 + 0x20) =
                     uVar20;
              } while ((int)uVar14 < *(int *)(lVar3 + 0x20));
            }
            uVar20 = uVar20 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar20 < (local_res20->Elements).Array.ArrayNum);
        }
        local_1c0 = (local_res20->Model).field0_0x0;
        TArray<UModel_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UModel_*>
                  (&local_1d8,&local_1c0.DebugPtr);
        TArray<UModelComponent_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UModelComponent_*_const_&>(&local_1e8,&local_res20);
        uStack_180 = uStack_180 & ~auStack_190._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
        uVar12 = (ulonglong)uStack_17c;
      } while ((int)uStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
      if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
        uVar20 = *(int *)&(local_168->Elements).field_0x8 -
                 *(int *)&(local_168->Elements).field_0x34;
        if (uVar20 < 4) {
          iVar9 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar13 & 0x1f);
        }
        if (((0 < (int)uVar20) && (local_168->HashSize < iVar9)) || (iVar9 < local_168->HashSize)) {
          local_168->HashSize = iVar9;
          TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_168);
        }
      }
    }
    uVar20 = 0;
    pUVar11 = (UActorComponent *)0x0;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    pUVar17 = pUVar11;
    if (0 < local_1e8.ArrayNum) {
      do {
        uVar14 = 0;
        if ((int)uVar20 < local_1e8.ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar19 = *(UActorComponent **)
                   (local_1e8.AllocatorInstance.Data + (longlong)&pUVar17->_padding_);
        this_00 = ::operator_new(0x18);
        pUVar15 = pUVar11;
        if (this_00 != (UActorComponent *)0x0) {
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          local_1b8 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->_padding_,(FObjectPtr)&local_1b8);
          this_00->_padding_ = 0;
          local_1b0 = FComponentReregisterContextBase::UnRegister
                                ((FComponentReregisterContextBase *)this_00,pUVar19);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UWorld *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_1b0);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->_padding_,(FObjectPtr)&local_1b0);
          bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this_00->_padding_);
          local_1a8[0] = pUVar11;
          if (bVar7) {
            local_1a8[0] = pUVar19;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1a8[0] != (UActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1a8[0]);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->_padding_,(FObjectPtr)local_1a8);
          pUVar15 = this_00;
        }
        local_1c8 = pUVar15;
        if (((local_1f8.Data <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 <
             local_1f8.Data + (longlong)(int)local_1f0._4_4_ * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_1f0;
        if ((int)local_1f0 == local_1f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1f8,(int *)((longlong)&local_1f0 + 4));
        }
        uVar20 = uVar20 + 1;
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar9 + 1);
        *(UActorComponent **)(local_1f8.Data + (longlong)iVar9 * 8) = local_1c8;
        pUVar17 = (UActorComponent *)&pUVar17->_padding_;
      } while ((int)uVar20 < local_1e8.ArrayNum);
    }
    pUVar17 = pUVar11;
    pUVar19 = pUVar11;
    if (0 < local_1d8.ArrayNum) {
      do {
        uVar14 = (uint)pUVar19;
        uVar20 = 0;
        if ((int)uVar14 < local_1d8.ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar16 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)
                       (local_1d8.AllocatorInstance.Data + (longlong)&pUVar17->_padding_) + 0x88);
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_a8,pTVar16);
        local_120 = 0;
        stack0xfffffffffffffeb8 = local_a8._16_16_;
        local_158 = (longlong *)local_a8._0_8_;
        auStack_150._0_8_ = local_a8._8_8_;
        local_138 = local_88;
        pTStack_130 = pTStack_80;
        uVar12 = local_a8._24_8_ >> 0x20;
        local_128 = pTVar16;
        if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
          do {
            BeginReleaseResource
                      (*(FRenderResource **)(*local_158 + 8 + (longlong)(int)uVar12 * 0x18),
                       (FRenderCommandPipe *)0x0);
            uStack_140 = uStack_140 & ~auStack_150._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
            uVar12 = (ulonglong)uStack_13c;
          } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
          if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
            uVar20 = *(int *)&(local_128->Elements).field_0x8 -
                     *(int *)&(local_128->Elements).field_0x34;
            if (uVar20 < 4) {
              iVar9 = 1;
            }
            else {
              uVar12 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar9 = 1 << ((byte)lVar13 & 0x1f);
            }
            if (((0 < (int)uVar20) && (local_128->HashSize < iVar9)) ||
               (iVar9 < local_128->HashSize)) {
              local_128->HashSize = iVar9;
              TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              ::Rehash(local_128);
            }
          }
        }
        pUVar17 = (UActorComponent *)&pUVar17->_padding_;
        pUVar19 = (UActorComponent *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < local_1d8.ArrayNum);
    }
    FlushRenderingCommands();
    pUVar17 = pUVar11;
    pUVar19 = pUVar11;
    if (0 < local_1e8.ArrayNum) {
      do {
        uVar14 = (uint)pUVar17;
        uVar20 = 0;
        if ((int)uVar14 < local_1e8.ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        BuildRenderData(*(UModelComponent **)
                         (local_1e8.AllocatorInstance.Data + (longlong)&pUVar19->_padding_));
        pUVar17 = (UActorComponent *)(ulonglong)(uVar14 + 1);
        pUVar19 = (UActorComponent *)&pUVar19->_padding_;
      } while ((int)(uVar14 + 1) < local_1e8.ArrayNum);
    }
    pUVar17 = pUVar11;
    if (0 < local_1d8.ArrayNum) {
      do {
        uVar14 = (uint)pUVar17;
        uVar20 = 0;
        if ((int)uVar14 < local_1d8.ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = *(UObjectBaseUtility **)
                (local_1d8.AllocatorInstance.Data + (longlong)&pUVar11->_padding_);
        puVar1 = &this[3].field_0x10;
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_78,
                   (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                    *)puVar1);
        local_e0 = 0;
        stack0xfffffffffffffef8 = local_78._16_16_;
        local_118 = (longlong *)local_78._0_8_;
        auStack_110._0_8_ = local_78._8_8_;
        local_f8 = local_58;
        pTStack_f0 = pTStack_50;
        uVar12 = local_78._24_8_ >> 0x20;
        local_e8 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                    *)puVar1;
        if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
          do {
            BeginInitResource(*(FRenderResource **)(*local_118 + 8 + (longlong)(int)uVar12 * 0x18),
                              (FRenderCommandPipe *)0x0);
            uStack_100 = uStack_100 & ~auStack_110._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
            uVar12 = (ulonglong)uStack_fc;
          } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
          if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
            uVar20 = *(int *)&(local_e8->Elements).field_0x8 -
                     *(int *)&(local_e8->Elements).field_0x34;
            if (uVar20 < 4) {
              iVar9 = 1;
            }
            else {
              uVar12 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar9 = 1 << ((byte)lVar13 & 0x1f);
            }
            if (((0 < (int)uVar20) && (local_e8->HashSize < iVar9)) || (iVar9 < local_e8->HashSize))
            {
              local_e8->HashSize = iVar9;
              TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              ::Rehash(local_e8);
            }
          }
        }
        UObjectBaseUtility::MarkPackageDirty(this);
        pUVar11 = (UActorComponent *)&pUVar11->_padding_;
        pUVar17 = (UActorComponent *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < local_1d8.ArrayNum);
    }
    FVar18.Data = local_1f8.Data;
    for (iVar9 = (int)local_1f0; iVar9 != 0; iVar9 = iVar9 + -1) {
      pUVar17 = *(UActorComponent **)FVar18.Data;
      if (pUVar17 != (UActorComponent *)0x0) {
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar17->_padding_);
        if ((bVar7) &&
           (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar17->_padding_), bVar7)) {
          pUVar10 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar17->_padding_);
          pUVar11 = (UActorComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar17->_padding_);
          FComponentReregisterContextBase::ReRegister
                    ((FComponentReregisterContextBase *)pUVar17,pUVar11,pUVar10);
        }
        ::operator_delete(pUVar17,0x18);
      }
      FVar18.Data = FVar18.Data + 8;
    }
    local_1f0._4_4_ = (uint)((ulonglong)local_1f0 >> 0x20);
    bVar7 = local_1f0._4_4_ != 0;
    local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
    if (bVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_1f8,0,(int *)((longlong)&local_1f0 + 4));
    }
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
  }
  bVar7 = 1 < (int)TempBSPElements._72_4_;
  if (!bVar7) {
    TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&TempBSPElements);
  }
  TSparseArray<TSparseSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&TempBSPElements,0,TempBSPElements._8_4_);
  TempBSPElements._8_4_ = 0;
  if (TempBSPElements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&TempBSPElements,0,(int *)&TempBSPElements.field_0xc);
  }
  TempBSPElements._48_4_ = 0xffffffff;
  TempBSPElements._52_4_ = 0;
  TempBSPElements._40_4_ = 0;
  if (0x80 < (uint)TempBSPElements._44_4_) {
    TempBSPElements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&TempBSPElements.field_0x10,0);
  }
  if (bVar7) {
    TempBSPElements._72_4_ = 1;
    TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&TempBSPElements);
  }
  return;
}

// BuildRenderData @ 147fb4fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UModelComponent::BuildRenderData(UModelComponent *this)

{
  longlong lVar1;
  FScriptContainerElement FVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  TObjectPtr<UModel>_u_0 TVar11;
  bool bVar12;
  int iVar13;
  FIndexBuffer *this_00;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  ushort *puVar19;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar20;
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *this_01;
  FRawIndexBuffer16or32 *pFVar21;
  longlong lVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  uint local_res10;
  uint local_res18;
  int local_res20;
  int local_d8;
  int local_d4;
  int local_d0 [2];
  TObjectPtr<UModel>_u_0 local_c8;
  longlong local_c0;
  FRawIndexBuffer16or32 *local_b8;
  longlong local_b0;
  FIndexBuffer *local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  FIndexBuffer **local_88;
  ushort *local_80;
  TObjectPtr<UModel>_u_0 *local_78;
  FScriptContainerElement *local_70;
  TObjectPtr<UModel>_u_0 *local_68;
  FString local_60 [2];
  
  local_c8 = (TObjectPtr<UModel>_u_0)(this->Model).field0_0x0.DebugPtr;
  local_res18 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    local_b0 = 0;
    do {
      lVar22 = local_b0;
      uVar14 = 0;
      if ((int)local_res18 < (this->Elements).Array.ArrayNum) {
        uVar14 = ~local_res18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_01 = &(local_c8.DebugPtr)->MaterialIndexBuffers;
      lVar4 = *(longlong *)((this->Elements).Array.AllocatorInstance.Data + lVar22);
      uVar5 = *(ulonglong *)(lVar4 + 0x10);
      uVar14 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (*(int *)&((local_c8.DebugPtr)->MaterialIndexBuffers).field_0x8 !=
          *(int *)&((local_c8.DebugPtr)->MaterialIndexBuffers).field_0x34) {
        puVar6 = *(undefined1 **)&((local_c8.DebugPtr)->MaterialIndexBuffers).field_0x40;
        puVar17 = &((local_c8.DebugPtr)->MaterialIndexBuffers).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar17 = puVar6;
        }
        iVar23 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&((local_c8.DebugPtr)->MaterialIndexBuffers).field_0x48 - 1U &
                         (uVar14 >> 0x10 ^ uVar14)) * 4);
        if (iVar23 != -1) {
          do {
            lVar1 = *(longlong *)&this_01->field_0x0 + (longlong)iVar23 * 0x18;
            if (*(ulonglong *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar23 * 0x18) == uVar5)
            {
              plVar15 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar15 = (longlong *)0x0;
              }
              if (plVar15 != (longlong *)0x0) goto LAB_147fb51ac;
              break;
            }
            iVar23 = *(int *)(lVar1 + 0x10);
          } while (iVar23 != -1);
        }
      }
      this_00 = ::operator_new(0x40);
      if (this_00 != (FIndexBuffer *)0x0) {
        FIndexBuffer::FIndexBuffer(this_00);
        *(undefined1 *)&this_00[1]._padding_ = 1;
        this_00->_padding_ = (longlong)&___7FRawIndexBuffer16or32__6B_;
        this_00[1]._padding_ = 0;
        this_00[1]._padding_ = 0;
      }
      local_88 = &local_a8;
      local_a8 = this_00;
      local_90 = lVar4 + 0x10;
      TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<UMaterialInterface>_&,FRawIndexBuffer16or32_*_&&>_>
                ((TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                  *)this_01,
                 (TPairInitializer<TObjectPtr<UMaterialInterface>_&,FRawIndexBuffer16or32_*_&&> *)
                 &local_res20,(bool *)&local_90);
      plVar15 = (longlong *)(*(longlong *)&this_01->field_0x0 + ((longlong)local_res20 * 3 + 1) * 8)
      ;
LAB_147fb51ac:
      pFVar21 = (FRawIndexBuffer16or32 *)*plVar15;
      local_b8 = pFVar21;
      if ((pFVar21 == (FRawIndexBuffer16or32 *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IndexBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ModelRender.cpp"
                              ,0x86,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(FRawIndexBuffer16or32 **)(lVar4 + 0x40) = pFVar21;
      *(int *)(lVar4 + 0x48) = (pFVar21->Indices).ArrayNum;
      *(undefined4 *)(lVar4 + 0x4c) = 0;
      *(undefined4 *)(lVar4 + 0x50) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x54) = 0;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_res10 = 0;
      *(double *)(lVar4 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(lVar4 + 0x78) = uVar10;
      *(double *)(lVar4 + 0x80) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(lVar4 + 0x88) = 0;
      *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar4 + 0x78);
      *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar4 + 0x80);
      if (0 < *(int *)(lVar4 + 0x20)) {
        local_c0 = 0;
        do {
          lVar22 = local_c0;
          uVar16 = 0;
          uVar14 = 0;
          if ((int)local_res10 < *(int *)(lVar4 + 0x20)) {
            uVar14 = ~local_res10 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar19 = (ushort *)(lVar22 + *(longlong *)(lVar4 + 0x18));
          if ((int)(uint)*puVar19 < ((local_c8.DebugPtr)->Nodes).ArrayNum) {
LAB_147fb52cb:
            TVar11 = local_c8;
            uVar3 = *puVar19;
            if ((((local_c8.DebugPtr)->Nodes).ArrayNum <= (int)(uint)uVar3) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = ((TVar11.DebugPtr)->Nodes).AllocatorInstance.Data + (ulonglong)uVar3 * 0x40;
            if (pFVar24[0x36] == (FScriptContainerElement)0x0) {
              *(undefined4 *)(lVar4 + 0x50) = 0;
            }
            else {
              if ((*(int *)(pFVar24 + 0x14) < 0) ||
                 (((local_c8.DebugPtr)->Surfs).ArrayNum <= *(int *)(pFVar24 + 0x14))) {
                local_68 = &local_c8;
                local_70 = pFVar24;
                bVar12 = `UModelComponent::BuildRenderData'::__l26::<lambda_2>::operator()
                                   (&local_70);
                if (!bVar12) goto LAB_147fb5847;
              }
              TVar11 = local_c8;
              uVar14 = *(uint *)(pFVar24 + 0x14);
              uVar18 = 0;
              if ((int)uVar14 < ((local_c8.DebugPtr)->Surfs).ArrayNum) {
                uVar18 = ~uVar14 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_98 = ((TVar11.DebugPtr)->Surfs).AllocatorInstance.Data;
              lVar22 = (longlong)(int)uVar14 * 0x50;
              local_a0 = lVar22;
              if ((*(uint *)(local_98 + lVar22 + 8) & 0x4000000) == 0) {
                do {
                  iVar23 = 0;
                  FVar2 = (FScriptContainerElement)0x0;
                  if (pFVar24[0x36] != (FScriptContainerElement)0x0) {
                    do {
                      TVar11 = local_c8;
                      uVar18 = *(int *)(pFVar24 + 0x10) + iVar23;
                      uVar14 = 0;
                      if ((int)uVar18 < ((local_c8.DebugPtr)->Verts).ArrayNum) {
                        uVar14 = ~uVar18 >> 0x1f;
                      }
                      if ((uVar14 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      uVar14 = *(uint *)(((TVar11.DebugPtr)->Verts).AllocatorInstance.Data +
                                        (longlong)(int)uVar18 * 0x18);
                      lVar22 = (longlong)(int)uVar14;
                      uVar18 = 0;
                      if ((int)uVar14 < ((TVar11.DebugPtr)->Points).ArrayNum) {
                        uVar18 = ~uVar14 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pFVar7 = ((TVar11.DebugPtr)->Points).AllocatorInstance.Data;
                      dVar26 = (double)*(float *)(pFVar7 + lVar22 * 0xc);
                      dVar27 = (double)*(float *)(pFVar7 + lVar22 * 0xc + 4);
                      dVar28 = (double)*(float *)(pFVar7 + lVar22 * 0xc + 8);
                      if (*(char *)(lVar4 + 0x88) == '\0') {
                        *(double *)(lVar4 + 0x70) = dVar26;
                        *(double *)(lVar4 + 0x78) = dVar27;
                        *(double *)(lVar4 + 0x80) = dVar28;
                        *(undefined1 *)(lVar4 + 0x88) = 1;
                        *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar4 + 0x70);
                        *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar4 + 0x78);
                        *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar4 + 0x80);
                      }
                      else {
                        dVar9 = dVar26;
                        if (*(double *)(lVar4 + 0x58) <= dVar26) {
                          dVar9 = *(double *)(lVar4 + 0x58);
                        }
                        dVar25 = dVar27;
                        if (*(double *)(lVar4 + 0x60) <= dVar27) {
                          dVar25 = *(double *)(lVar4 + 0x60);
                        }
                        if (dVar26 <= *(double *)(lVar4 + 0x70)) {
                          dVar26 = *(double *)(lVar4 + 0x70);
                        }
                        if (dVar27 <= *(double *)(lVar4 + 0x78)) {
                          dVar27 = *(double *)(lVar4 + 0x78);
                        }
                        *(double *)(lVar4 + 0x58) = dVar9;
                        dVar9 = *(double *)(lVar4 + 0x68);
                        if (dVar28 <= *(double *)(lVar4 + 0x68)) {
                          dVar9 = dVar28;
                        }
                        *(double *)(lVar4 + 0x60) = dVar25;
                        *(double *)(lVar4 + 0x70) = dVar26;
                        *(double *)(lVar4 + 0x78) = dVar27;
                        *(double *)(lVar4 + 0x68) = dVar9;
                        dVar26 = *(double *)(lVar4 + 0x80);
                        if (*(double *)(lVar4 + 0x80) <= dVar28) {
                          dVar26 = dVar28;
                        }
                        *(double *)(lVar4 + 0x80) = dVar26;
                      }
                      FVar2 = pFVar24[0x36];
                      iVar23 = iVar23 + 1;
                      lVar22 = local_a0;
                    } while (iVar23 < (int)(uint)(byte)FVar2);
                  }
                  pFVar21 = local_b8;
                  uVar14 = (uint)(byte)FVar2;
                  iVar23 = 2;
                  if (2 < (byte)FVar2) {
                    pTVar20 = &local_b8->Indices;
                    do {
                      pFVar7 = (pTVar20->AllocatorInstance).Data;
                      local_d8 = uVar14 * uVar16 + *(int *)(pFVar24 + 0x18);
                      if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
                          ((FScriptContainerElement *)&local_d8 <
                           pFVar7 + (longlong)(pFVar21->Indices).ArrayMax * 4)) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar13 = (pFVar21->Indices).ArrayNum;
                      if (iVar13 == (pFVar21->Indices).ArrayMax) {
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar20->AllocatorInstance,
                                            &(pFVar21->Indices).ArrayMax);
                      }
                      (pFVar21->Indices).ArrayNum = iVar13 + 1;
                      *(int *)((pTVar20->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_d8;
                      pFVar7 = (pTVar20->AllocatorInstance).Data;
                      local_d4 = (byte)pFVar24[0x36] * uVar16 + *(int *)(pFVar24 + 0x18) + iVar23;
                      if (((pFVar7 <= (FScriptContainerElement *)&local_d4) &&
                          ((FScriptContainerElement *)&local_d4 <
                           pFVar7 + (longlong)(pFVar21->Indices).ArrayMax * 4)) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar13 = (pFVar21->Indices).ArrayNum;
                      if (iVar13 == (pFVar21->Indices).ArrayMax) {
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar20->AllocatorInstance,
                                            &(pFVar21->Indices).ArrayMax);
                      }
                      (pFVar21->Indices).ArrayNum = iVar13 + 1;
                      *(int *)((pTVar20->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_d4;
                      pFVar7 = (pTVar20->AllocatorInstance).Data;
                      local_d0[0] = (byte)pFVar24[0x36] * uVar16 + -1 + *(int *)(pFVar24 + 0x18) +
                                    iVar23;
                      if (((pFVar7 <= (FScriptContainerElement *)local_d0) &&
                          ((FScriptContainerElement *)local_d0 <
                           pFVar7 + (longlong)(pFVar21->Indices).ArrayMax * 4)) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar13 = (pFVar21->Indices).ArrayNum;
                      if (iVar13 == (pFVar21->Indices).ArrayMax) {
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar20->AllocatorInstance,
                                            &(pFVar21->Indices).ArrayMax);
                      }
                      iVar23 = iVar23 + 1;
                      (pFVar21->Indices).ArrayNum = iVar13 + 1;
                      *(int *)((pTVar20->AllocatorInstance).Data + (longlong)iVar13 * 4) =
                           local_d0[0];
                      *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
                      uVar14 = (uint)(byte)pFVar24[0x36];
                    } while (iVar23 < (int)(uint)(byte)pFVar24[0x36]);
                  }
                  uVar18 = uVar16 + 1;
                  uVar16 = uVar14 * uVar16 + *(int *)(pFVar24 + 0x18);
                  uVar14 = *(uint *)(lVar4 + 0x50);
                  if (uVar16 < *(uint *)(lVar4 + 0x50)) {
                    uVar14 = uVar16;
                  }
                  *(uint *)(lVar4 + 0x50) = uVar14;
                  uVar16 = *(int *)(pFVar24 + 0x18) + -1 + (byte)pFVar24[0x36] * uVar18;
                  uVar14 = *(uint *)(lVar4 + 0x54);
                  if (*(uint *)(lVar4 + 0x54) < uVar16) {
                    uVar14 = uVar16;
                  }
                  *(uint *)(lVar4 + 0x54) = uVar14;
                  if ((((local_c8.DebugPtr)->VertexBuffer).Buffers.StaticMeshVertexBuffer.
                       NumVertices <= uVar14) && (4 < (byte)LogModelComponent._0_1_)) {
                    UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)this,local_60,(UObject *)0x0);
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogModelComponent);
                    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                    }
                  }
                  uVar16 = uVar18;
                } while (uVar18 < ((*(uint *)(local_98 + lVar22 + 8) & 0x100) != 0) + 1);
              }
            }
          }
          else {
            local_78 = &local_c8;
            local_80 = puVar19;
            bVar12 = `UModelComponent::BuildRenderData'::__l20::<lambda_1>::operator()(&local_80);
            if (bVar12) goto LAB_147fb52cb;
          }
LAB_147fb5847:
          local_res10 = local_res10 + 1;
          local_c0 = local_c0 + 2;
          pFVar21 = local_b8;
          lVar22 = local_b0;
        } while ((int)local_res10 < *(int *)(lVar4 + 0x20));
      }
      iVar23 = (pFVar21->Indices).ArrayNum;
      if ((pFVar21->Indices).ArrayMax != iVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar23,&(pFVar21->Indices).AllocatorInstance,iVar23,
                   &(pFVar21->Indices).ArrayMax);
      }
      FRawIndexBuffer16or32::ComputeIndexWidth(pFVar21);
      local_res18 = local_res18 + 1;
      local_b0 = lVar22 + 8;
    } while ((int)local_res18 < (this->Elements).Array.ArrayNum);
  }
  return;
}

// CalcBounds @ 147fb6570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UModelComponent::CalcBounds
          (UModelComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  ushort uVar1;
  int iVar2;
  UModel *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  bool bVar10;
  uint uVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  TMatrix<double> *pTVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  TBoxSphereBounds<double,double> *local_180;
  TTransform<double> *local_178;
  undefined1 local_170 [24];
  TVector<double>_u_0 TStack_158;
  uchar local_140;
  uchar local_13f [7];
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  TMatrix<double> local_f8;
  ulonglong local_78;
  undefined8 uVar22;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if ((this->Model).field0_0x0.DebugPtr == (UModel *)0x0) {
    dVar25 = (param_1->Translation).XY.m128d_f64[1];
    dVar24 = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar25;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar24;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar22;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->SphereRadius = 0.0;
  }
  else {
    auVar21 = ZEXT816(0);
    uVar17 = 0;
    local_140 = '\0';
    local_170._16_8_ = 0.0;
    TStack_158._s_0.X = 0.0;
    local_13f[0] = '\0';
    local_13f[1] = '\0';
    local_13f[2] = '\0';
    local_13f[3] = '\0';
    TStack_158._s_0.Y = 0.0;
    TStack_158._s_0.Z = 0.0;
    local_13f[4] = '\0';
    local_13f[5] = '\0';
    local_13f[6] = '\0';
    local_180 = __return_storage_ptr__;
    local_178 = param_1;
    local_170._0_16_ = auVar21;
    if (0 < (this->Nodes).ArrayNum) {
      local_188 = 0;
      do {
        lVar18 = local_188;
        iVar14 = (this->Nodes).ArrayNum;
        pUVar3 = (this->Model).field0_0x0.DebugPtr;
        uVar11 = 0;
        if ((int)uVar17 < iVar14) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_198 = (ulonglong)(int)uVar17;
          local_190 = (longlong)iVar14;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          auVar21 = extraout_XMM0;
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
            return pTVar12;
          }
        }
        uVar1 = *(ushort *)((this->Nodes).AllocatorInstance.Data + lVar18);
        iVar14 = (pUVar3->Nodes).ArrayNum;
        if ((iVar14 <= (int)(uint)uVar1) &&
           (local_198 = (ulonglong)uVar1, local_190 = (longlong)iVar14,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , auVar21 = extraout_XMM0_00, bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
          return pTVar12;
        }
        pFVar4 = (pUVar3->Nodes).AllocatorInstance.Data;
        lVar18 = (ulonglong)uVar1 * 0x40;
        iVar14 = 0;
        if (pFVar4[lVar18 + 0x36] != (FScriptContainerElement)0x0) {
          do {
            uVar22 = auVar21._8_8_;
            pUVar3 = (this->Model).field0_0x0.DebugPtr;
            uVar15 = *(int *)(pFVar4 + lVar18 + 0x10) + iVar14;
            iVar2 = (pUVar3->Verts).ArrayNum;
            uVar11 = 0;
            if ((int)uVar15 < iVar2) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if (uVar11 == 0) {
              local_198 = (ulonglong)(int)uVar15;
              local_190 = (longlong)iVar2;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar22 = extraout_XMM0_01._8_8_;
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
                return pTVar12;
              }
            }
            iVar2 = (pUVar3->Points).ArrayNum;
            uVar11 = *(uint *)((pUVar3->Verts).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18
                              );
            uVar16 = (ulonglong)(int)uVar11;
            uVar15 = 0;
            if ((int)uVar11 < iVar2) {
              uVar15 = ~uVar11 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_198 = uVar16;
              local_190 = (longlong)iVar2;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar22 = extraout_XMM0_02._8_8_;
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
                return pTVar12;
              }
            }
            pFVar5 = (pUVar3->Points).AllocatorInstance.Data;
            dVar24 = (double)*(float *)(pFVar5 + uVar16 * 0xc);
            dVar25 = (double)*(float *)(pFVar5 + uVar16 * 0xc + 4);
            dVar26 = (double)*(float *)(pFVar5 + uVar16 * 0xc + 8);
            uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
            if (local_140 == '\0') {
              local_140 = '\x01';
              auVar9._4_8_ = uVar22;
              auVar9._0_4_ = (int)((ulonglong)dVar24 >> 0x20);
              auVar19._0_8_ = auVar9._0_8_ << 0x20;
              auVar19._8_4_ = SUB84(dVar25,0);
              auVar19._12_4_ = uVar23;
              auVar21._8_8_ = dVar25;
              auVar21._0_8_ = auVar19._8_8_;
              local_170._8_8_ = auVar19._8_8_;
              local_170._0_8_ = dVar24;
              auVar7._8_4_ = SUB84(dVar25,0);
              auVar7._0_8_ = dVar24;
              auVar7._12_4_ = uVar23;
              TStack_158._s_0.Y = auVar7._8_8_;
              local_170._16_8_ = dVar26;
              TStack_158._s_0.X = dVar24;
              TStack_158._s_0.Z = dVar26;
            }
            else {
              if (dVar24 <= (double)local_170._0_8_) {
                local_170._0_8_ = dVar24;
              }
              if (dVar25 <= (double)local_170._8_8_) {
                local_170._8_8_ = dVar25;
              }
              if (dVar26 <= (double)local_170._16_8_) {
                local_170._16_8_ = dVar26;
              }
              if (TStack_158._s_0.X <= dVar24) {
                TStack_158._s_0.X = dVar24;
              }
              if (TStack_158._s_0.Y <= dVar25) {
                TStack_158._s_0.Y = dVar25;
              }
              auVar21._8_8_ = 0;
              auVar21._0_8_ = TStack_158._s_0.Y;
              if (TStack_158._s_0.Z <= dVar26) {
                TStack_158._s_0.Z = dVar26;
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)(uint)(byte)pFVar4[lVar18 + 0x36]);
        }
        uVar17 = uVar17 + 1;
        local_188 = local_188 + 2;
      } while ((int)uVar17 < (this->Nodes).ArrayNum);
    }
    __return_storage_ptr__ = local_180;
    pTVar13 = UE::Math::TTransform<double>::ToMatrixWithScale(local_178,&local_f8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)local_170,(TBox<double> *)&local_138._s_0,pTVar13);
    local_118 = local_118 - local_138._s_0.Y;
    local_110 = local_110 - local_138._s_0.Z;
    dVar25 = local_118 * __real_3fe0000000000000;
    dVar26 = (local_120 - local_138._s_0.X) * __real_3fe0000000000000;
    dVar24 = local_110 * __real_3fe0000000000000;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_138._s_0.X + dVar26;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_138._s_0.Y + dVar25;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_138._s_0.Z + dVar24;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar26;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar25;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar24;
    dVar24 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    auVar20._0_8_ = dVar24 * dVar24;
    auVar20._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (local_110 * local_110 + local_118 * local_118) * __real_3fd0000000000000 +
                   auVar20._0_8_;
    auVar21 = sqrtpd(auVar20,auVar8);
    __return_storage_ptr__->SphereRadius = auVar21._0_8_;
  }
  return __return_storage_ptr__;
}

// CreateNewTempElement @ 147fc0ee0

FModelElement * __cdecl UModelComponent::CreateNewTempElement(UModelComponent *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  FModelElement *this;
  FModelElement *pFVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FModelElement *pFVar12;
  UModelComponent *local_res8;
  int local_res10;
  FModelElement *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  UModelComponent **local_30;
  ForAnyElementType *local_28;
  
  pFVar6 = (FModelElement *)0x0;
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  local_res8 = param_1;
  if (TempBSPElements._8_4_ != TempBSPElements._52_4_) {
    lVar9 = 0x154c5d238;
    if (TempBSPElements._64_8_ != 0) {
      lVar9 = TempBSPElements._64_8_;
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)(TempBSPElements._72_4_ - 1 & (uVar8 >> 0x10 ^ uVar8)) * 4)
    ;
    while (iVar11 != -1) {
      plVar7 = (longlong *)((longlong)iVar11 * 0x20 + TempBSPElements._0_8_);
      if ((UModelComponent *)*plVar7 == param_1) {
        pFVar12 = (FModelElement *)(plVar7 + 1);
        if (plVar7 == (longlong *)0x0) {
          pFVar12 = pFVar6;
        }
        if (pFVar12 != (FModelElement *)0x0) goto LAB_147fc106b;
        break;
      }
      iVar11 = (int)plVar7[3];
    }
  }
  local_30 = &local_res8;
  local_28 = &local_40;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UModelComponent_*_const_&,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&TempBSPElements,
             (TPairInitializer<UModelComponent_*_const_&,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_&&>
              *)&local_res10,(bool *)&local_30);
  pFVar12 = (FModelElement *)(TempBSPElements._0_8_ + 8 + (longlong)local_res10 * 0x20);
  FVar10.Data = local_40.Data;
  for (iVar11 = (int)local_38; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar2 = *(undefined8 **)FVar10.Data;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  uVar4 = local_38 >> 0x20;
  local_38 = local_38 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_40,0,(int *)((longlong)&local_38 + 4));
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
LAB_147fc106b:
  this = ::operator_new(0x90);
  if (this != (FModelElement *)0x0) {
    pFVar6 = FModelElement::FModelElement(this,local_res8,(UMaterialInterface *)0x0);
  }
  local_48 = pFVar6;
  if ((((FModelElement **)pFVar12->_padding_ <= &local_48) &&
      (&local_48 <
       (FModelElement **)pFVar12->_padding_ +
       *(int *)((longlong)&(pFVar12->Component).field0_0x0 + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FModelElement *)(*pcVar3)();
    return pFVar6;
  }
  iVar11 = *(int *)&(pFVar12->Component).field0_0x0;
  piVar1 = (int *)((longlong)&(pFVar12->Component).field0_0x0 + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar12,piVar1);
  }
  *(int *)&(pFVar12->Component).field0_0x0 = iVar11 + 1;
  *(FModelElement **)(pFVar12->_padding_ + (longlong)iVar11 * 8) = local_48;
  return pFVar6;
}

// CreateRenderState_Concurrent @ 147fc1140

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
UModelComponent::CreateRenderState_Concurrent
          (UModelComponent *this,FRegisterComponentContext *param_1)

{
  FModelVertexBuffer *pFVar1;
  longlong lVar2;
  UModel *pUVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar16 = (undefined8 *)0x0;
  puVar10 = puVar16;
  puVar15 = puVar16;
  if (0 < (this->Elements).Array.ArrayNum) {
    do {
      uVar14 = (uint)puVar10;
      uVar11 = 0;
      if ((int)uVar14 < (this->Elements).Array.ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar3 = (this->Model).field0_0x0.DebugPtr;
      lVar4 = *(longlong *)
               ((longlong)puVar15 + (longlong)(this->Elements).Array.AllocatorInstance.Data);
      uVar5 = *(ulonglong *)(lVar4 + 0x10);
      uVar11 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      puVar10 = puVar16;
      if (*(int *)&(pUVar3->MaterialIndexBuffers).field_0x8 !=
          *(int *)&(pUVar3->MaterialIndexBuffers).field_0x34) {
        puVar6 = *(undefined1 **)&(pUVar3->MaterialIndexBuffers).field_0x40;
        puVar13 = &(pUVar3->MaterialIndexBuffers).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar13 = puVar6;
        }
        iVar9 = *(int *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(pUVar3->MaterialIndexBuffers).field_0x48 - 1U &
                        (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar9 != -1) {
          do {
            lVar2 = *(longlong *)&pUVar3->MaterialIndexBuffers + (longlong)iVar9 * 0x18;
            if (*(ulonglong *)(*(longlong *)&pUVar3->MaterialIndexBuffers + (longlong)iVar9 * 0x18)
                == uVar5) {
              puVar12 = (undefined8 *)(lVar2 + 8);
              if (lVar2 == 0) {
                puVar12 = puVar16;
              }
              if (puVar12 != (undefined8 *)0x0) {
                puVar10 = (undefined8 *)*puVar12;
              }
              break;
            }
            iVar9 = *(int *)(lVar2 + 0x10);
          } while (iVar9 != -1);
        }
      }
      *(undefined8 **)(lVar4 + 0x40) = puVar10;
      puVar10 = (undefined8 *)(ulonglong)(uVar14 + 1);
      puVar15 = puVar15 + 1;
    } while ((int)(uVar14 + 1) < (this->Elements).Array.ArrayNum);
  }
  pUVar3 = (this->Model).field0_0x0.DebugPtr;
  if (pUVar3 != (UModel *)0x0) {
    pFVar1 = &pUVar3->VertexBuffer;
    pFVar1->RefCount = pFVar1->RefCount + 1;
  }
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  return;
}

// CreateSceneProxy @ 147fc1380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UModelComponent::CreateSceneProxy(UModelComponent *this)

{
  FModelSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x4f0);
  if (pFVar1 != (FModelSceneProxy *)0x0) {
    pFVar1 = FModelSceneProxy::FModelSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 147fc2680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UModelComponent::DestroyRenderState_Concurrent(UModelComponent *this)

{
  FModelVertexBuffer *pFVar1;
  UModel *pUVar2;
  
  pUVar2 = (this->Model).field0_0x0.DebugPtr;
  if (pUVar2 != (UModel *)0x0) {
    pFVar1 = &pUVar2->VertexBuffer;
    pFVar1->RefCount = pFVar1->RefCount - 1;
  }
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  return;
}

// GetLightAndShadowMapMemoryUsage @ 147fd3270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelComponent::GetLightAndShadowMapMemoryUsage(UModelComponent *this,int *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  UWorld *pUVar3;
  FGenericStaticFeatureLevel FVar4;
  int local_res8 [2];
  int local_res18 [2];
  
  local_res8[0] = 0;
  local_res18[0] = 0;
  (**(code **)(*(longlong *)this + 0x7b8))(this,local_res8,local_res18);
  *param_2 = (int)((float)local_res8[0] * __real_3faa3d71 * (float)local_res18[0]);
  pUVar3 = *(UWorld **)&this->field_0xb0;
  if ((pUVar3 != (UWorld *)0x0) ||
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     FVar4.FeatureLevel = GMaxRHIFeatureLevel, pUVar3 != (UWorld *)0x0)) {
    FVar4.FeatureLevel = (uint)(pUVar3->FeatureLevel).Value;
  }
  bVar2 = AllowHighQualityLightmaps(FVar4);
  fVar1 = __real_3faa3d71;
  if (bVar2) {
    fVar1 = ___real_402a3d71;
  }
  *param_1 = (int)((float)local_res8[0] * fVar1 * (float)local_res18[0]);
  return;
}

// GetLightMapResolution @ 147fd3340

bool __thiscall
UModelComponent::GetLightMapResolution(UModelComponent *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  int local_res10 [2];
  TMatrix<double> local_a8;
  
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < (((this->Model).field0_0x0.DebugPtr)->Surfs).ArrayNum) {
    do {
      GetSurfaceLightMapResolution
                (this,iVar1,1,local_res8,local_res10,&local_a8,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
      iVar1 = iVar1 + 1;
      iVar3 = iVar2 + local_res8[0] * local_res10[0];
      iVar2 = iVar3;
    } while (iVar1 < (((this->Model).field0_0x0.DebugPtr)->Surfs).ArrayNum);
  }
  *param_1 = (int)SQRT((float)iVar3);
  *param_2 = (int)SQRT((float)iVar3);
  return false;
}

// GetStaticLightMapResolution @ 147fd6f70

int __thiscall UModelComponent::GetStaticLightMapResolution(UModelComponent *this)

{
  int local_res8 [2];
  int local_res10 [6];
  
  (**(code **)(*(longlong *)this + 0x7b8))(this,local_res10,local_res8);
  if (local_res8[0] < local_res10[0]) {
    local_res8[0] = local_res10[0];
  }
  return local_res8[0];
}

// GetSurfaceLightMapResolution @ 147fd7d10

void __thiscall
UModelComponent::GetSurfaceLightMapResolution
          (UModelComponent *this,int param_1,int param_2,int *param_3,int *param_4,
          TMatrix<double> *param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TObjectPtr<UModel>_u_0 TVar4;
  longlong lVar5;
  UModel *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  float fVar28;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar33;
  double dVar32;
  undefined1 in_XMM4 [16];
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 in_XMM5 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  TVector<float>_u_0 local_110;
  TVector<float>_u_0 local_100 [16];
  
  TVar4 = (this->Model).field0_0x0;
  uVar25 = (ulonglong)param_1;
  uVar27 = 0;
  if (param_1 < ((TVar4.DebugPtr)->Surfs).ArrayNum) {
    uVar27 = (uint)~param_1 >> 0x1f;
  }
  if (uVar27 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar5 = *(longlong *)((longlong)TVar4 + 0x68);
  lVar19 = uVar25 * 0x50;
  UE::Math::TVector<float>::FindBestAxisVectors
            ((TVector<float> *)(lVar19 + lVar5 + 0x30),(TVector<float> *)&local_110._s_0,
             (TVector<float> *)&local_100[0]._s_0);
  uVar27 = 0;
  lVar23 = 0;
  lVar26 = 0;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = __real_42a0000000000000;
  uVar30 = (undefined4)__real_c2a0000000000000;
  uVar33 = (undefined4)((ulonglong)__real_c2a0000000000000 >> 0x20);
  bVar14 = false;
  auVar40._0_8_ = (double)(float)local_100[0]._4_4_;
  auVar40._8_8_ = 0;
  uVar34 = uVar30;
  uVar36 = uVar33;
  dVar35 = __real_42a0000000000000;
  while( true ) {
    dVar13 = __real_bfe0000000000000;
    if (param_6 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar16 = (this->Nodes).ArrayNum;
    }
    else {
      iVar16 = param_6->ArrayNum;
    }
    if (iVar16 <= (int)uVar27) break;
    pUVar6 = (this->Model).field0_0x0.DebugPtr;
    if (param_6 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar20 = 0;
      if ((int)uVar27 < (this->Nodes).ArrayNum) {
        uVar20 = ~uVar27 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar20 = (uint)*(ushort *)((this->Nodes).AllocatorInstance.Data + lVar23);
    }
    else {
      uVar20 = 0;
      if ((int)uVar27 < param_6->ArrayNum) {
        uVar20 = ~uVar27 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar20 = *(uint *)((param_6->AllocatorInstance).Data + lVar26);
    }
    uVar24 = 0;
    if ((int)uVar20 < (pUVar6->Nodes).ArrayNum) {
      uVar24 = ~uVar20 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar7 = (pUVar6->Nodes).AllocatorInstance.Data;
    if ((param_6 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) ||
       (*(int *)(pFVar7 + (longlong)(int)uVar20 * 0x40 + 0x14) == (int)uVar25)) {
      uVar24 = 0;
      if (pFVar7[(longlong)(int)uVar20 * 0x40 + 0x36] != (FScriptContainerElement)0x0) {
        bVar14 = true;
        dVar13 = dVar35;
        do {
          pUVar6 = (this->Model).field0_0x0.DebugPtr;
          uVar21 = *(int *)(pFVar7 + (longlong)(int)uVar20 * 0x40 + 0x10) + uVar24;
          uVar17 = 0;
          if ((int)uVar21 < (pUVar6->Verts).ArrayNum) {
            uVar17 = ~uVar21 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          uVar17 = *(uint *)((pUVar6->Verts).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18);
          lVar22 = (longlong)(int)uVar17;
          uVar21 = 0;
          if ((int)uVar17 < (pUVar6->Points).ArrayNum) {
            uVar21 = ~uVar17 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar8 = (pUVar6->Points).AllocatorInstance.Data;
          uVar24 = uVar24 + 1;
          dVar31 = (double)*(float *)(pFVar8 + lVar22 * 0xc + 4) * (double)local_110._s_0.Y +
                   (double)*(float *)(pFVar8 + lVar22 * 0xc) * (double)local_110._s_0.X +
                   (double)*(float *)(pFVar8 + lVar22 * 0xc + 8) * (double)local_110._s_0.Z;
          dVar35 = (double)*(float *)(pFVar8 + lVar22 * 0xc + 4) * auVar40._0_8_ +
                   (double)*(float *)(pFVar8 + lVar22 * 0xc) * (double)(float)local_100[0]._0_4_ +
                   (double)*(float *)(pFVar8 + lVar22 * 0xc + 8) * (double)(float)local_100[0]._8_4_
          ;
          dVar29 = dVar31;
          if (dVar31 <= (double)CONCAT44(uVar33,uVar30)) {
            dVar29 = (double)CONCAT44(uVar33,uVar30);
          }
          in_XMM4._8_8_ = 0;
          in_XMM4._0_8_ = dVar29;
          if (auVar38._0_8_ <= dVar31) {
            dVar31 = auVar38._0_8_;
          }
          dVar37 = dVar35;
          if (dVar35 <= (double)CONCAT44(uVar36,uVar34)) {
            dVar37 = (double)CONCAT44(uVar36,uVar34);
          }
          in_XMM5._8_8_ = 0;
          in_XMM5._0_8_ = dVar37;
          if (dVar13 <= dVar35) {
            dVar35 = dVar13;
          }
          uVar30 = SUB84(dVar29,0);
          uVar33 = (undefined4)((ulonglong)dVar29 >> 0x20);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = dVar31;
          uVar34 = SUB84(dVar37,0);
          uVar36 = (undefined4)((ulonglong)dVar37 >> 0x20);
          dVar13 = dVar35;
        } while (uVar24 < (byte)pFVar7[(longlong)(int)uVar20 * 0x40 + 0x36]);
      }
      uVar25 = (ulonglong)(uint)param_1;
    }
    uVar27 = uVar27 + 1;
    lVar26 = lVar26 + 4;
    lVar23 = lVar23 + 2;
  }
  if (bVar14) {
    dVar29 = (double)((float)param_2 * *(float *)(lVar19 + 0x40 + lVar5));
    dVar31 = __real_3ff0000000000000 / dVar29;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = dVar31 * auVar38._0_8_;
    auVar41 = roundpd(auVar40,auVar41,1);
    dVar39 = auVar41._0_8_ * dVar29;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar31 * dVar35;
    auVar38 = roundpd(auVar38,auVar10,1);
    dVar37 = auVar38._0_8_ * dVar29;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar31 * (double)CONCAT44(uVar33,uVar30);
    auVar38 = roundpd(in_XMM5,auVar11,2);
    dVar35 = auVar38._0_8_ * dVar29 - dVar39;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar31 * (double)CONCAT44(uVar36,uVar34);
    auVar38 = roundpd(in_XMM4,auVar12,2);
    if (dVar35 <= dVar29) {
      dVar35 = dVar29;
    }
    dVar32 = auVar38._0_8_ * dVar29 - dVar37;
    if (dVar32 <= dVar29) {
      dVar32 = dVar29;
    }
    dVar29 = __real_3ff0000000000000 / dVar35;
    iVar18 = -((int)ROUND(__real_bfe0000000000000 - (dVar31 + dVar31) * dVar35) >> 1);
    dVar35 = __real_3ff0000000000000 / dVar32;
    iVar16 = 0x400;
    if (iVar18 < 0x400) {
      iVar16 = iVar18;
    }
    iVar18 = 4;
    if (4 < iVar16) {
      iVar18 = iVar16;
    }
    *param_3 = iVar18;
    iVar18 = -((int)ROUND(dVar13 - (dVar32 + dVar32) /
                                   (double)((float)param_2 * *(float *)(lVar19 + 0x40 + lVar5))) >>
              1);
    iVar16 = 0x400;
    if (iVar18 < 0x400) {
      iVar16 = iVar18;
    }
    iVar18 = 4;
    if (4 < iVar16) {
      iVar18 = iVar16;
    }
    *param_4 = iVar18;
    fVar28 = (float)(*(uint *)(lVar19 + 0x3c + lVar5) ^ __xmm_80000000800000008000000080000000);
    fVar1 = *(float *)(lVar19 + 0x38 + lVar5);
    fVar2 = *(float *)(lVar19 + 0x34 + lVar5);
    fVar3 = *(float *)(lVar19 + 0x30 + lVar5);
    param_5->M[0][0] = (double)local_110._s_0.X * dVar29;
    param_5->M[0][1] = (double)(float)local_100[0]._0_4_ * dVar35;
    param_5->M[0][2] = (double)fVar3;
    param_5->M[0][3] = 0.0;
    dVar39 = dVar39 * dVar29;
    param_5->M[1][0] = (double)local_110._s_0.Y * dVar29;
    param_5->M[1][1] = auVar40._0_8_ * dVar35;
    param_5->M[1][2] = (double)fVar2;
    param_5->M[1][3] = 0.0;
    param_5->M[2][0] = (double)local_110._s_0.Z * dVar29;
    dVar37 = dVar37 * dVar35;
    param_5->M[2][1] = (double)(float)local_100[0]._8_4_ * dVar35;
    param_5->M[2][2] = (double)fVar1;
    param_5->M[2][3] = 0.0;
    uVar27 = (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    param_5->M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar20,SUB84(dVar39,0) ^ uVar27);
    param_5->M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar20,SUB84(dVar37,0) ^ uVar27);
    param_5->M[3][2] = (double)fVar28;
    param_5->M[3][3] = 1.0;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[0][1];
    param_5->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    param_5->M[0][1] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[0][3];
    param_5->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    param_5->M[0][3] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[1][1];
    param_5->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    param_5->M[1][1] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[1][3];
    param_5->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    param_5->M[1][3] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[2][1];
    param_5->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    param_5->M[2][1] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[2][3];
    param_5->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    param_5->M[2][3] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[3][1];
    param_5->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    param_5->M[3][1] = dVar35;
    dVar35 = UE::Math::TMatrix<double>::Identity.M[3][3];
    param_5->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    param_5->M[3][3] = dVar35;
  }
  return;
}

// InvalidateLightingCacheDetailed @ 147fe20d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelComponent::InvalidateLightingCacheDetailed(UModelComponent *this,bool param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  FGuid *pFVar6;
  UWorld *pUVar7;
  UActorComponent *pUVar8;
  uint uVar9;
  longlong lVar10;
  FGuid local_38;
  FComponentReregisterContext local_28;
  
  FComponentReregisterContext::FComponentReregisterContext
            (&local_28,(UActorComponent *)this,
             (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)
             0x0);
  UPrimitiveComponent::InvalidateLightingCacheDetailed((UPrimitiveComponent *)this,param_1,param_2);
  uVar9 = 0;
  if (0 < (this->Elements).Array.ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Elements).Array.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Elements).Array.AllocatorInstance.Data + lVar10);
      pFVar6 = FGuid::NewGuid(&local_38);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
      uVar3 = *(undefined8 *)&pFVar6->C;
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)pFVar6;
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
    } while ((int)uVar9 < (this->Elements).Array.ArrayNum);
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_28.Component.WeakPtr);
  if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(&local_28.World.WeakPtr), bVar4)) {
    pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_28.World.WeakPtr);
    pUVar8 = (UActorComponent *)FWeakObjectPtr::Get(&local_28.Component.WeakPtr);
    FComponentReregisterContextBase::ReRegister
              ((FComponentReregisterContextBase *)&local_28,pUVar8,pUVar7);
  }
  return;
}

// PropagateLightingScenarioChange @ 147fe85d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UModelComponent::PropagateLightingScenarioChange(UModelComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (UModelComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->field_0x98 & 3) == 3) {
    (**(code **)(*(longlong *)this + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  return;
}

// ShouldRecreateProxyOnUpdateTransform @ 147ff7d40

bool __thiscall UModelComponent::ShouldRecreateProxyOnUpdateTransform(UModelComponent *this)

{
  return true;
}

// operator() @ 15051edd0

bool __thiscall `UModelComponent::BuildRenderData'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9015782953040478063>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9015782953040478063>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15051f120

bool __thiscall `UModelComponent::BuildRenderData'::__l26::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9015782953040478054>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9015782953040478054>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

