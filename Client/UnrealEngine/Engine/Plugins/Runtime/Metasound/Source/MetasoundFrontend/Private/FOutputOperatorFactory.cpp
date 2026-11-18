// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FOutputOperatorFactory @ 14af3d540

FOutputOperatorFactory * __thiscall
Metasound::OutputNodePrivate::FOutputOperatorFactory::FOutputOperatorFactory
          (FOutputOperatorFactory *this,FName *param_1)

{
  this->_padding_ = (longlong)&___7FOutputOperatorFactory_OutputNodePrivate_Metasound__6B_;
  this->VertexName = *param_1;
  return this;
}

// CreateOperator @ 14af76340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::OutputNodePrivate::FOutputOperatorFactory::CreateOperator
          (FOutputOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *this_00;
  longlong *this_01;
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FInputDataVertex *pFVar9;
  FAnyDataReference *pFVar10;
  longlong *plVar11;
  FName *this_02;
  FString *pFVar12;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar13;
  FMissingOutputNodeInputReferenceError *pFVar14;
  IDataTypeRegistry *pIVar15;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar16;
  INode *pIVar17;
  FMissingOutputNodeInputReferenceError *this_03;
  FMissingOutputNodeInputReferenceError *pFVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  ulonglong uVar22;
  ForAnyElementType *in_R9;
  wchar_t *pwVar23;
  FBuildResults *pFVar24;
  undefined1 auStack_138 [32];
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  FBuildResults *local_f8;
  undefined1 local_f0 [8];
  EDataReferenceAccessType local_e8;
  IDataReference *local_e0;
  char local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a0;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  undefined1 local_70 [16];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = &this->VertexName;
  local_f8 = param_2;
  pFVar9 = FInputVertexInterfaceData::GetVertex
                     (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,this_00);
  pFVar10 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,this_00);
  this_01 = &pFVar9->_padding_;
  if (pFVar10 == (FAnyDataReference *)0x0) {
    pIVar15 = Frontend::IDataTypeRegistry::Get();
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,this_01);
    pFVar24 = local_f8;
    if (plVar11 != (longlong *)0x0) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a0,&(pFVar9->Literal).Value);
      bVar7 = FLiteral::IsValid((FLiteral *)&local_a0);
      if (!bVar7) {
        pTVar16 = (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                   *)(**(code **)((longlong)*pIVar15 + 0x80))(pIVar15,local_70,this_01);
        if (pTVar16 != &local_a0) {
          bVar2 = pTVar16->TypeIndex;
          local_78 = CONCAT71(local_78._1_7_,bVar2);
          if ((0xc < (ulonglong)bVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            TVar13.Ptr = (IOperator *)(*pcVar3)();
            return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
                   TVar13.Ptr;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[bVar2])(&local_88,pTVar16);
          uVar20 = local_78;
          lVar6 = lStack_80;
          lVar5 = local_88;
          local_78 = local_a0._16_8_;
          uVar22 = local_a0._16_8_ & 0xff;
          local_a0._16_8_ = uVar20;
          local_88 = local_a0._padding_;
          lStack_80 = local_a0._padding_;
          local_a0._padding_ = lVar5;
          local_a0._padding_ = lVar6;
          if ((0xc < uVar22) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            TVar13.Ptr = (IOperator *)(*pcVar3)();
            return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
                   TVar13.Ptr;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22])(&local_88);
        }
        if ((0xc < local_60) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          TVar13.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar13.Ptr;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60])(local_70);
      }
      pFVar24 = local_f8;
      local_118 = *(FScriptContainerElement **)&(local_f8->Errors).ArrayNum;
      (**(code **)(*plVar11 + 0x148))(plVar11,local_f0,4,&local_a0);
      if (local_d8 != '\0') {
        pIVar17 = ::operator_new(0x28);
        if (pIVar17 == (INode *)0x0) {
          pIVar17 = (INode *)0x0;
        }
        else {
          *pIVar17 = (INode)&___7FOutputOperator_OutputNodePrivate_Metasound__6B_;
          *(FName *)(pIVar17 + 1) = *this_00;
          FAnyDataReference::FAnyDataReference((FAnyDataReference *)(pIVar17 + 2),local_e8,local_e0)
          ;
          pIVar17[2] = (INode)&___7FAnyDataReference_Metasound__6B_;
        }
        param_1->Node = pIVar17;
        if ((local_d8 != '\0') && (local_e0 != (IDataReference *)0x0)) {
          (**(code **)*local_e0)(local_e0,1);
        }
        uVar20 = local_a0._16_8_ & 0xff;
        if ((0xc < local_a0.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          TVar13.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar13.Ptr;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar20])(&local_a0);
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
               (IOperator *)param_1;
      }
      uVar20 = local_a0._16_8_ & 0xff;
      if ((0xc < local_a0.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        TVar13.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar13.Ptr;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar20])(&local_a0);
    }
    pIVar17 = (INode *)(pFVar24->Errors).AllocatorInstance.Data;
    this_03 = ::operator_new(0x60);
    pFVar14 = (FMissingOutputNodeInputReferenceError *)0x0;
    pFVar18 = pFVar14;
    if (this_03 != (FMissingOutputNodeInputReferenceError *)0x0) {
      pFVar18 = FMissingOutputNodeInputReferenceError::FMissingOutputNodeInputReferenceError
                          (this_03,pIVar17);
    }
    iVar8 = *(int *)&in_R9[1].Data;
    piVar1 = (int *)((longlong)&in_R9[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,in_R9,piVar1);
    }
    *(int *)&in_R9[1].Data = iVar8 + 1;
    *(FMissingOutputNodeInputReferenceError **)(in_R9->Data + (longlong)iVar8 * 8) = pFVar18;
  }
  else {
    plVar11 = (longlong *)(**(code **)(pFVar10->_padding_ + 8))(pFVar10);
    if (*plVar11 != *this_01) {
      this_02 = (FName *)(**(code **)(pFVar10->_padding_ + 8))(pFVar10);
      pFVar12 = ::FName::ToString(this_02,&local_b0);
      pwVar21 = L"";
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = ::FName::ToString((FName *)this_01,&local_c0);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = ::FName::ToString(this_00,&local_d0);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar21 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      local_118 = (FScriptContainerElement *)pwVar21;
      local_110 = (FScriptContainerElement *)pwVar19;
      local_108 = (FScriptContainerElement *)pwVar23;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ref->GetDataTypeName() == Vertex.DataTypeName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundOutputNode.cpp"
                         ,0x46,
                         L"Mismatched data type names on output node (%s). Expected (%s), received (%s)."
                        );
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        TVar13.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar13.Ptr;
      }
    }
    pFVar14 = ::operator_new(0x28);
    if (pFVar14 == (FMissingOutputNodeInputReferenceError *)0x0) {
      pFVar14 = (FMissingOutputNodeInputReferenceError *)0x0;
    }
    else {
      *(undefined ***)pFVar14 = &___7FOutputOperator_OutputNodePrivate_Metasound__6B_;
      uVar4 = this_00->Number;
      *(uint *)&pFVar14->field_0x8 = (this_00->ComparisonIndex).Value;
      *(uint *)&pFVar14->field_0xc = uVar4;
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)&pFVar14->field_0x10,pFVar10->AccessType,
                 (pFVar10->DataRefPtr).Ptr);
      *(undefined ***)&pFVar14->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
    }
  }
  param_1->Node = (INode *)pFVar14;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

