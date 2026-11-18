// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 13

// StaticClass @ 14e10b790

UClass * __cdecl UOptimusNode_AnimAttributeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_AnimAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_AnimAttributeDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusNode_AnimAttributeDataInterface>,local_res8,
               UOptimusNode_DataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton;
}

// UOptimusNode_AnimAttributeDataInterface @ 14e15af90

UOptimusNode_AnimAttributeDataInterface * __thiscall
UOptimusNode_AnimAttributeDataInterface::UOptimusNode_AnimAttributeDataInterface
          (UOptimusNode_AnimAttributeDataInterface *this,FVTableHelper *param_1)

{
  UOptimusNode_DataInterface::UOptimusNode_DataInterface((UOptimusNode_DataInterface *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusDataInterfaceProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusComponentBindingProvider__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  *(undefined ***)&this->field_0x120 = &_vftable__for__IOptimusPropertyPinProvider__;
  return this;
}

// UOptimusNode_AnimAttributeDataInterface @ 14e15aff0

UOptimusNode_AnimAttributeDataInterface * __thiscall
UOptimusNode_AnimAttributeDataInterface::UOptimusNode_AnimAttributeDataInterface
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  UOptimusNode_DataInterface::UOptimusNode_DataInterface((UOptimusNode_DataInterface *)this);
  this->field_0xb1 = 1;
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusDataInterfaceProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusComponentBindingProvider__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  *(undefined ***)&this->field_0x120 = &_vftable__for__IOptimusPropertyPinProvider__;
  return this;
}

// ~UOptimusNode_AnimAttributeDataInterface @ 14e1632a0

void __thiscall
UOptimusNode_AnimAttributeDataInterface::~UOptimusNode_AnimAttributeDataInterface
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  *(undefined ***)this = &UOptimusNode_DataInterface::_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x120 = &___7IOptimusPropertyPinProvider__6B_;
  *(undefined ***)&this->field_0x118 = &___7IOptimusPinMutabilityDefiner__6B_;
  *(undefined ***)&this->field_0x110 = &___7IOptimusComponentBindingProvider__6B_;
  *(undefined ***)&this->field_0x108 = &___7IOptimusDataInterfaceProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ClearOutputPins @ 14e181d20

void __thiscall
UOptimusNode_AnimAttributeDataInterface::ClearOutputPins
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_18;
  
  UOptimusNode::GetPinsByDirection((UOptimusNode *)this,&local_18,Output,false);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14e1d7220

UClass * __cdecl UOptimusNode_AnimAttributeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_AnimAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_AnimAttributeDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusNode_AnimAttributeDataInterface>,local_res8,
               UOptimusNode_DataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.InnerSingleton;
}

// OnDataTypeChanged @ 14e1f4bd0

void __thiscall
UOptimusNode_AnimAttributeDataInterface::OnDataTypeChanged
          (UOptimusNode_AnimAttributeDataInterface *this,FName param_1)

{
  undefined1 *this_00;
  bool bVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  this_00 = &this->field_0x130;
  (**(code **)(**(longlong **)this_00 + 0x390))();
  if (*(longlong *)this_00 != 0) {
    pUVar2 = UOptimusAnimAttributeDataInterface::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      plVar3 = *(longlong **)this_00;
      goto LAB_14e1f4c11;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14e1f4c11:
                    /* WARNING: Could not recover jumptable at 0x00014e1f4c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x390))(plVar3,param_1);
  return;
}

// PostDuplicate @ 14e1fa380

void __thiscall
UOptimusNode_AnimAttributeDataInterface::PostDuplicate
          (UOptimusNode_AnimAttributeDataInterface *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->field_0x130 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x1b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(UOptimusNode_AnimAttributeDataInterface **)(*(longlong *)&this->field_0x130 + 0x20) != this)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceData->GetOuter() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RefreshOutputPins @ 14e205420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusNode_AnimAttributeDataInterface::RefreshOutputPins
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  int iVar1;
  int iVar2;
  UOptimusNodePin *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  UOptimusNodePin *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UOptimusNode *pUVar10;
  UClass *pUVar11;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ForAnyElementType FVar15;
  undefined8 *puVar16;
  UOptimusNodeGraph *pUVar17;
  longlong lVar18;
  undefined8 *puVar19;
  FName FVar20;
  undefined1 *puVar21;
  FName FVar22;
  undefined1 auStackY_188 [32];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [6];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_140;
  FName local_130;
  FName local_128;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_120;
  FOptimusDataDomain local_110;
  FName local_d0;
  UOptimusNode_AnimAttributeDataInterface *local_c8;
  undefined1 local_c0 [56];
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar1 = *(int *)&this->field_0x58;
  puVar16 = *(undefined8 **)&this->field_0x50;
  lVar18 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_c8 = this;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar19 = puVar16 + iVar1;
  do {
    if (puVar16 == puVar19) {
      UOptimusNode::GetPinsByDirection((UOptimusNode *)this,&local_120,Output,false);
      iVar1 = local_120.ArrayNum;
      uVar13 = (ulonglong)local_120.ArrayNum;
      pFVar4 = local_120.AllocatorInstance.Data + uVar13 * 8;
      FVar15.Data = local_120.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar13 != iVar1) {
          local_148 = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_148);
        }
        if (FVar15.Data == pFVar4) break;
        UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar15.Data);
        uVar13 = (ulonglong)(uint)local_120.ArrayNum;
        FVar15.Data = FVar15.Data + 8;
      }
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      if (*(longlong *)&this->field_0x130 != 0) {
        pUVar11 = UOptimusAnimAttributeDataInterface::StaticClass();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x130,pUVar11);
        if (bVar8) {
          lVar18 = *(longlong *)&this->field_0x130;
        }
      }
      lVar5 = *(longlong *)(lVar18 + 0x28);
      iVar1 = *(int *)(lVar18 + 0x30);
      puVar16 = (undefined8 *)(lVar5 + 0x20);
      while( true ) {
        if (*(int *)(lVar18 + 0x30) != iVar1) {
          local_147 = 0;
          `TCheckedPointerIterator<FOptimusAnimAttributeDescription,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_147);
        }
        if (puVar16 + -4 == (undefined8 *)((longlong)iVar1 * 0x78 + lVar5)) break;
        local_c0._0_8_ = *(FName *)(puVar16 + -1);
        local_c0._8_8_ = *puVar16;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_c0 + 0x10),(FSoftObjectPath *)(puVar16 + 1));
        local_110.Type = Dimensional;
        local_110._4_4_ = 0;
        local_110.Multiplier = 1;
        local_110._28_4_ = 0;
        local_110.LevelNames_DEPRECATED.ArrayMax = 0;
        local_110.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.DimensionNames.ArrayNum = 0;
        local_110.DimensionNames.ArrayMax = 0;
        local_110.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Expression.Data.ArrayNum = 0;
        local_110.Expression.Data.ArrayMax = 0;
        ::FName::FName(&local_130,"Vertex");
        local_110.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.LevelNames_DEPRECATED.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,0,&local_110.LevelNames_DEPRECATED.AllocatorInstance,1,
                   &local_110.LevelNames_DEPRECATED.ArrayMax);
        *(FName *)local_110.LevelNames_DEPRECATED.AllocatorInstance.Data = local_130;
        UOptimusNode::AddPin
                  ((UOptimusNode *)this,*(FName *)(puVar16 + 9),Output,&local_110,
                   (FOptimusDataTypeRef *)local_c0,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
        if ((FName *)local_110.LevelNames_DEPRECATED.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_110.LevelNames_DEPRECATED.AllocatorInstance.Data);
        }
        if (local_110.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Expression.Data.AllocatorInstance.Data);
        }
        if (local_110.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.DimensionNames.AllocatorInstance.Data);
        }
        puVar16 = puVar16 + 0xf;
      }
      iVar1 = *(int *)&this->field_0x58;
      FVar20 = *(FName *)&this->field_0x50;
      local_128 = FVar20;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar22 = (FName)((longlong)FVar20 + (longlong)iVar1 * 8);
      puVar21 = local_48;
      local_130 = FVar22;
      if (FVar20 != FVar22) {
        do {
          pUVar3 = *(UOptimusNodePin **)FVar20;
          if (pUVar3->Direction == Output) {
            lVar18 = pUVar3->_padding_;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar18);
            puVar21 = local_48;
            if (local_88._8_4_ != local_88._52_4_) {
              puVar14 = local_50;
              if (local_48 != (undefined1 *)0x0) {
                puVar14 = local_48;
              }
              for (iVar1 = *(int *)(puVar14 +
                                   (ulonglong)
                                   (local_40 - 1U & (int)((ulonglong)lVar18 >> 0x20) + uVar9) * 4);
                  iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + local_88._0_8_)) {
                if (*(longlong *)((longlong)iVar1 * 0x20 + local_88._0_8_) == lVar18) {
                  if (((iVar1 != -1) &&
                      (lVar18 = (longlong)iVar1 * 0x20 + local_88._0_8_, lVar18 != 0)) &&
                     ((longlong *)(lVar18 + 8) != (longlong *)0x0)) {
                    puVar19 = *(undefined8 **)(lVar18 + 8);
                    iVar1 = *(int *)(lVar18 + 0x10);
                    puVar16 = puVar19 + iVar1;
                    goto LAB_14e205878;
                  }
                  break;
                }
              }
            }
          }
LAB_14e2058e4:
          FVar20 = (FName)((longlong)FVar20 + 8);
          local_128 = FVar20;
        } while (FVar20 != FVar22);
      }
      local_40 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        FMemory::Free(puVar21);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    pUVar3 = (UOptimusNodePin *)*puVar16;
    if (pUVar3->Direction == Output) {
      pUVar10 = UOptimusNodePin::GetOwningNode(pUVar3);
      pUVar17 = (UOptimusNodeGraph *)pUVar10->_padding_;
      if (pUVar17 == (UOptimusNodeGraph *)0x0) {
LAB_14e205533:
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7986583113880829533>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                           ,0x1a3,"Graph != nullptr");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.ArrayNum = 0;
        local_140.ArrayMax = 0;
      }
      else {
        pUVar11 = UOptimusNodeGraph::StaticClass();
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar11->_padding_)) goto LAB_14e205533;
        UOptimusNodeGraph::GetConnectedPins(pUVar17,&local_140,pUVar3);
      }
      local_d0 = (FName)pUVar3->_padding_;
      pTVar12 = TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
                ::Emplace<FName>((TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&local_88,&local_d0);
      if (pTVar12 != &local_140) {
        pFVar4 = (pTVar12->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar12->AllocatorInstance).Data = local_140.AllocatorInstance.Data;
        local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar12->ArrayNum = local_140.ArrayNum;
        pTVar12->ArrayMax = local_140.ArrayMax;
        local_140.ArrayNum = 0;
        local_140.ArrayMax = 0;
      }
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
    }
    puVar16 = puVar16 + 1;
  } while( true );
LAB_14e205878:
  if (*(int *)(lVar18 + 0x10) != iVar1) {
    `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_146);
  }
  FVar20 = local_128;
  puVar21 = local_48;
  FVar22 = local_130;
  if (puVar19 == puVar16) goto LAB_14e2058e4;
  pUVar6 = (UOptimusNodePin *)*puVar19;
  pUVar17 = *(UOptimusNodeGraph **)&local_c8->field_0x20;
  if (pUVar17 == (UOptimusNodeGraph *)0x0) {
LAB_14e2058c0:
    pUVar17 = (UOptimusNodeGraph *)0x0;
  }
  else {
    pUVar11 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_14e2058c0;
  }
  UOptimusNodeGraph::AddLink(pUVar17,pUVar3,pUVar6);
  puVar19 = puVar19 + 1;
  goto LAB_14e205878;
}

// SetDataInterfaceClass @ 14e21d560

void __thiscall
UOptimusNode_AnimAttributeDataInterface::SetDataInterfaceClass
          (UOptimusNode_AnimAttributeDataInterface *this,
          TSubclassOf<UOptimusComputeDataInterface> param_1)

{
  int iVar1;
  UOptimusAnimAttributeDataInterface *this_00;
  bool bVar2;
  UClass *pUVar3;
  UObjectBase *this_01;
  UClass *pUVar4;
  FOptimusDataTypeRegistry *this_02;
  FFieldClass *pFVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  undefined1 *this_03;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  FString local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  undefined1 local_38 [32];
  FUtf8String local_18;
  
  pUVar4 = *(UClass **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14e21d597:
      pUVar3 = UOptimusComputeDataInterface::StaticClass();
      if (pUVar3 != (UClass *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_14e21d5c8;
      }
    }
  }
  else if (pUVar4 != (UClass *)0x0) goto LAB_14e21d597;
  pUVar4 = (UClass *)0x0;
LAB_14e21d5c8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UClass **)&this->field_0x128 = pUVar4;
  this_01 = (UObjectBase *)
            NewObject<UOptimusComputeDataInterface>
                      ((UObject *)this,pUVar4,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this_03 = &this->field_0x130;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  *(UObjectBase **)this_03 = this_01;
  UObjectBase::AtomicallySetFlags(this_01,RF_Transactional);
  (**(code **)(**(longlong **)this_03 + 0x360))();
  if (*(longlong *)this_03 != 0) {
    pUVar4 = UOptimusAnimAttributeDataInterface::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_03,pUVar4);
    if ((bVar2) &&
       (this_00 = *(UOptimusAnimAttributeDataInterface **)this_03,
       this_00 != (UOptimusAnimAttributeDataInterface *)0x0)) {
      this_02 = FOptimusDataTypeRegistry::Get();
      pFVar5 = FFloatProperty::StaticClass();
      pTVar6 = FOptimusDataTypeRegistry::FindType(this_02,&local_48,pFVar5);
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_38._8_8_ = 0;
      local_38._24_8_ = 0;
      local_38._16_8_ = 0;
      FUtf8String::Reset(&local_18,0);
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      local_68.Object = pTVar6->Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_38,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar6->SharedReferenceCount).ReferenceController);
      ::FString::FString(&local_58,L"EmptyName");
      UOptimusAnimAttributeDataInterface::AddAnimAttribute
                (this_00,&local_58,(FName)0x0,(FOptimusDataTypeRef *)local_38);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  UObjectBase::AtomicallySetFlags(*(UObjectBase **)this_03,RF_Transactional);
  return;
}

// StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface @ 14e225c20

void __cdecl
UOptimusNode_AnimAttributeDataInterface::
StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface(void)

{
  return;
}

// UpdatePinNames @ 14e22c7f0

void __thiscall
UOptimusNode_AnimAttributeDataInterface::UpdatePinNames
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  FOptimusCDIPinDefinition *pFVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ForAnyElementType local_38;
  undefined8 local_30;
  FOptimusCDIPinDefinition *local_28;
  int local_20;
  
  if (*(longlong *)&this->field_0x130 != 0) {
    pUVar7 = UOptimusAnimAttributeDataInterface::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x130,pUVar7);
    if (bVar5) {
      plVar10 = *(longlong **)&this->field_0x130;
      goto LAB_14e22c83a;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_14e22c83a:
  (**(code **)(*plVar10 + 0x350))();
  iVar6 = *(int *)&this->field_0x58;
  pFVar11 = *(FScriptContainerElement **)&this->field_0x50;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar11 + (longlong)iVar6 * 8;
  local_30 = 0;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
    if (*(char *)(*(longlong *)pFVar11 + 0x29) == '\x02') {
      iVar6 = iVar8;
      if ((local_38.Data <= pFVar11) &&
         (local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20), lVar14 = (longlong)local_30._4_4_,
         pFVar11 < local_38.Data + lVar14 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (int)local_30;
      }
      if (iVar6 == local_30._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38,(int *)((longlong)&local_30 + 4));
      }
      iVar8 = iVar6 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar8);
      *(longlong *)(local_38.Data + (longlong)iVar6 * 8) = *(longlong *)pFVar11;
    }
  }
  if (local_20 == iVar8) {
    uVar13 = 0;
    if (0 < iVar8) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        uVar12 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < local_20) {
          uVar9 = uVar12;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (int)local_30;
        }
        pFVar4 = local_28;
        uVar9 = 0;
        if ((int)uVar13 < iVar8) {
          uVar9 = uVar12;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (int)local_30;
        }
        if (*(longlong *)(*(longlong *)(local_38.Data + lVar15 * 8) + 0x18) !=
            *(longlong *)((longlong)&(pFVar4->PinName).ComparisonIndex.Value + lVar14)) {
          uVar9 = 0;
          if ((int)uVar13 < local_20) {
            uVar9 = uVar12;
          }
          if (uVar9 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (int)local_30;
          }
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = uVar12;
          }
          FVar2 = *(FName *)((longlong)&(local_28->PinName).ComparisonIndex.Value + lVar14);
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UOptimusNode::SetPinName
                    ((UOptimusNode *)this,*(UOptimusNodePin **)(local_38.Data + lVar15 * 8),FVar2);
          iVar8 = (int)local_30;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 0x38;
      } while ((int)uVar13 < iVar8);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<432858254473691286>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_AnimAttributeDataInterface.cpp"
                       ,0x96,"PinDefinitions.Num() == OutputPins.Num()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<FOptimusCDIPinDefinition,int>(local_28,local_20);
  if (local_28 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// UpdatePinTypes @ 14e22da00

void __thiscall
UOptimusNode_AnimAttributeDataInterface::UpdatePinTypes
          (UOptimusNode_AnimAttributeDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FOptimusDataType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ForAnyElementType local_88;
  undefined8 local_80;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  undefined1 local_58 [48];
  
  if (*(longlong *)&this->field_0x130 != 0) {
    pUVar8 = UOptimusAnimAttributeDataInterface::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x130,pUVar8);
    if (bVar5) {
      lVar16 = *(longlong *)&this->field_0x130;
      goto LAB_14e22da54;
    }
  }
  lVar16 = 0;
LAB_14e22da54:
  pFVar12 = *(FScriptContainerElement **)&this->field_0x50;
  iVar6 = *(int *)&this->field_0x58;
  iVar2 = *(int *)(lVar16 + 0x30);
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar12 + (longlong)iVar6 * 8;
  local_80 = 0;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    if (*(char *)(*(longlong *)pFVar12 + 0x29) == '\x02') {
      iVar6 = iVar10;
      if ((local_88.Data <= pFVar12) &&
         (local_80._4_4_ = (int)((ulonglong)local_80 >> 0x20), lVar15 = (longlong)local_80._4_4_,
         pFVar12 < local_88.Data + lVar15 * 8)) {
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
                          (0x808,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar10 = iVar6 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar10);
      *(longlong *)(local_88.Data + (longlong)iVar6 * 8) = *(longlong *)pFVar12;
    }
  }
  if (iVar2 == iVar10) {
    uVar14 = 0;
    if (0 < iVar10) {
      lVar15 = 0;
      lVar17 = 0;
      do {
        uVar13 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar16 + 0x30)) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar9 = FOptimusDataTypeRef::Resolve
                           ((FOptimusDataTypeRef *)
                            ((longlong)(int)uVar14 * 0x78 + *(longlong *)(lVar16 + 0x28) + 0x18),
                            &local_68);
        uVar7 = 0;
        if ((int)uVar14 < (int)local_80) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FOptimusDataTypeRef::Resolve
                  ((FOptimusDataTypeRef *)(*(longlong *)(local_88.Data + lVar15 * 8) + 0x70),
                   &local_78);
        pFVar3 = pTVar9->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        if (local_78.Object != pFVar3) {
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar16 + 0x30)) {
            uVar7 = uVar13;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar11 = *(longlong *)(lVar16 + 0x28) + lVar17;
          local_58._0_8_ = *(FName *)(lVar11 + 0x18);
          local_58._8_8_ = *(undefined8 *)(lVar11 + 0x20);
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_58 + 0x10),(FSoftObjectPath *)(lVar11 + 0x28));
          uVar7 = 0;
          if ((int)uVar14 < (int)local_80) {
            uVar7 = uVar13;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UOptimusNode::SetPinDataType
                    ((UOptimusNode *)this,*(UOptimusNodePin **)(local_88.Data + lVar15 * 8),
                     (FOptimusDataTypeRef *)local_58);
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 1;
        lVar17 = lVar17 + 0x78;
      } while ((int)uVar14 < (int)local_80);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<432858254473691252>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_AnimAttributeDataInterface.cpp"
                       ,0x74,"NumAttributes == OutputPins.Num()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

