// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetProperties @ 143f74f80

void __thiscall
Chaos::Softs::FXPBDBendingSpringConstraints::SetProperties
          (FXPBDBendingSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  TVector<float,2> TVar5;
  ECollectionPropertyFlags EVar6;
  bool bVar7;
  byte bVar8;
  FString *pFVar9;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar10;
  FPBDWeightMap *pFVar11;
  TArrayView<unsigned_char_const_,int> *pTVar12;
  float fVar13;
  undefined8 local_res8;
  undefined8 local_res20;
  TVector2<float>_u_0 local_140;
  TArrayView<float_const_,int> local_138;
  TArrayView<float_const_,int> local_128;
  undefined1 local_118 [40];
  undefined8 local_f0;
  bool local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  FPBDWeightMap local_b0 [2];
  
  fVar4 = __real_447a0000;
  iVar1 = (this->XPBDBendingSpringStiffnessIndex).Index;
  if (iVar1 != -1) {
    pTVar12 = &param_1->FlagsArray;
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar12);
    if (((EVar6 & Animatable) != None) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->XPBDBendingSpringStiffnessIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->XPBDBendingSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                             ,0x18b,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->XPBDBendingSpringStiffnessIndex).Index;
      local_res20._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->HighValueArray);
      local_res20._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->LowValueArray);
      if (((this->XPBDBendingSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                             ,0x18b,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBendingSpringStiffnessIndex).Index,pTVar12);
      if ((EVar6 & StringDirty) == None) {
        if (__real_4e6e6b28 <= (float)local_res20) {
          local_res20._0_4_ = __real_4e6e6b28;
        }
        if (__real_4e6e6b28 <= local_res20._4_4_) {
          local_res20._4_4_ = __real_4e6e6b28;
        }
        if ((float)local_res20 <= 0.0) {
          local_res20._0_4_ = 0.0;
        }
        if (local_res20._4_4_ <= 0.0) {
          local_res20._4_4_ = 0.0;
        }
        if (((float)local_res20 == *(float *)&this->_padding_) &&
           (local_res20._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
          this->_padding_ = (longlong)local_res20;
          *(char *)&this->_padding_ = (char)this->_padding_;
        }
        else {
          this->_padding_ = (longlong)local_res20;
          *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
        }
      }
      else {
        if (((this->XPBDBendingSpringStiffnessIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("XPBDBendingSpringStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                               ,0x18b,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->XPBDBendingSpringStiffnessIndex).Index,
                            &param_1->StringValueArray);
        local_d0.DataPtr = (TVector<int,2> *)this->_padding_;
        local_d0.ArrayNum = (int)this->_padding_;
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        lVar3 = this->_padding_;
        if ((local_d0.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar9);
        if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_138.DataPtr = (float *)0x0;
          local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
        }
        else {
          local_138.DataPtr = *(float **)&pTVar10->field_0x10;
          local_138._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
        }
        local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap<2>
                  ((FPBDWeightMap *)local_118,(TVector<float,2> *)&local_140._s_0,&local_138,
                   &local_d0,(int)lVar3,iVar1,0x10,(void *)0x0);
        if (__real_4e6e6b28 <= (float)local_res20) {
          local_res20._0_4_ = __real_4e6e6b28;
        }
        if (__real_4e6e6b28 <= local_res20._4_4_) {
          local_res20._4_4_ = __real_4e6e6b28;
        }
        local_118._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        local_e0 = 0x447a0000;
        if ((float)local_res20 <= 0.0) {
          local_res20._0_4_ = 0.0;
        }
        local_dc = 0x40dd0c55;
        if (local_res20._4_4_ <= 0.0) {
          local_res20._4_4_ = 0.0;
        }
        local_d4 = 0;
        if (((float)local_f0 == (float)local_res20) && (local_f0._4_4_ == local_res20._4_4_)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        local_e8 = (bool)(local_e8 | bVar8);
        local_f0 = local_res20;
        FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_118);
        *(undefined4 *)&this->_padding_ = local_e0;
        *(undefined4 *)&this->_padding_ = local_dc._4_4_;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_dc;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_d4;
        if ((FScriptContainerElement *)local_118._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._24_8_);
        }
        if ((FScriptContainerElement *)local_118._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._8_8_);
        }
      }
    }
  }
  pTVar12 = &param_1->FlagsArray;
  iVar1 = (this->XPBDBendingSpringDampingIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar12), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBendingSpringDampingIndex).Index,pTVar12),
     (char)EVar6 < '\0')) {
    if (((this->XPBDBendingSpringDampingIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBendingSpringDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                           ,0x18c,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->XPBDBendingSpringDampingIndex).Index;
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar1,&param_1->LowValueArray);
    if (fVar4 <= (float)local_res8) {
      local_res8._0_4_ = fVar4;
    }
    if (fVar4 <= fVar13) {
      fVar13 = fVar4;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    local_res8._4_4_ = fVar13;
    TVar5 = local_res8;
    if (((this->XPBDBendingSpringDampingIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBendingSpringDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                           ,0x18c,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDBendingSpringDampingIndex).Index,pTVar12);
    if ((EVar6 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&this->_padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
      this->_padding_ = (longlong)TVar5;
    }
    else {
      if (((this->XPBDBendingSpringDampingIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingSpringDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDSpringConstraints.h"
                             ,0x18c,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->XPBDBendingSpringDampingIndex).Index,
                          &param_1->StringValueArray);
      local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
      local_c0.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      if ((local_c0.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar9);
      if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_128.DataPtr = (float *)0x0;
        local_128._8_8_ = (ulonglong)(uint)local_128._12_4_ << 0x20;
      }
      else {
        local_128.DataPtr = *(float **)&pTVar10->field_0x10;
        local_128._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
      }
      pFVar11 = FPBDWeightMap::FPBDWeightMap<2>
                          (local_b0,(TVector<float,2> *)&local_res8,&local_128,&local_c0,(int)lVar3,
                           iVar1,0x10,(void *)0x0);
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,pFVar11);
      if (local_b0[0].Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Table.AllocatorInstance.Data);
      }
      if (local_b0[0].Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Indices.AllocatorInstance.Data);
      }
    }
  }
  return;
}

