// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8e2a60

UScriptStruct * __cdecl FCreateColorArrayFromFloatArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"CreateColorArrayFromFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8e2e00

FName __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::GetType
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCreateColorArrayFromFloatArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8e2ed0

bool __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::IsA
          (FCreateColorArrayFromFloatArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCreateColorArrayFromFloatArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8e2f38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8e2f38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8e2f56;
      }
    }
  }
  bVar5 = true;
LAB_14e8e2f56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8e2fc0

FStructOnScope * __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::NewStructOnScope
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode,
                           (UObject *)pUVar2,L"CreateColorArrayFromFloatArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8e3080

void __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::SerializeInternal
          (FCreateColorArrayFromFloatArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"CreateColorArrayFromFloatArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8e30fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8e3150

FName __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::GetDisplayName
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateColorArrayFromFloatArray");
  return in_RDX;
}

// GetCategory @ 14e8e33b0

FName __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::GetCategory
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8e33e0

FString * __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::GetTags
          (FCreateColorArrayFromFloatArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8e3410

UScriptStruct * __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::TypedScriptStruct
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"CreateColorArrayFromFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8e3550

void __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::Evaluate
          (FCreateColorArrayFromFloatArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  undefined1 *puVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  FDataflowOutput *this_00;
  FTimestamp FVar14;
  FGuid *pFVar15;
  ulong64 uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res8 [8];
  FContext *local_res10;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_98;
  FGuid local_88;
  FConnectionReference local_78 [2];
  
  local_res10 = param_1;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)puVar12 == &this->ColorArray) {
    uVar19 = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    pTVar13 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->FloatArray);
    fVar9 = __real_3f800000;
    iVar3 = pTVar13->ArrayNum;
    if (iVar3 != 0) {
      fVar22 = 0.0;
      fVar21 = __real_3f800000;
      if ((this->bNormalizeInput != false) &&
         (uVar18 = uVar19, uVar20 = uVar19, fVar21 = fVar22, 0 < iVar3)) {
        do {
          uVar17 = (uint)uVar18;
          uVar11 = 0;
          if ((int)uVar17 < pTVar13->ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar21 = *(float *)((pTVar13->AllocatorInstance).Data + uVar20 * 4);
          uVar20 = uVar20 + 1;
          if (fVar21 <= fVar22) {
            fVar21 = fVar22;
          }
          uVar18 = (ulonglong)(uVar17 + 1);
          fVar22 = fVar21;
        } while ((longlong)uVar20 < (longlong)iVar3);
      }
      if (__real_322bcc77 < (float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Init(&local_98,&this->Color,iVar3);
        param_1 = local_res10;
        if (0 < iVar3) {
          uVar18 = uVar19;
          uVar20 = uVar19;
          do {
            uVar17 = (uint)uVar18;
            uVar11 = 0;
            if ((int)uVar17 < pTVar13->ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar22 = (fVar9 / fVar21) * *(float *)((pTVar13->AllocatorInstance).Data + uVar19 * 4);
            uVar11 = 0;
            if ((int)uVar17 < local_98.ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = (ulonglong)(uVar17 + 1);
            uVar19 = uVar19 + 1;
            pFVar1 = local_98.AllocatorInstance.Data + uVar20;
            fVar6 = *(float *)(pFVar1 + 4);
            fVar7 = *(float *)(pFVar1 + 8);
            fVar8 = *(float *)(pFVar1 + 0xc);
            pFVar2 = local_98.AllocatorInstance.Data + uVar20;
            *(float *)pFVar2 = *(float *)pFVar1 * fVar22;
            *(float *)(pFVar2 + 4) = fVar6 * fVar22;
            *(float *)(pFVar2 + 8) = fVar7 * fVar22;
            *(float *)(pFVar2 + 0xc) = fVar8 * fVar22;
            uVar20 = uVar20 + 0x10;
            param_1 = local_res10;
          } while ((longlong)uVar19 < (longlong)iVar3);
        }
      }
      else {
        TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Init(&local_98,&FLinearColor::Black,iVar3)
        ;
        param_1 = local_res10;
      }
    }
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    local_78[0].Reference = &this->ColorArray;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,local_78);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar15 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_88);
      pFVar4 = (FProperty *)this_00->_padding_;
      uVar16 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                (param_1,(uint)uVar16,pFVar4,&local_98,pFVar15,uVar11,(FTimestamp *)FVar14.Value);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  return;
}

// FCreateColorArrayFromFloatArrayDataflowNode @ 14e91a210

FCreateColorArrayFromFloatArrayDataflowNode * __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::FCreateColorArrayFromFloatArrayDataflowNode
          (FCreateColorArrayFromFloatArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->bNormalizeInput = true;
  local_48.Reference = &this->FloatArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  this->_padding_ = (longlong)&___7FCreateColorArrayFromFloatArrayDataflowNode__6B_;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_48.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  (this->ColorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorArray).ArrayNum = 0;
  (this->ColorArray).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  (this->Color).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R]
  ;
  (this->Color).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G]
  ;
  (this->Color).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B]
  ;
  (this->Color).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->ColorArray;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FCreateColorArrayFromFloatArrayDataflowNode @ 14e91a350

FCreateColorArrayFromFloatArrayDataflowNode * __thiscall
FCreateColorArrayFromFloatArrayDataflowNode::FCreateColorArrayFromFloatArrayDataflowNode
          (FCreateColorArrayFromFloatArrayDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->bNormalizeInput = true;
  this->_padding_ = (longlong)&___7FCreateColorArrayFromFloatArrayDataflowNode__6B_;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  (this->ColorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorArray).ArrayNum = 0;
  (this->ColorArray).ArrayMax = 0;
  (this->Color).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R]
  ;
  (this->Color).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G]
  ;
  (this->Color).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B]
  ;
  (this->Color).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  return this;
}

