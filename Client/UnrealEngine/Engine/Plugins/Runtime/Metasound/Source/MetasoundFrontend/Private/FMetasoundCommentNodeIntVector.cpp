// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// StaticStruct @ 14ad75370

UScriptStruct * __cdecl FMetasoundCommentNodeIntVector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundCommentNodeIntVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundCommentNodeIntVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundCommentNodeIntVector,(UObject *)pUVar1,
                         L"MetasoundCommentNodeIntVector");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundCommentNodeIntVector.OuterSingleton;
}

// FMetasoundCommentNodeIntVector @ 14ad9a000

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::FMetasoundCommentNodeIntVector
          (FMetasoundCommentNodeIntVector *this,TIntVector2<int> *param_1)

{
  *this = (FMetasoundCommentNodeIntVector)param_1->field0_0x0;
  return this;
}

// FMetasoundCommentNodeIntVector @ 14ad9a010

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::FMetasoundCommentNodeIntVector
          (FMetasoundCommentNodeIntVector *this,TVector2<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  *(int *)this = (int)(param_1->field0_0x0)._s_0.X;
  *(int *)&this->field_0x4 = (int)fVar1;
  return this;
}

// FMetasoundCommentNodeIntVector @ 14ad9a030

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::FMetasoundCommentNodeIntVector
          (FMetasoundCommentNodeIntVector *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  *(int *)this = (int)(param_1->field0_0x0)._s_0.X;
  *(int *)&this->field_0x4 = (int)dVar1;
  return this;
}

// operator= @ 14ad9f440

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::operator=
          (FMetasoundCommentNodeIntVector *this,TIntVector2<int> *param_1)

{
  *(int *)this = (param_1->field0_0x0)._s_0.X;
  *(int *)&this->field_0x4 = (param_1->field0_0x0)._s_0.Y;
  return this;
}

// operator= @ 14ad9f460

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::operator=
          (FMetasoundCommentNodeIntVector *this,TVector2<float> *param_1)

{
  *(int *)this = (int)(param_1->field0_0x0)._s_0.X;
  *(int *)&this->field_0x4 = (int)(param_1->field0_0x0)._s_0.Y;
  return this;
}

// operator= @ 14ad9f480

FMetasoundCommentNodeIntVector * __thiscall
FMetasoundCommentNodeIntVector::operator=
          (FMetasoundCommentNodeIntVector *this,TVector2<double> *param_1)

{
  *(int *)this = (int)(param_1->field0_0x0)._s_0.X;
  *(int *)&this->field_0x4 = (int)(param_1->field0_0x0)._s_0.Y;
  return this;
}

// Serialize @ 14add0430

bool __thiscall
FMetasoundCommentNodeIntVector::Serialize
          (FMetasoundCommentNodeIntVector *this,FStructuredArchiveSlot param_1)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)this);
    }
  }
  else {
    *(undefined4 *)this = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  puVar1 = &this->field_0x4;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return true;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)puVar1);
  return true;
}

// SerializeFromMismatchedTag @ 14add0500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetasoundCommentNodeIntVector::SerializeFromMismatchedTag
          (FMetasoundCommentNodeIntVector *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2
          )

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  FName *pFVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  TVector2<float>_u_0 local_res10;
  FSlotBase local_res18;
  FName local_res20;
  TVector2<double>_u_0 local_28;
  
  local_res10._s_0.X = (float)(param_1->TypeName).Index;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar6 = ::FName::FName(&local_res20,"DeprecateSlateVector2D");
  bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,*pFVar6);
  if (bVar4) {
    *this = (FMetasoundCommentNodeIntVector)0x0;
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar8 = &::LOG_Static;
  }
  else {
    local_res10._s_0.X = (float)(param_1->TypeName).Index;
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res20);
    local_res20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    local_res20.Number = 0;
    FVar1.Number = 0;
    FVar1.ComparisonIndex.Value = local_res20.ComparisonIndex.Value;
    bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar1);
    if (bVar4) {
      UE::Math::operator<<
                ((FStructuredArchiveSlot)local_res18.StructuredArchive,
                 (TVector2<double> *)&local_28._s_0);
      *(int *)this = (int)local_28._s_0.X;
      *(int *)&this->field_0x4 = (int)local_28._s_0.Y;
      return true;
    }
    local_res10._s_0.X = (float)(param_1->TypeName).Index;
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res20);
    local_res20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    local_res20.Number = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res20.ComparisonIndex.Value;
    bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar2);
    if (bVar4) {
      UE::Math::operator<<
                ((FStructuredArchiveSlot)local_res18.StructuredArchive,
                 (TVector2<float> *)&local_res10._s_0);
      *(int *)this = (int)local_res10._s_0.X;
      *(int *)&this->field_0x4 = (int)local_res10._s_0.Y;
      return true;
    }
    local_res10._s_0.X = (float)(param_1->TypeName).Index;
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res20);
    local_res20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
    local_res20.Number = 0;
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = local_res20.ComparisonIndex.Value;
    bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar3);
    if (bVar4) {
      pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
      if (0x3eb < (int)((ulonglong)*(undefined8 *)&pFVar7->field_0x40 >> 0x20)) {
        UE::Math::operator<<
                  ((FStructuredArchiveSlot)local_res18.StructuredArchive,
                   (TVector2<double> *)&local_28._s_0);
        *(int *)this = (int)local_28._s_0.X;
        *(int *)&this->field_0x4 = (int)local_28._s_0.Y;
        return true;
      }
      UE::Math::operator<<
                ((FStructuredArchiveSlot)local_res18.StructuredArchive,
                 (TVector2<float> *)&local_res10._s_0);
      *(int *)this = (int)local_res10._s_0.X;
      *(int *)&this->field_0x4 = (int)local_res10._s_0.Y;
      return true;
    }
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar8,(FLogCategoryBase *)&LogMetaSound);
  return false;
}

