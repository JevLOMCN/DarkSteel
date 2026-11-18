// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetProperties @ 143db8130

void __thiscall
Chaos::Softs::FPBDBendingSpringConstraints::SetProperties
          (FPBDBendingSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ECollectionPropertyFlags EVar4;
  bool bVar5;
  FString *pFVar6;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a8;
  undefined1 local_98 [40];
  undefined8 local_70;
  bool local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  iVar1 = (this->BendingSpringStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,&param_1->FlagsArray), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BendingSpringStiffnessIndex).Index,&param_1->FlagsArray),
     (char)EVar4 < '\0')) {
    if (((this->BendingSpringStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BendingSpringStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                           ,0xf5,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->BendingSpringStiffnessIndex).Index;
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->HighValueArray);
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (((this->BendingSpringStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BendingSpringStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                           ,0xf5,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->BendingSpringStiffnessIndex).Index,&param_1->FlagsArray);
    if ((EVar4 & StringDirty) == None) {
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_res8._4_4_ = fVar9;
      local_res8._0_4_ = fVar10;
      if ((fVar10 == *(float *)&this->_padding_) &&
         (fVar9 == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
      this->_padding_ = (longlong)local_res8;
    }
    else {
      if (((this->BendingSpringStiffnessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BendingSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xf5,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->BendingSpringStiffnessIndex).Index,
                          &param_1->StringValueArray);
      local_a8.DataPtr = (TVector<int,2> *)this->_padding_;
      local_a8.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      if ((local_a8.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar6);
      if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_b8.DataPtr = (float *)0x0;
        local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      }
      else {
        local_b8.DataPtr = *(float **)&pTVar7->field_0x10;
        local_b8._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
      }
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap<2>
                ((FPBDWeightMap *)local_98,(TVector<float,2> *)&local_res8,&local_b8,&local_a8,
                 (int)lVar3,iVar1,0x10,(void *)0x0);
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      local_98._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      local_60 = 0x447a0000;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_5c = 0x40dd0c55;
      local_54 = 0;
      local_res8._4_4_ = fVar9;
      local_res8._0_4_ = fVar10;
      if (((float)local_70 == fVar10) && (local_70._4_4_ == fVar9)) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      local_68 = (bool)(local_68 | bVar8);
      local_70 = (TVector<float,2>)local_res8;
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_98);
      *(undefined4 *)&this->_padding_ = local_60;
      *(undefined4 *)&this->_padding_ = local_5c._4_4_;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_5c;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_54;
      if ((FScriptContainerElement *)local_98._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._24_8_);
      }
      if ((FScriptContainerElement *)local_98._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
    }
  }
  return;
}

