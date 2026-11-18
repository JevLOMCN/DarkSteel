// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 5

// FFTestRenderingSceneProxy @ 148c7f3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FFTestRenderingSceneProxy * __thiscall
FFTestRenderingSceneProxy::FFTestRenderingSceneProxy
          (FFTestRenderingSceneProxy *this,UFuncTestRenderingComponent *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  int iVar3;
  AFunctionalTest *pAVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  FFTestRenderingSceneProxy *pFVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  local_res10 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  pTVar1 = &this->Locations;
  this->_padding_ = (longlong)&___7FFTestRenderingSceneProxy__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Locations).ArrayNum = 0;
  (this->Locations).ArrayMax = 0;
  pAVar4 = *(AFunctionalTest **)&param_1->field_0xa8;
  if (pAVar4 != (AFunctionalTest *)0x0) {
    pUVar11 = AFunctionalTest::StaticClass();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar11->_padding_)) {
      this->OwningTest = pAVar4;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      (**(code **)(pAVar4->_padding_ + 0x898))(pAVar4,&local_88);
      lVar5 = this->OwningTest->_padding_;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar5 != 0) {
        local_50 = *(double *)(lVar5 + 0x220);
        local_60 = *(undefined4 *)(lVar5 + 0x210);
        uStack_5c = *(undefined4 *)(lVar5 + 0x214);
        uStack_58 = *(undefined4 *)(lVar5 + 0x218);
        uStack_54 = *(undefined4 *)(lVar5 + 0x21c);
        uVar14 = local_60;
        uVar15 = uStack_5c;
        uVar16 = uStack_58;
        uVar17 = uStack_54;
        uVar18 = local_50;
      }
      iVar3 = (int)local_80;
      *(undefined4 *)&(this->TestActorLocation).field0_0x0 = uVar14;
      *(undefined4 *)((longlong)&(this->TestActorLocation).field0_0x0 + 4) = uVar15;
      *(undefined4 *)((longlong)&(this->TestActorLocation).field0_0x0 + 8) = uVar16;
      *(undefined4 *)((longlong)&(this->TestActorLocation).field0_0x0 + 0xc) = uVar17;
      (this->TestActorLocation).field0_0x0._s_0.Z = (double)uVar18;
      plVar2 = local_88 + (int)local_80;
      plVar13 = local_88;
      do {
        if ((int)local_80 != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (plVar13 == plVar2) {
          if (local_88 == (longlong *)0x0) {
            return this;
          }
          FMemory::Free(local_88);
          return this;
        }
        if (*plVar13 != 0) {
          lVar5 = *(longlong *)(*plVar13 + 0x1b8);
          local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uStack_74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uStack_6c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (lVar5 != 0) {
            local_38 = *(double *)(lVar5 + 0x220);
            local_48 = *(undefined4 *)(lVar5 + 0x210);
            uStack_44 = *(undefined4 *)(lVar5 + 0x214);
            uStack_40 = *(undefined4 *)(lVar5 + 0x218);
            uStack_3c = *(undefined4 *)(lVar5 + 0x21c);
            local_78 = local_48;
            uStack_74 = uStack_44;
            uStack_70 = uStack_40;
            uStack_6c = uStack_3c;
            local_68 = local_38;
          }
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 <
               pFVar6 + (longlong)(this->Locations).ArrayMax * 0x18)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FFTestRenderingSceneProxy *)(*pcVar8)();
            return pFVar12;
          }
          iVar10 = (this->Locations).ArrayNum;
          if (iVar10 == (this->Locations).ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar1->AllocatorInstance,&(this->Locations).ArrayMax);
          }
          (this->Locations).ArrayNum = iVar10 + 1;
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          pFVar6 = pFVar7 + (longlong)iVar10 * 0x18;
          *(ulonglong *)pFVar6 = CONCAT44(uStack_74,local_78);
          *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_6c,uStack_70);
          *(double *)(pFVar7 + (longlong)iVar10 * 0x18 + 0x10) = local_68;
        }
        plVar13 = plVar13 + 1;
      } while( true );
    }
  }
  this->OwningTest = (AFunctionalTest *)0x0;
  return this;
}

// GetDynamicMeshElements @ 148c908d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFTestRenderingSceneProxy::GetDynamicMeshElements
          (FFTestRenderingSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FPrimitiveDrawInterface *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FLinearColor *in_stack_ffffffffffffff58;
  undefined1 local_88 [8];
  TVector<double>_u_0 local_80 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::RadiusColor.field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.R];
    `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::RadiusColor.field0_0x0._s_0.G =
         FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.G];
    `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::RadiusColor.field0_0x0._s_0.B =
         FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.B];
    `public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::RadiusColor.field0_0x0._s_0.A =
         (float)FColorList::Orange.field0_0x0._3_1_ * __real_3b808081;
    _Init_thread_footer(&`public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  fVar4 = __real_41f00000;
  fVar3 = __real_40400000;
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (uVar6 & 0x1f) & 1) != 0) {
        pFVar5 = FMeshElementCollector::GetPDI(param_4,uVar6);
        iVar2 = (this->Locations).ArrayNum;
        pFVar7 = (this->Locations).AllocatorInstance.Data;
        pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
        while( true ) {
          if ((this->Locations).ArrayNum != iVar2) {
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_88);
          }
          if (pFVar7 == pFVar1) break;
          local_80[0]._0_8_ = *(undefined8 *)pFVar7;
          local_80[0]._8_8_ = *(undefined8 *)(pFVar7 + 8);
          local_80[0]._16_8_ = *(undefined8 *)(pFVar7 + 0x10);
          (**(code **)(pFVar5->_padding_ + 0x30))
                    (pFVar5,&this->TestActorLocation,local_80,
                     &`public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::RadiusColor,(ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00,
                     fVar3,0,0);
          in_stack_ffffffffffffff58 =
               &`public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::RadiusColor;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar5,(TVector<double> *)&local_80[0]._s_0,&this->TestActorLocation,fVar4,
                     &`public:_virtual_void___cdecl_FFTestRenderingSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::RadiusColor,'\0',fVar3,false);
          pFVar7 = pFVar7 + 0x18;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return;
}

// GetMemoryFootprint @ 148c90e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FFTestRenderingSceneProxy::GetMemoryFootprint(FFTestRenderingSceneProxy *this)

{
  return (*(int *)((longlong)&this->_padding_ + 4) + (this->Locations).ArrayMax * 6) * 4 + 0x2b0;
}

// GetTypeHash @ 148c929b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FFTestRenderingSceneProxy::GetTypeHash(FFTestRenderingSceneProxy *this)

{
  return 0x1552620c8;
}

// GetViewRelevance @ 148c92ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FFTestRenderingSceneProxy::GetViewRelevance
          (FFTestRenderingSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if ((bVar2) && ((this->_padding_ & 0x600) != 0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | bVar2 << 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5) & 0xfc) << 5;
  return __return_storage_ptr__;
}

