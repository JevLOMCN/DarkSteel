// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8bc960

UScriptStruct * __cdecl FSumVectorFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode,(UObject *)pUVar1,
                         L"SumVectorFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8bcb30

FName __thiscall FSumVectorFieldDataflowNode::GetType(FSumVectorFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSumVectorFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bcba0

bool __thiscall FSumVectorFieldDataflowNode::IsA(FSumVectorFieldDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FSumVectorFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bcc08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bcc08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bcc26;
      }
    }
  }
  bVar5 = true;
LAB_14e8bcc26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bcf00

FStructOnScope * __thiscall
FSumVectorFieldDataflowNode::NewStructOnScope(FSumVectorFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode,(UObject *)pUVar2,
                           L"SumVectorFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bcf90

void __thiscall
FSumVectorFieldDataflowNode::SerializeInternal(FSumVectorFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode,(UObject *)pUVar1,
                         L"SumVectorFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bd00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bd080

FName __thiscall FSumVectorFieldDataflowNode::GetDisplayName(FSumVectorFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SumVectorField");
  return in_RDX;
}

// GetCategory @ 14e8bd0b0

FName __thiscall FSumVectorFieldDataflowNode::GetCategory(FSumVectorFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8bd110

FString * __thiscall
FSumVectorFieldDataflowNode::GetTags
          (FSumVectorFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bd140

UScriptStruct * __thiscall
FSumVectorFieldDataflowNode::TypedScriptStruct(FSumVectorFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode,(UObject *)pUVar1,
                         L"SumVectorFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSumVectorFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bd7a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSumVectorFieldDataflowNode::Evaluate
          (FSumVectorFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  FDataflowOutput *pFVar3;
  FDataflowOutput *pFVar4;
  FDataflowOutput *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  float fVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  undefined1 *puVar17;
  FDataflowInput *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  float fVar21;
  FScriptContainerElement *pFVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  FDataflowOutput *pFVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float local_res18 [2];
  float local_res20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_438;
  FDataflowOutput *local_428;
  float local_420;
  float local_41c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_418;
  FDataflowOutput *local_410;
  TArray<int,TSizedDefaultAllocator<32>_> *local_408;
  float local_400 [2];
  TArray<float,TSizedDefaultAllocator<32>_> *local_3f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3f0;
  longlong local_3e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3e0;
  longlong local_3d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3d0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_398;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_388;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_378;
  TArray<float,TSizedDefaultAllocator<32>_> local_368;
  TArray<int,TSizedDefaultAllocator<32>_> local_358;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_348;
  TArray<float,TSizedDefaultAllocator<32>_> local_338;
  TArray<int,TSizedDefaultAllocator<32>_> local_328;
  TArray<int,TSizedDefaultAllocator<32>_> local_318;
  float local_308;
  int local_304;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_300;
  TArray<int,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a0;
  FConnectionReference local_290;
  FConnectionReference local_278;
  FConnectionReference local_260;
  FConnectionReference local_248;
  FConnectionReference local_230;
  FConnectionReference local_218;
  FConnectionReference local_200;
  FConnectionReference local_1e8;
  FConnectionReference local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [2];
  
  puVar17 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar17 !=
       &this->FieldVectorResult) &&
     (puVar17 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TArray<int,TSizedDefaultAllocator<32>_> *)puVar17 != &this->FieldRemap)) {
    return;
  }
  local_3f8 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->FieldFloat);
  local_290.ContainerReference = (void *)0x0;
  local_290.Index = -1;
  local_290.Reference = &this->FieldFloatRemap;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_290);
  local_408 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar18,param_1,local_290.Reference);
  local_3f0 = FDataflowNode::
              GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->FieldVectorLeft);
  local_278.Index = -1;
  local_278.ContainerReference = (void *)0x0;
  local_278.Reference = &this->FieldRemapLeft;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_278);
  local_3d0 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar18,param_1,local_278.Reference);
  local_418 = FDataflowNode::
              GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->FieldVectorRight);
  local_260.Index = -1;
  local_260.ContainerReference = (void *)0x0;
  local_260.Reference = &this->FieldRemapRight;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_260);
  local_3e0 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar18,param_1,local_260.Reference);
  local_400[0] = (float)local_3f8->ArrayNum;
  fVar21 = (float)local_418->ArrayNum;
  local_res20[0] = (float)local_408->ArrayNum;
  local_248.Index = -1;
  local_248.ContainerReference = (void *)0x0;
  local_res18[0] = (float)local_3f0->ArrayNum;
  local_420 = (float)local_3d0->ArrayNum;
  local_41c = (float)local_3e0->ArrayNum;
  local_248.Reference = &this->FieldFloat;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_248);
  local_230.Index = -1;
  pFVar25 = pFVar18->Connection;
  local_230.ContainerReference = (void *)0x0;
  local_230.Reference = &this->FieldFloatRemap;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_230);
  local_218.Index = -1;
  local_218.ContainerReference = (void *)0x0;
  local_428 = pFVar18->Connection;
  local_218.Reference = &this->FieldVectorLeft;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_218);
  local_200.Index = -1;
  local_200.ContainerReference = (void *)0x0;
  local_410 = pFVar18->Connection;
  local_200.Reference = &this->FieldRemapLeft;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_200);
  local_1e8.Index = -1;
  local_1e8.ContainerReference = (void *)0x0;
  pFVar3 = pFVar18->Connection;
  local_1e8.Reference = &this->FieldVectorRight;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e8);
  local_1d0.Index = -1;
  local_1d0.ContainerReference = (void *)0x0;
  pFVar4 = pFVar18->Connection;
  local_1d0.Reference = &this->FieldRemapRight;
  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d0);
  fVar12 = local_400[0];
  fVar8 = local_res18[0];
  pFVar5 = pFVar18->Connection;
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = 0;
  local_438.ArrayMax = 0;
  local_3e8 = (longlong)(int)local_400[0];
  if (pFVar25 == (FDataflowOutput *)0x0) {
    if ((local_410 != (FDataflowOutput *)0x0) && (pFVar4 != (FDataflowOutput *)0x0)) {
      if ((pFVar3 == (FDataflowOutput *)0x0) || (pFVar5 == (FDataflowOutput *)0x0)) {
        if (local_res18[0] == fVar21) {
          local_80[0]._s_0.Z = 0.0;
          local_80[0]._s_0.X = 0.0;
          local_80[0]._s_0.Y = 0.0;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                    (&local_438,(TVector<double> *)&local_80[0]._s_0,(int)local_res18[0]);
          SumVectorEvaluate((TArray<float,TSizedDefaultAllocator<32>_> *)0x0,local_3f0,local_418,
                            &local_438,(int)fVar8,this->Operation,this->Magnitude,
                            this->bSwapVectorInputs);
          FDataflowNode::
          SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
          local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.ArrayNum = 0;
          local_2c0.ArrayMax = 0;
          FDataflowNode::
          SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_2c0,&this->FieldRemap);
          FVar20.Data = local_2c0.AllocatorInstance.Data;
          goto LAB_14e8bf1a0;
        }
      }
      else {
        lVar24 = (longlong)(int)local_res18[0];
        if ((local_res18[0] == local_420) && (fVar21 == local_41c)) {
          local_c8._s_0.Z = 0.0;
          local_c8._s_0.X = 0.0;
          local_c8._s_0.Y = 0.0;
          if ((int)fVar21 < (int)local_res18[0]) {
            fVar21 = local_res18[0];
          }
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                    (&local_438,(TVector<double> *)&local_c8._s_0,(int)fVar21);
          uVar27 = 0;
          iVar32 = 0;
          local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.ArrayNum = 0;
          local_318.ArrayMax = 0;
          local_304 = 0;
          TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_318,&local_304,(int)fVar21);
          local_b0._s_0.Z = 0.0;
          local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3c8.ArrayNum = 0;
          local_3c8.ArrayMax = 0;
          local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0._s_0.X = 0.0;
          local_b0._s_0.Y = 0.0;
          local_300.ArrayNum = 0;
          local_300.ArrayMax = 0;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                    (&local_3c8,(TVector<double> *)&local_b0._s_0,(int)fVar21);
          local_98._s_0.Z = 0.0;
          local_98._s_0.X = 0.0;
          local_98._s_0.Y = 0.0;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                    (&local_3c8,(TVector<double> *)&local_98._s_0,(int)fVar21);
          local_3d8 = lVar24;
          if (0 < (int)fVar8) {
            local_428 = (FDataflowOutput *)0x0;
            local_410 = (FDataflowOutput *)0x0;
            local_3e8 = 0;
            uVar29 = uVar27;
            uVar31 = uVar27;
LAB_14e8becf0:
            pTVar23 = local_3d0;
            pFVar25 = local_410;
            uVar30 = (uint)uVar29;
            uVar34 = 0;
            if ((int)uVar30 < local_3d0->ArrayNum) {
              uVar34 = ~uVar30 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar32 = *(int *)((pTVar23->AllocatorInstance).Data + (longlong)pFVar25 * 4);
            pFVar6 = (local_3e0->AllocatorInstance).Data;
            for (pFVar19 = pFVar6; pFVar19 != pFVar6 + (longlong)local_3e0->ArrayNum * 4;
                pFVar19 = pFVar19 + 4) {
              pFVar22 = pFVar6;
              if (*(int *)pFVar19 == iVar32) goto LAB_14e8bed80;
            }
            goto LAB_14e8bef77;
          }
LAB_14e8bef99:
          TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_318,iVar32,Default);
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (&local_3c8,iVar32,Default);
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (&local_300,iVar32,Default);
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (&local_438,iVar32,Default);
          SumVectorEvaluate((TArray<float,TSizedDefaultAllocator<32>_> *)0x0,&local_3c8,&local_300,
                            &local_438,iVar32,this->Operation,this->Magnitude,
                            this->bSwapVectorInputs);
          FDataflowNode::
          SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
          FDataflowNode::
          SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_318,&this->FieldRemap);
          if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.AllocatorInstance.Data);
          }
          FVar20.Data = local_318.AllocatorInstance.Data;
          if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c8.AllocatorInstance.Data);
            FVar20.Data = local_318.AllocatorInstance.Data;
          }
          goto LAB_14e8bf1a0;
        }
      }
    }
  }
  else if (local_410 == (FDataflowOutput *)0x0) {
    if (pFVar4 != (FDataflowOutput *)0x0) {
      if ((local_428 == (FDataflowOutput *)0x0) || (pFVar5 == (FDataflowOutput *)0x0)) {
        if (local_400[0] == fVar21) {
          local_e0._s_0.Z = 0.0;
          local_e0._s_0.X = 0.0;
          local_e0._s_0.Y = 0.0;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                    (&local_438,(TVector<double> *)&local_e0._s_0,(int)local_400[0]);
          SumVectorEvaluate(local_3f8,
                            (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,
                            local_418,&local_438,(int)fVar12,this->Operation,this->Magnitude,
                            this->bSwapVectorInputs);
          FDataflowNode::
          SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
          local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.ArrayNum = 0;
          local_2d0.ArrayMax = 0;
          FDataflowNode::
          SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((FDataflowNode *)this,param_1,&local_2d0,&this->FieldRemap);
          FVar20.Data = local_2d0.AllocatorInstance.Data;
          goto LAB_14e8bf1a0;
        }
      }
      else if ((local_400[0] == local_res20[0]) && (fVar21 == local_41c)) {
        local_110._s_0.Z = 0.0;
        local_110._s_0.X = 0.0;
        local_110._s_0.Y = 0.0;
        if ((int)fVar21 < (int)local_400[0]) {
          fVar21 = local_400[0];
        }
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                  (&local_438,(TVector<double> *)&local_110._s_0,(int)fVar21);
        uVar27 = 0;
        iVar32 = 0;
        local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_328.ArrayNum = 0;
        local_328.ArrayMax = 0;
        local_420 = 0.0;
        TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_328,(int *)&local_420,(int)fVar21);
        local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_338.ArrayNum = 0;
        local_338.ArrayMax = 0;
        local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_348.ArrayNum = 0;
        local_348.ArrayMax = 0;
        local_308 = 0.0;
        TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_338,&local_308,(int)fVar21);
        local_f8._s_0.Z = 0.0;
        local_f8._s_0.X = 0.0;
        local_f8._s_0.Y = 0.0;
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                  (&local_348,(TVector<double> *)&local_f8._s_0,(int)fVar21);
        if (0 < (int)fVar12) {
          local_410 = (FDataflowOutput *)0x0;
          local_428 = (FDataflowOutput *)0x0;
          pTVar23 = local_408;
          uVar29 = uVar27;
          uVar31 = uVar27;
LAB_14e8be7a1:
          uVar30 = (uint)uVar29;
          uVar34 = 0;
          if ((int)uVar30 < pTVar23->ArrayNum) {
            uVar34 = ~uVar30 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar32 = *(int *)((pTVar23->AllocatorInstance).Data + uVar31 * 4);
          pFVar6 = (local_3e0->AllocatorInstance).Data;
          for (pFVar19 = pFVar6; pFVar19 != pFVar6 + (longlong)local_3e0->ArrayNum * 4;
              pFVar19 = pFVar19 + 4) {
            pFVar22 = pFVar6;
            if (*(int *)pFVar19 == iVar32) goto LAB_14e8be830;
          }
          goto LAB_14e8bea26;
        }
LAB_14e8bea3d:
        TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_328,iVar32,Default);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_338,iVar32,Default);
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_348,iVar32,Default);
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_438,iVar32,Default);
        SumVectorEvaluate(&local_338,
                          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,
                          &local_348,&local_438,iVar32,this->Operation,this->Magnitude,
                          this->bSwapVectorInputs);
        FDataflowNode::
        SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_328,&this->FieldRemap);
        if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.AllocatorInstance.Data);
        }
        FVar20.Data = local_328.AllocatorInstance.Data;
        if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.AllocatorInstance.Data);
          FVar20.Data = local_328.AllocatorInstance.Data;
        }
        goto LAB_14e8bf1a0;
      }
    }
  }
  else if (pFVar4 == (FDataflowOutput *)0x0) {
    if ((local_428 == (FDataflowOutput *)0x0) || (pFVar3 == (FDataflowOutput *)0x0)) {
      if (local_400[0] == local_res18[0]) {
        local_188._s_0.Z = 0.0;
        local_188._s_0.X = 0.0;
        local_188._s_0.Y = 0.0;
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                  (&local_438,(TVector<double> *)&local_188._s_0,(int)local_400[0]);
        SumVectorEvaluate(local_3f8,local_3f0,
                          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,
                          &local_438,(int)fVar12,this->Operation,this->Magnitude,
                          this->bSwapVectorInputs);
        FDataflowNode::
        SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
        local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f0.ArrayNum = 0;
        local_2f0.ArrayMax = 0;
        FDataflowNode::
        SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_2f0,&this->FieldRemap);
        FVar20.Data = local_2f0.AllocatorInstance.Data;
        goto LAB_14e8bf1a0;
      }
    }
    else if ((local_400[0] == local_res20[0]) && (local_res18[0] == local_420)) {
      local_1b8._s_0.Z = 0.0;
      local_1b8._s_0.X = 0.0;
      local_1b8._s_0.Y = 0.0;
      fVar21 = local_res18[0];
      if ((int)local_res18[0] < (int)local_400[0]) {
        fVar21 = local_400[0];
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (&local_438,(TVector<double> *)&local_1b8._s_0,(int)fVar21);
      uVar27 = 0;
      iVar32 = 0;
      local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_398.ArrayNum = 0;
      local_398.ArrayMax = 0;
      local_res18[0] = 0.0;
      TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_398,(int *)local_res18,(int)fVar21);
      local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.ArrayNum = 0;
      local_3a8.ArrayMax = 0;
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.ArrayNum = 0;
      local_3b8.ArrayMax = 0;
      local_res20[0] = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_3a8,local_res20,(int)fVar21);
      local_1a0._s_0.Z = 0.0;
      local_1a0._s_0.X = 0.0;
      local_1a0._s_0.Y = 0.0;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (&local_3b8,(TVector<double> *)&local_1a0._s_0,(int)fVar21);
      if (0 < (int)fVar12) {
        local_3e0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_418 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
        pTVar23 = local_408;
        uVar29 = uVar27;
        uVar31 = uVar27;
LAB_14e8bdbd0:
        uVar30 = (uint)uVar29;
        uVar34 = 0;
        if ((int)uVar30 < pTVar23->ArrayNum) {
          uVar34 = ~uVar30 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar32 = *(int *)((pTVar23->AllocatorInstance).Data + uVar31 * 4);
        pFVar6 = (local_3d0->AllocatorInstance).Data;
        for (pFVar19 = pFVar6; pFVar19 != pFVar6 + (longlong)local_3d0->ArrayNum * 4;
            pFVar19 = pFVar19 + 4) {
          pFVar22 = pFVar6;
          if (*(int *)pFVar19 == iVar32) goto LAB_14e8bdc60;
        }
        goto LAB_14e8bde53;
      }
LAB_14e8bde6a:
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_398,iVar32,Default);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_3a8,iVar32,Default);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_3b8,iVar32,Default);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_438,iVar32,Default);
      SumVectorEvaluate(&local_3a8,&local_3b8,
                        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,
                        &local_438,iVar32,this->Operation,this->Magnitude,this->bSwapVectorInputs);
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_398,&this->FieldRemap);
      if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.AllocatorInstance.Data);
      }
      FVar20.Data = local_398.AllocatorInstance.Data;
      if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.AllocatorInstance.Data);
        FVar20.Data = local_398.AllocatorInstance.Data;
      }
      goto LAB_14e8bf1a0;
    }
  }
  else if (((local_428 == (FDataflowOutput *)0x0) || (pFVar3 == (FDataflowOutput *)0x0)) ||
          (pFVar5 == (FDataflowOutput *)0x0)) {
    if ((local_400[0] == local_res18[0]) && (local_400[0] == fVar21)) {
      local_128._s_0.Z = 0.0;
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (&local_438,(TVector<double> *)&local_128._s_0,(int)local_400[0]);
      SumVectorEvaluate(local_3f8,local_3f0,local_418,&local_438,(int)fVar12,this->Operation,
                        this->Magnitude,this->bSwapVectorInputs);
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
      local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.ArrayNum = 0;
      local_2e0.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_2e0,&this->FieldRemap);
      FVar20.Data = local_2e0.AllocatorInstance.Data;
      goto LAB_14e8bf1a0;
    }
  }
  else if (((local_400[0] == local_res20[0]) && (local_res18[0] == local_420)) &&
          (fVar21 == local_41c)) {
    if ((int)local_res18[0] < (int)local_400[0]) {
      fVar8 = local_400[0];
    }
    local_170._s_0.Z = 0.0;
    local_170._s_0.X = 0.0;
    local_170._s_0.Y = 0.0;
    if ((int)fVar21 < (int)fVar8) {
      fVar21 = fVar8;
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_438,(TVector<double> *)&local_170._s_0,(int)fVar21);
    uVar30 = 0;
    uVar34 = 0;
    local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.ArrayNum = 0;
    local_358.ArrayMax = 0;
    local_400[0] = 0.0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_358,(int *)local_400,(int)fVar21);
    local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.ArrayNum = 0;
    local_368.ArrayMax = 0;
    local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.ArrayNum = 0;
    local_378.ArrayMax = 0;
    local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.ArrayNum = 0;
    local_388.ArrayMax = 0;
    local_41c = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_368,&local_41c,(int)fVar21);
    local_158._s_0.Z = 0.0;
    local_158._s_0.X = 0.0;
    local_158._s_0.Y = 0.0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_378,(TVector<double> *)&local_158._s_0,(int)fVar21);
    local_140._s_0.Z = 0.0;
    local_140._s_0.X = 0.0;
    local_140._s_0.Y = 0.0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_388,(TVector<double> *)&local_140._s_0,(int)fVar21);
    if (0 < (int)fVar12) {
      local_428 = (FDataflowOutput *)0x0;
      local_410 = (FDataflowOutput *)0x0;
      local_3d8 = 0;
      pTVar23 = local_408;
      uVar34 = uVar30;
LAB_14e8be140:
      pFVar25 = local_428;
      uVar16 = 0;
      if ((int)uVar30 < pTVar23->ArrayNum) {
        uVar16 = ~uVar30 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar32 = *(int *)((pTVar23->AllocatorInstance).Data + (longlong)pFVar25 * 4);
      pFVar6 = (local_3d0->AllocatorInstance).Data;
      for (pFVar19 = pFVar6; pFVar19 != pFVar6 + (longlong)local_3d0->ArrayNum * 4;
          pFVar19 = pFVar19 + 4) {
        if (*(int *)pFVar19 == iVar32) {
          pFVar19 = (local_3e0->AllocatorInstance).Data;
          pFVar22 = pFVar19;
          goto joined_r0x00014e8be1d9;
        }
      }
      goto LAB_14e8be4ca;
    }
LAB_14e8be4eb:
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_358,uVar34,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_368,uVar34,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_378,uVar34,Default)
    ;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_388,uVar34,Default)
    ;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_438,uVar34,Default)
    ;
    SumVectorEvaluate(&local_368,&local_378,&local_388,&local_438,uVar34,this->Operation,
                      this->Magnitude,this->bSwapVectorInputs);
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_438,&this->FieldVectorResult);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_358,&this->FieldRemap);
    if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.AllocatorInstance.Data);
    }
    if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.AllocatorInstance.Data);
    }
    FVar20.Data = local_358.AllocatorInstance.Data;
    if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.AllocatorInstance.Data);
      FVar20.Data = local_358.AllocatorInstance.Data;
    }
    goto LAB_14e8bf1a0;
  }
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  FDataflowNode::
  SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_2b0,&this->FieldVectorResult);
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  FDataflowNode::
  SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_2a0,&this->FieldRemap);
  FVar20.Data = local_2a0.AllocatorInstance.Data;
LAB_14e8bf1a0:
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  return;
  while (pFVar22 = pFVar22 + 4, pFVar22 != pFVar6 + (longlong)local_3e0->ArrayNum * 4) {
LAB_14e8bed80:
    if (*(int *)pFVar22 == iVar32) {
      uVar34 = (uint)((longlong)pFVar22 - (longlong)pFVar6 >> 2);
      goto LAB_14e8bed9b;
    }
  }
  uVar34 = 0xffffffff;
LAB_14e8bed9b:
  uVar26 = (uint)uVar27;
  uVar33 = ~uVar26 >> 0x1f;
  uVar16 = 0;
  if ((int)uVar26 < local_318.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = local_3f0;
  *(int *)(local_318.AllocatorInstance.Data + local_3e8) = iVar32;
  uVar16 = 0;
  if ((int)uVar30 < local_3f0->ArrayNum) {
    uVar16 = ~uVar30 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar11->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)local_428;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)local_428 + 0x10);
  uVar16 = 0;
  if ((int)uVar26 < local_3c8.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = local_418;
  *(undefined8 *)(local_3c8.AllocatorInstance.Data + uVar31) = uVar9;
  *(undefined8 *)(local_3c8.AllocatorInstance.Data + uVar31 + 8) = uVar10;
  *(undefined8 *)(local_3c8.AllocatorInstance.Data + uVar31 + 0x10) = uVar2;
  uVar16 = 0;
  if ((int)uVar34 < local_418->ArrayNum) {
    uVar16 = ~uVar34 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar11->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)(int)uVar34 * 0x18;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar34 * 0x18 + 0x10);
  uVar34 = 0;
  if ((int)uVar26 < local_300.ArrayNum) {
    uVar34 = uVar33;
  }
  if ((uVar34 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar27 = (ulonglong)(uVar26 + 1);
  local_3e8 = local_3e8 + 4;
  *(undefined8 *)(local_300.AllocatorInstance.Data + uVar31) = uVar9;
  *(undefined8 *)(local_300.AllocatorInstance.Data + uVar31 + 8) = uVar10;
  *(undefined8 *)(local_300.AllocatorInstance.Data + uVar31 + 0x10) = uVar2;
  uVar31 = uVar31 + 0x18;
  pFVar25 = local_410;
LAB_14e8bef77:
  iVar32 = (int)uVar27;
  local_428 = (FDataflowOutput *)((longlong)local_428 + 0x18);
  local_410 = (FDataflowOutput *)((longlong)&pFVar25->_padding_ + 1);
  uVar29 = (ulonglong)(uVar30 + 1);
  if (local_3d8 <= (longlong)local_410) goto LAB_14e8bef99;
  goto LAB_14e8becf0;
joined_r0x00014e8be1d9:
  pTVar23 = local_408;
  if (pFVar22 == pFVar19 + (longlong)local_3e0->ArrayNum * 4) goto LAB_14e8be4ca;
  pFVar28 = pFVar6;
  if (*(int *)pFVar22 == iVar32) goto LAB_14e8be1f5;
  pFVar22 = pFVar22 + 4;
  goto joined_r0x00014e8be1d9;
  while (pFVar28 = pFVar28 + 4, pFVar28 != pFVar6 + (longlong)local_3d0->ArrayNum * 4) {
LAB_14e8be1f5:
    pFVar22 = pFVar19;
    if (*(int *)pFVar28 == iVar32) {
      uVar16 = (uint)((longlong)pFVar28 - (longlong)pFVar6 >> 2);
      goto LAB_14e8be213;
    }
  }
  uVar16 = 0xffffffff;
LAB_14e8be213:
  do {
    if (*(int *)pFVar22 == iVar32) {
      uVar26 = (uint)((longlong)pFVar22 - (longlong)pFVar19 >> 2);
      goto LAB_14e8be22e;
    }
    pFVar22 = pFVar22 + 4;
  } while (pFVar22 != pFVar19 + (longlong)local_3e0->ArrayNum * 4);
  uVar26 = 0xffffffff;
LAB_14e8be22e:
  uVar35 = ~uVar34 >> 0x1f;
  uVar33 = 0;
  if ((int)uVar34 < local_358.ArrayNum) {
    uVar33 = uVar35;
  }
  if ((uVar33 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = local_3f8;
  *(int *)(local_358.AllocatorInstance.Data + local_3d8) = iVar32;
  uVar33 = 0;
  if ((int)uVar30 < local_3f8->ArrayNum) {
    uVar33 = ~uVar30 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar1 = *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)local_428 * 4);
  uVar33 = 0;
  if ((int)uVar34 < local_368.ArrayNum) {
    uVar33 = uVar35;
  }
  if ((uVar33 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar24 = local_3d8;
  pTVar11 = local_3f0;
  *(undefined4 *)(local_368.AllocatorInstance.Data + local_3d8) = uVar1;
  uVar33 = 0;
  if ((int)uVar16 < local_3f0->ArrayNum) {
    uVar33 = ~uVar16 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar11->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)(int)uVar16 * 0x18;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar16 * 0x18 + 0x10);
  uVar16 = 0;
  if ((int)uVar34 < local_378.ArrayNum) {
    uVar16 = uVar35;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar25 = local_410;
  pTVar11 = local_418;
  *(undefined8 *)(local_378.AllocatorInstance.Data + (longlong)&local_410->_padding_) = uVar9;
  *(undefined8 *)(local_378.AllocatorInstance.Data + (longlong)&local_410->_padding_ + 8) = uVar10;
  *(undefined8 *)((longlong)&local_410->_padding_ + local_378.AllocatorInstance.Data) = uVar2;
  uVar16 = 0;
  if ((int)uVar26 < local_418->ArrayNum) {
    uVar16 = ~uVar26 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar11->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)(int)uVar26 * 0x18;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar26 * 0x18 + 0x10);
  uVar16 = 0;
  if ((int)uVar34 < local_388.ArrayNum) {
    uVar16 = uVar35;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_3d8 = lVar24 + 4;
  uVar34 = uVar34 + 1;
  *(undefined8 *)(local_388.AllocatorInstance.Data + (longlong)&pFVar25->_padding_) = uVar9;
  *(undefined8 *)(local_388.AllocatorInstance.Data + (longlong)&pFVar25->_padding_ + 8) = uVar10;
  *(undefined8 *)((longlong)&pFVar25->_padding_ + local_388.AllocatorInstance.Data) = uVar2;
  local_410 = (FDataflowOutput *)&pFVar25->_padding_;
  pTVar23 = local_408;
  pFVar25 = local_428;
LAB_14e8be4ca:
  local_428 = (FDataflowOutput *)((longlong)&pFVar25->_padding_ + 1);
  uVar30 = uVar30 + 1;
  if (local_3e8 <= (longlong)local_428) goto LAB_14e8be4eb;
  goto LAB_14e8be140;
  while (pFVar22 = pFVar22 + 4, pFVar22 != pFVar6 + (longlong)local_3d0->ArrayNum * 4) {
LAB_14e8bdc60:
    if (*(int *)pFVar22 == iVar32) {
      uVar34 = (uint)((longlong)pFVar22 - (longlong)pFVar6 >> 2);
      goto LAB_14e8bdc7b;
    }
  }
  uVar34 = 0xffffffff;
LAB_14e8bdc7b:
  uVar26 = (uint)uVar27;
  uVar33 = ~uVar26 >> 0x1f;
  uVar16 = 0;
  if ((int)uVar26 < local_398.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = local_3f8;
  *(int *)(local_398.AllocatorInstance.Data + (longlong)local_418) = iVar32;
  uVar16 = 0;
  if ((int)uVar30 < local_3f8->ArrayNum) {
    uVar16 = ~uVar30 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar1 = *(undefined4 *)((pTVar13->AllocatorInstance).Data + uVar31 * 4);
  uVar16 = 0;
  if ((int)uVar26 < local_3a8.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar14 = local_3f0;
  pTVar11 = local_418;
  *(undefined4 *)(local_3a8.AllocatorInstance.Data + (longlong)local_418) = uVar1;
  uVar16 = 0;
  if ((int)uVar34 < local_3f0->ArrayNum) {
    uVar16 = ~uVar34 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar14->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)(int)uVar34 * 0x18;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar34 * 0x18 + 0x10);
  uVar34 = 0;
  if ((int)uVar26 < local_3b8.ArrayNum) {
    uVar34 = uVar33;
  }
  if ((uVar34 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_418 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)&(pTVar11->AllocatorInstance).Data + 4);
  uVar27 = (ulonglong)(uVar26 + 1);
  *(undefined8 *)(local_3b8.AllocatorInstance.Data + (longlong)local_3e0) = uVar9;
  *(undefined8 *)(local_3b8.AllocatorInstance.Data + (longlong)local_3e0 + 8) = uVar10;
  *(undefined8 *)(local_3b8.AllocatorInstance.Data + 0x10 + (longlong)local_3e0) = uVar2;
  local_3e0 = (TArray<int,TSizedDefaultAllocator<32>_> *)&local_3e0[1].ArrayNum;
  pTVar23 = local_408;
LAB_14e8bde53:
  iVar32 = (int)uVar27;
  uVar29 = (ulonglong)(uVar30 + 1);
  uVar31 = uVar31 + 1;
  if (local_3e8 <= (longlong)uVar31) goto LAB_14e8bde6a;
  goto LAB_14e8bdbd0;
  while (pFVar22 = pFVar22 + 4, pFVar22 != pFVar6 + (longlong)local_3e0->ArrayNum * 4) {
LAB_14e8be830:
    if (*(int *)pFVar22 == iVar32) {
      uVar34 = (uint)((longlong)pFVar22 - (longlong)pFVar6 >> 2);
      goto LAB_14e8be84b;
    }
  }
  uVar34 = 0xffffffff;
LAB_14e8be84b:
  uVar26 = (uint)uVar27;
  uVar33 = ~uVar26 >> 0x1f;
  uVar16 = 0;
  if ((int)uVar26 < local_328.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = local_3f8;
  *(int *)(local_328.AllocatorInstance.Data + (longlong)local_428) = iVar32;
  uVar16 = 0;
  if ((int)uVar30 < local_3f8->ArrayNum) {
    uVar16 = ~uVar30 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar1 = *(undefined4 *)((pTVar13->AllocatorInstance).Data + uVar31 * 4);
  uVar16 = 0;
  if ((int)uVar26 < local_338.ArrayNum) {
    uVar16 = uVar33;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = local_418;
  pFVar25 = local_428;
  *(undefined4 *)(local_338.AllocatorInstance.Data + (longlong)local_428) = uVar1;
  uVar16 = 0;
  if ((int)uVar34 < local_418->ArrayNum) {
    uVar16 = ~uVar34 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = (pTVar11->AllocatorInstance).Data;
  pFVar6 = pFVar19 + (longlong)(int)uVar34 * 0x18;
  uVar9 = *(undefined8 *)pFVar6;
  uVar10 = *(undefined8 *)(pFVar6 + 8);
  uVar2 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar34 * 0x18 + 0x10);
  uVar34 = 0;
  if ((int)uVar26 < local_348.ArrayNum) {
    uVar34 = uVar33;
  }
  if ((uVar34 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_428 = (FDataflowOutput *)((longlong)&pFVar25->_padding_ + 4);
  uVar27 = (ulonglong)(uVar26 + 1);
  *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)local_410) = uVar9;
  *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)local_410 + 8) = uVar10;
  *(undefined8 *)(local_348.AllocatorInstance.Data + 0x10 + (longlong)local_410) = uVar2;
  local_410 = (FDataflowOutput *)&local_410->_padding_;
  pTVar23 = local_408;
LAB_14e8bea26:
  iVar32 = (int)uVar27;
  uVar29 = (ulonglong)(uVar30 + 1);
  uVar31 = uVar31 + 1;
  if (local_3e8 <= (longlong)uVar31) goto LAB_14e8bea3d;
  goto LAB_14e8be7a1;
}

// FSumVectorFieldDataflowNode @ 14e92e120

FSumVectorFieldDataflowNode * __thiscall
FSumVectorFieldDataflowNode::FSumVectorFieldDataflowNode
          (FSumVectorFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName this_00;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->Operation = Dataflow_VectorFieldFalloffType_Add;
  this->bSwapVectorInputs = false;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  this->_padding_ = (longlong)&___7FSumVectorFieldDataflowNode__6B_;
  local_78.Reference = &this->FieldFloat;
  (this->FieldFloatRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_78.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FieldFloat).ArrayNum = 0;
  (this->FieldFloat).ArrayMax = 0;
  (this->FieldFloatRemap).ArrayNum = 0;
  (this->FieldFloatRemap).ArrayMax = 0;
  (this->FieldVectorLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorResult).ArrayNum = 0;
  (this->FieldVectorResult).ArrayMax = 0;
  (this->FieldVectorLeft).ArrayNum = 0;
  (this->FieldVectorLeft).ArrayMax = 0;
  (this->FieldRemapLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapLeft).ArrayNum = 0;
  (this->FieldRemapLeft).ArrayMax = 0;
  (this->FieldVectorRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorRight).ArrayNum = 0;
  (this->FieldVectorRight).ArrayMax = 0;
  (this->FieldRemapRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapRight).ArrayNum = 0;
  (this->FieldRemapRight).ArrayMax = 0;
  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2c0))->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2c8) = 0;
  this->Magnitude = 1.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FieldFloatRemap;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FieldVectorLeft;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FieldRemapLeft;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FieldVectorRight;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FieldRemapRight;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Magnitude;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FieldVectorResult;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2c0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_78);
  }
  return (FSumVectorFieldDataflowNode *)this_00;
}

// FSumVectorFieldDataflowNode @ 14e92e3a0

FSumVectorFieldDataflowNode * __thiscall
FSumVectorFieldDataflowNode::FSumVectorFieldDataflowNode(FSumVectorFieldDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Magnitude = 1.0;
  this->_padding_ = (longlong)&___7FSumVectorFieldDataflowNode__6B_;
  (this->FieldFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloat).ArrayNum = 0;
  (this->FieldFloat).ArrayMax = 0;
  (this->FieldFloatRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatRemap).ArrayNum = 0;
  (this->FieldFloatRemap).ArrayMax = 0;
  (this->FieldVectorLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorLeft).ArrayNum = 0;
  (this->FieldVectorLeft).ArrayMax = 0;
  (this->FieldRemapLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapLeft).ArrayNum = 0;
  (this->FieldRemapLeft).ArrayMax = 0;
  (this->FieldVectorRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorRight).ArrayNum = 0;
  (this->FieldVectorRight).ArrayMax = 0;
  (this->FieldRemapRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapRight).ArrayNum = 0;
  (this->FieldRemapRight).ArrayMax = 0;
  (this->FieldVectorResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldVectorResult).ArrayNum = 0;
  (this->FieldVectorResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->Operation = Dataflow_VectorFieldFalloffType_Add;
  this->bSwapVectorInputs = false;
  return this;
}

// ~FSumVectorFieldDataflowNode @ 14e933d30

void __thiscall
FSumVectorFieldDataflowNode::~FSumVectorFieldDataflowNode(FSumVectorFieldDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FieldRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldVectorResult).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldRemapRight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldVectorRight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldRemapLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldVectorLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldFloatRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldFloat).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

