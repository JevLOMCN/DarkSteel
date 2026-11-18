// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e115610

UClass * __cdecl UOptimusNode_ComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComponentSource",
               &Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComponentSource,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComponentSource>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton;
}

// UOptimusNode_ComponentSource @ 14e15b180

UOptimusNode_ComponentSource * __thiscall
UOptimusNode_ComponentSource::UOptimusNode_ComponentSource
          (UOptimusNode_ComponentSource *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->Binding).field0_0x0.DebugPtr = (UOptimusComponentSourceBinding *)0x0;
  (this->DuplicationInfo).BindingName.ComparisonIndex = 0;
  (this->DuplicationInfo).BindingName.Number = 0;
  (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UOptimusNode_ComponentSource @ 14e15b1e0

UOptimusNode_ComponentSource * __thiscall
UOptimusNode_ComponentSource::UOptimusNode_ComponentSource(UOptimusNode_ComponentSource *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->Binding).field0_0x0.DebugPtr = (UOptimusComponentSourceBinding *)0x0;
  (this->DuplicationInfo).BindingName.ComparisonIndex = 0;
  (this->DuplicationInfo).BindingName.Number = 0;
  (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UOptimusNode_ComponentSource @ 14e163340

void __thiscall
UOptimusNode_ComponentSource::~UOptimusNode_ComponentSource(UOptimusNode_ComponentSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&___7IOptimusNonCollapsibleNode__6B_;
  this->_padding_ = (longlong)&___7IOptimusComponentBindingProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e192ac0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UOptimusNode_ComponentSource::ConstructNode(UOptimusNode_ComponentSource *this)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  UOptimusComponentSourceBinding *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  UClass *pUVar8;
  UOptimusComponentSource *pUVar9;
  FName *pFVar10;
  size_t _Size;
  undefined1 local_res10 [8];
  undefined1 local_e8 [32];
  FUtf8String local_c8;
  undefined1 local_b8 [32];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  FOptimusDataDomain local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  pUVar6 = UOptimusComponentSourceBinding::StaticClass();
  pTVar7 = FOptimusDataTypeRegistry::FindType(this_00,&local_28,pUVar6);
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_e8._8_8_ = 0;
  local_e8._24_8_ = 0;
  local_e8._16_8_ = 0;
  FUtf8String::Reset(&local_c8,0);
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  local_88.Object = pTVar7->Object;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_e8,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar7->SharedReferenceCount).ReferenceController);
  pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_e8,&local_38);
  pFVar2 = pTVar7->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FOptimusDataType *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7406704456668020611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComponentSource.cpp"
                       ,0x7d,"ComponentSourceType.IsValid()");
    if (bVar5) {
code_r0x00014e192d3a:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar3 = (this->Binding).field0_0x0.DebugPtr;
    if (pUVar3 != (UOptimusComponentSourceBinding *)0x0) {
      pUVar6 = (pUVar3->ComponentType).Class.field0_0x0.DebugPtr;
      if ((pUVar6 != (UClass *)0x0) &&
         (pUVar8 = UOptimusComponentSource::StaticClass(),
         _Src.Data = local_c8.Data.AllocatorInstance.Data, pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && ((pUVar3->ComponentType).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
          _Size = (size_t)local_c8.Data.ArrayNum;
          local_b8._0_8_ = local_e8._0_8_;
          local_b8._8_8_ = local_e8._8_8_;
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = local_c8.Data.ArrayNum;
          local_b8._16_8_ = local_e8._16_8_;
          local_b8._24_8_ = local_e8._24_8_;
          if (local_c8.Data.ArrayNum == 0) {
            local_8c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_c8.Data.ArrayNum,0,&local_98,local_c8.Data.ArrayNum,&local_8c);
            memcpy(local_98.Data,_Src.Data,_Size);
          }
          local_78.Type = Dimensional;
          local_78._4_4_ = 0;
          local_78.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.DimensionNames.ArrayNum = 0;
          local_78.DimensionNames.ArrayMax = 0;
          local_78.Multiplier = 0;
          local_78._28_4_ = 0;
          local_78.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Expression.Data.ArrayNum = 0;
          local_78.Expression.Data.ArrayMax = 0;
          local_78.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.LevelNames_DEPRECATED.ArrayNum = 0;
          local_78.LevelNames_DEPRECATED.ArrayMax = 0;
          FOptimusDataDomain::FOptimusDataDomain(&local_78);
          pUVar9 = UOptimusComponentSourceBinding::GetComponentSource
                             ((this->Binding).field0_0x0.DebugPtr);
          pFVar10 = (FName *)(**(code **)(*(longlong *)pUVar9 + 0x2b8))(pUVar9,local_res10);
          UOptimusNode::AddPinDirect
                    ((UOptimusNode *)this,*pFVar10,Output,&local_78,(FOptimusDataTypeRef *)local_b8,
                     (UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
          if (local_78.LevelNames_DEPRECATED.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.LevelNames_DEPRECATED.AllocatorInstance.Data);
          }
          if (local_78.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Expression.Data.AllocatorInstance.Data);
          }
          if (local_78.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.DimensionNames.AllocatorInstance.Data);
          }
          goto LAB_14e192d3b;
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7406704456668020609>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComponentSource.cpp"
                         ,0x7f,"Binding->ComponentType");
      if (bVar5) goto code_r0x00014e192d3a;
    }
  }
LAB_14e192d3b:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// ExportCustomProperties @ 14e1aeaf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UOptimusNode_ComponentSource::ExportCustomProperties
          (UOptimusNode_ComponentSource *this,FOutputDevice *param_1,uint param_2)

{
  int iVar1;
  UOptimusComponentSourceBinding *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FTopLevelAssetPath *this_00;
  UClass *pUVar6;
  FString local_38;
  FString local_28;
  FTopLevelAssetPath local_18;
  
  pUVar2 = (this->Binding).field0_0x0.DebugPtr;
  if (pUVar2 == (UOptimusComponentSourceBinding *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7406704456668020671>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComponentSource.cpp"
                       ,0x41,"Binding");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = (pUVar2->ComponentType).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar5 = UOptimusComponentSource::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = (pUVar2->ComponentType).Class.field0_0x0.DebugPtr;
      goto LAB_14e1aeb94;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14e1aeb94:
  this_00 = UStruct::GetStructPathName((UStruct *)pUVar6,&local_18);
  FTopLevelAssetPath::ToString(this_00,&local_28);
  ::FName::ToString(&((this->Binding).field0_0x0.DebugPtr)->BindingName,&local_38);
  if ((0xff < param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FOutputDevice::LogfImpl
            (param_1,L"%sCustomProperties ComponentSourceBinding BindingName=%s ComponentType=%s\n")
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetComponentBinding @ 14e1bd020

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_ComponentSource::GetComponentBinding
          (UOptimusNode_ComponentSource *this,FOptimusPinTraversalContext *param_1)

{
  return (UOptimusComponentSourceBinding *)this->_padding_;
}

// GetComponentPin @ 14e1be970

UOptimusNodePin * __thiscall
UOptimusNode_ComponentSource::GetComponentPin(UOptimusNode_ComponentSource *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusNodePin *pUVar4;
  UOptimusNodePin **ppUVar5;
  TArrayView<UOptimusNodePin_*_const,int> local_18;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusNodePin *)(*pcVar2)();
      return pUVar4;
    }
  }
  else if (iVar1 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7406704456668020562>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComponentSource.cpp"
                       ,0xae,"!GetPins().IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusNodePin *)(*pcVar2)();
      return pUVar4;
    }
    return (UOptimusNodePin *)0x0;
  }
  local_18.DataPtr = (UOptimusNodePin **)this->_padding_;
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusNodePin *)(*pcVar2)();
      return pUVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  ppUVar5 = TArrayView<UOptimusNodePin_*_const,int>::operator[](&local_18,0);
  return *ppUVar5;
}

// GetNodeCategory @ 14e1cacb0

FName __thiscall UOptimusNode_ComponentSource::GetNodeCategory(UOptimusNode_ComponentSource *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ComponentCategory,"Component");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ComponentCategory;
  return in_RDX;
}

// GetPrivateStaticClass @ 14e1d73a0

UClass * __cdecl UOptimusNode_ComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComponentSource",
               &Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComponentSource,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComponentSource>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComponentSource.InnerSingleton;
}

// ImportCustomProperties @ 14e1e9c90

void __thiscall
UOptimusNode_ComponentSource::ImportCustomProperties
          (UOptimusNode_ComponentSource *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FNameEntryId FVar9;
  wchar_t *local_res10;
  FName local_res20;
  FString local_48;
  FTopLevelAssetPath local_38;
  undefined1 local_28 [32];
  
  local_res10 = param_1;
  bVar6 = FParse::Command(&local_res10,L"ComponentSourceBinding",true);
  if (bVar6) {
    FVar9.Value = 0;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    bVar6 = FParse::Value(local_res10,L"BindingName=",&local_res20);
    if (bVar6) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      bVar6 = FParse::Value(local_res10,L"ComponentType=",&local_48,true,(wchar_t **)0x0);
      if (bVar6) {
        local_38.PackageName.ComparisonIndex.Value = 0;
        local_38.PackageName.Number = 0;
        local_38.AssetName.ComparisonIndex.Value = 0;
        local_38.AssetName.Number = 0;
        if (local_48.Data.ArrayNum != 0) {
          FVar9.Value = local_48.Data.ArrayNum - 1;
        }
        local_28._8_4_ = FVar9.Value;
        local_28._0_8_ = local_48.Data.AllocatorInstance.Data;
        FTopLevelAssetPath::TrySetPath(&local_38,(TStringView<wchar_t> *)local_28);
        FVar4 = local_38.AssetName;
        FVar2 = local_38.PackageName;
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        FVar5 = local_38.AssetName;
        FVar3 = local_38.PackageName;
        local_38.PackageName.ComparisonIndex = FVar2.ComparisonIndex.Value;
        local_38.PackageName.Number = FVar2.Number;
        local_28._0_4_ = local_38.PackageName.ComparisonIndex.Value;
        local_28._4_4_ = local_38.PackageName.Number;
        local_38.AssetName.ComparisonIndex = FVar4.ComparisonIndex.Value;
        local_38.AssetName.Number = FVar4.Number;
        local_28._8_4_ = local_38.AssetName.ComparisonIndex.Value;
        local_28._12_4_ = local_38.AssetName.Number;
        local_38.PackageName = FVar3;
        local_38.AssetName = FVar5;
        pUVar7 = (UClass *)StaticFindObject(pUVar7,(FTopLevelAssetPath *)local_28,None);
        if (pUVar7 != (UClass *)0x0) {
          pUVar8 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) {
            (this->DuplicationInfo).BindingName = local_res20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr = pUVar7;
          }
        }
      }
      if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PostDuplicate @ 14e1fa400

void __thiscall
UOptimusNode_ComponentSource::PostDuplicate(UOptimusNode_ComponentSource *this,Type param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  UOptimusDeformer *pUVar6;
  UOptimusComponentSourceBindingContainer *pUVar7;
  UOptimusDeformer *pUVar8;
  UOptimusComponentSourceBinding *pUVar9;
  undefined4 in_register_00000014;
  longlong lVar10;
  
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  lVar10 = this->_padding_;
  if (lVar10 == 0) {
    return;
  }
  pUVar4 = UOptimusNodeGraph::StaticClass();
  lVar10 = *(longlong *)(lVar10 + 0x10);
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(lVar10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  lVar10 = this->_padding_;
  if (lVar10 == 0) {
LAB_14e1fa480:
    lVar10 = 0;
  }
  else {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14e1fa480;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  pUVar6 = (UOptimusDeformer *)(**(code **)(*plVar5 + 8))(plVar5);
  if (pUVar6 == (UOptimusDeformer *)0x0) {
    return;
  }
  pUVar4 = UOptimusDeformer::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar6->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  pUVar9 = (this->Binding).field0_0x0.DebugPtr;
  if (pUVar9 != (UOptimusComponentSourceBinding *)0x0) {
    pUVar7 = CastChecked<UOptimusComponentSourceBindingContainer,UObject>
                       ((UObject *)pUVar9->_padding_);
    if ((pUVar7 != (UOptimusComponentSourceBindingContainer *)0x0) &&
       (pUVar8 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar7->_padding_),
       pUVar8 == pUVar6)) {
      return;
    }
    pUVar9 = (UOptimusComponentSourceBinding *)
             (**(code **)(pUVar6->_padding_ + 0x40))
                       (&pUVar6->_padding_,((this->Binding).field0_0x0.DebugPtr)->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UOptimusComponentSourceBinding *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Binding).field0_0x0.DebugPtr = pUVar9;
    return;
  }
  if ((this->DuplicationInfo).BindingName == (FName)0x0) {
    return;
  }
  pUVar9 = (UOptimusComponentSourceBinding *)
           (**(code **)(pUVar6->_padding_ + 0x40))
                     (&pUVar6->_padding_,(this->DuplicationInfo).BindingName);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar9 == (UOptimusComponentSourceBinding *)0x0)) {
    (this->Binding).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UOptimusComponentSourceBinding *)0x0) goto LAB_14e1fa5f6;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->Binding).field0_0x0.DebugPtr = pUVar9;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14e1fa5c4:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPins().IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComponentSource.cpp"
                       ,0x36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 != 0) goto LAB_14e1fa5c4;
  (**(code **)(this->_padding_ + 0x2f0))(this);
LAB_14e1fa5f6:
  (this->DuplicationInfo).BindingName.ComparisonIndex = 0;
  (this->DuplicationInfo).BindingName.Number = 0;
  (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return;
}

// PreDuplicateRequirementActions @ 14e2007d0

void __thiscall
UOptimusNode_ComponentSource::PreDuplicateRequirementActions
          (UOptimusNode_ComponentSource *this,UOptimusNodeGraph *param_1,
          FOptimusCompoundAction *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  FName FVar8;
  bool bVar9;
  longlong *plVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong *plVar15;
  UClass *pUVar16;
  UOptimusComponentSource *local_res8;
  longlong local_res20;
  TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> local_48;
  
  if ((this->DuplicationInfo).BindingName == (FName)0x0) {
    return;
  }
  plVar10 = (longlong *)(**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  pUVar16 = (UClass *)0x0;
  if ((plVar10 != (longlong *)0x0) &&
     (local_res20 = (**(code **)(*plVar10 + 8))(plVar10), local_res20 != 0)) {
    pUVar11 = UOptimusDeformer::StaticClass();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(local_res20 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar11->_padding_)) goto LAB_14e20085e;
  }
  local_res20 = 0;
LAB_14e20085e:
  lVar5 = *(longlong *)(local_res20 + 0x128);
  plVar15 = *(longlong **)(lVar5 + 0x28);
  iVar3 = *(int *)(lVar5 + 0x30);
  plVar10 = plVar15 + iVar3;
  do {
    if (*(int *)(lVar5 + 0x30) != iVar3) {
      `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (plVar15 == plVar10) {
      do {
        lVar5 = *(longlong *)(local_res20 + 0x128);
        bVar9 = false;
        plVar15 = *(longlong **)(lVar5 + 0x28);
        iVar3 = *(int *)(lVar5 + 0x30);
        plVar10 = plVar15 + iVar3;
        while( true ) {
          if (*(int *)(lVar5 + 0x30) != iVar3) {
            `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_res8);
          }
          if (plVar15 == plVar10) break;
          FVar8 = (this->DuplicationInfo).BindingName;
          if (*(FName *)(*plVar15 + 0x28) == FVar8) {
            bVar9 = true;
            (this->DuplicationInfo).BindingName.Number = FVar8.Number + 1;
          }
          plVar15 = plVar15 + 1;
        }
      } while (bVar9);
      pUVar16 = (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr;
      pUVar11 = (UClass *)0x0;
      if ((pUVar16 != (UClass *)0x0) &&
         (pUVar12 = UOptimusComponentSource::StaticClass(), pUVar12 != (UClass *)0x0)) {
        iVar3 = (int)pUVar12->_padding_;
        if (((int)pUVar16->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar12->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar11 = (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr;
        }
      }
      local_res8 = UClass::GetDefaultObject<UOptimusComponentSource>(pUVar11);
      FOptimusCompoundAction::
      AddSubAction<FOptimusComponentBindingAction_AddBinding,UOptimusComponentSource_*,FName_&>
                (param_2,&local_48,&local_res8,&(this->DuplicationInfo).BindingName);
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_48.WeakReferenceCount.ReferenceController,1);
        }
      }
      return;
    }
    lVar6 = *plVar15;
    if (*(FName *)(lVar6 + 0x28) == (this->DuplicationInfo).BindingName) {
      lVar7 = *(longlong *)(lVar6 + 0x30);
      pUVar11 = pUVar16;
      if ((lVar7 != 0) &&
         (pUVar12 = UOptimusComponentSource::StaticClass(), pUVar12 != (UClass *)0x0)) {
        iVar4 = (int)pUVar12->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar12->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar11 = *(UClass **)(lVar6 + 0x30);
        }
      }
      pUVar12 = (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr;
      pUVar14 = pUVar16;
      if ((pUVar12 != (UClass *)0x0) &&
         (pUVar13 = UOptimusComponentSource::StaticClass(), pUVar13 != (UClass *)0x0)) {
        iVar4 = (int)pUVar13->_padding_;
        if (((int)pUVar12->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar13->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar14 = (this->DuplicationInfo).ComponentType.Class.field0_0x0.DebugPtr;
        }
      }
      if (pUVar11 == pUVar14) {
        return;
      }
    }
    plVar15 = plVar15 + 1;
  } while( true );
}

// SetComponentSourceBinding @ 14e21cb60

void __thiscall
UOptimusNode_ComponentSource::SetComponentSourceBinding
          (UOptimusNode_ComponentSource *this,UOptimusComponentSourceBinding *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UOptimusComponentSourceBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Binding).field0_0x0.DebugPtr = param_1;
  pFVar1 = FText::FromName(&local_18,&param_1->BindingName);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar1);
  return;
}

// StaticRegisterNativesUOptimusNode_ComponentSource @ 14e225c40

void __cdecl UOptimusNode_ComponentSource::StaticRegisterNativesUOptimusNode_ComponentSource(void)

{
  return;
}

// _getUObject @ 14e238e00

UObject * __thiscall UOptimusNode_ComponentSource::_getUObject(UOptimusNode_ComponentSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238e10

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ComponentSource::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ComponentSource::_getUObject_adjustor_8__(UOptimusNode_ComponentSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ComponentSource *)&this[-1].DuplicationInfo.ComponentType);
  return (UObject *)pUVar1;
}

