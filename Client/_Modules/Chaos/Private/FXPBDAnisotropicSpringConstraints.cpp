// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetProperties @ 143f24210

void __thiscall
Chaos::Softs::FXPBDAnisotropicSpringConstraints::SetProperties
          (FXPBDAnisotropicSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  bool *pbVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  float fVar6;
  TVector<float,2> TVar7;
  ECollectionPropertyFlags EVar8;
  bool bVar9;
  FString *pFVar10;
  TArrayView<Chaos::TVector<int,2>_const_,int> *pTVar11;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar12;
  FPBDFlatWeightMap *pFVar13;
  TArrayView<Chaos::TVector<int,3>_const_,int> *pTVar14;
  FScriptContainerElement **ppFVar15;
  FPBDWeightMap *pFVar16;
  byte bVar17;
  TArrayView<unsigned_char_const_,int> *pTVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  TVector<float,2> local_540;
  float local_538;
  float fStack_534;
  undefined8 local_530;
  TVector<float,2> local_528;
  TVector<float,2> local_520;
  TArrayView<float_const_,int> local_518;
  TArrayView<float_const_,int> local_508;
  TArrayView<float_const_,int> local_4f8;
  TArrayView<float_const_,int> local_4e8;
  TArrayView<float_const_,int> local_4d8;
  TArrayView<float_const_,int> local_4c8;
  TArrayView<float_const_,int> local_4b8;
  TArrayView<float_const_,int> local_4a8;
  TArrayView<float_const_,int> local_498;
  TArrayView<float_const_,int> local_488;
  TArrayView<float_const_,int> local_478;
  TArrayView<float_const_,int> local_468;
  FScriptContainerElement *local_458;
  int iStack_450;
  FScriptContainerElement *local_448;
  undefined4 local_440;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_438;
  FScriptContainerElement *local_428;
  int iStack_420;
  FScriptContainerElement *local_418;
  undefined4 local_410;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_408;
  FScriptContainerElement *local_3f8;
  int iStack_3f0;
  FScriptContainerElement *local_3e8;
  undefined4 local_3e0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_3d8;
  FScriptContainerElement *local_3c8;
  int iStack_3c0;
  FScriptContainerElement *local_3b8;
  undefined4 local_3b0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_3a8;
  undefined1 local_398 [40];
  float local_370;
  float local_36c;
  undefined1 local_368 [40];
  float local_340;
  float local_33c;
  undefined1 local_338 [40];
  float local_310;
  float local_30c;
  undefined1 local_308 [40];
  float local_2e0;
  float local_2dc;
  FScriptContainerElement *local_2d8 [2];
  FScriptContainerElement *local_2c8 [2];
  FScriptContainerElement *local_2b8 [2];
  FScriptContainerElement *local_2a8 [2];
  TArrayView<Chaos::TVector<int,2>_const_,int> local_298;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_288;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_278;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_268;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_258;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_248;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_238;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_228;
  FPBDWeightMap local_218;
  FPBDWeightMap local_1e0;
  FPBDWeightMap local_1a8;
  FPBDWeightMap local_170;
  FPBDFlatWeightMap local_138;
  FPBDFlatWeightMap local_108;
  FPBDFlatWeightMap local_d8;
  FPBDFlatWeightMap local_a8 [2];
  
  fVar6 = __real_4e6e6b28;
  iVar2 = (this->XPBDAnisoSpringStiffnessWarpIndex).Index;
  if (iVar2 != -1) {
    pTVar18 = &param_1->FlagsArray;
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar2,pTVar18);
    if (((EVar8 & Animatable) != None) &&
       (EVar8 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->XPBDAnisoSpringStiffnessWarpIndex).Index,pTVar18),
       (char)EVar8 < '\0')) {
      if (((this->XPBDAnisoSpringStiffnessWarpIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x20d,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->XPBDAnisoSpringStiffnessWarpIndex).Index;
      local_558._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->HighValueArray);
      local_558._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      if (((this->XPBDAnisoSpringStiffnessWarpIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x20d,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringStiffnessWarpIndex).Index,pTVar18);
      if ((EVar8 & StringDirty) == None) {
        if (fVar6 <= local_558._4_4_) {
          local_558._4_4_ = fVar6;
        }
        if (fVar6 <= (float)local_558) {
          local_558._0_4_ = fVar6;
        }
        if (local_558._4_4_ <= 0.0) {
          local_558._4_4_ = 0.0;
        }
        if ((float)local_558 <= 0.0) {
          local_558._0_4_ = 0.0;
        }
        *(float *)&(this->EdgeConstraints).StiffnessWarp.MapView.OffsetRange = (float)local_558;
        *(float *)&(this->EdgeConstraints).StiffnessWarp.MapView.OffsetRange.field_0x4 =
             local_558._4_4_ - (float)local_558;
        *(float *)&(this->AxialConstraints).StiffnessWarp.MapView.OffsetRange = (float)local_558;
        *(float *)&(this->AxialConstraints).StiffnessWarp.MapView.OffsetRange.field_0x4 =
             local_558._4_4_ - (float)local_558;
      }
      else {
        if (((this->XPBDAnisoSpringStiffnessWarpIndex).Index == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("XPBDAnisoSpringStiffnessWarpIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                               ,0x20d,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                            (param_1,(this->XPBDAnisoSpringStiffnessWarpIndex).Index,
                             &param_1->StringValueArray);
        iVar2 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
        lVar5 = (this->EdgeConstraints)._padding_;
        pTVar11 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                  TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                            (&local_298,
                             (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                             &(this->EdgeConstraints)._padding_);
        pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar10);
        if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_518._8_8_ = (ulonglong)(uint)local_518._12_4_ << 0x20;
          local_518.DataPtr = (float *)0x0;
        }
        else {
          local_518.DataPtr = *(float **)&pTVar12->field_0x10;
          local_518._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
        }
        if (fVar6 <= local_558._4_4_) {
          local_558._4_4_ = fVar6;
        }
        if (fVar6 <= (float)local_558) {
          local_558._0_4_ = fVar6;
        }
        if (local_558._4_4_ <= 0.0) {
          local_558._4_4_ = 0.0;
        }
        if ((float)local_558 <= 0.0) {
          local_558._0_4_ = 0.0;
        }
        local_528 = local_558;
        pFVar13 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                            (local_a8,&local_528,&local_518,pTVar11,(int)lVar5,iVar2,(void *)0x0);
        FPBDFlatWeightMap::operator=(&(this->EdgeConstraints).StiffnessWarp,pFVar13);
        if (local_a8[0].MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8[0].MapValues.AllocatorInstance.Data);
        }
        iVar2 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
        lVar5 = (this->AxialConstraints)._padding_;
        pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::
                  TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                            (&local_288,
                             (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
                             &(this->AxialConstraints)._padding_);
        pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar10);
        if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_508._8_8_ = (ulonglong)(uint)local_508._12_4_ << 0x20;
          local_508.DataPtr = (float *)0x0;
        }
        else {
          local_508.DataPtr = *(float **)&pTVar12->field_0x10;
          local_508._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
        }
        FPBDFlatWeightMap::CalculateMapValues<3>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)local_398,&local_508,pTVar14,
                   (int)lVar5,iVar2);
        local_398._16_4_ = pTVar14->ArrayNum;
        local_458 = (FScriptContainerElement *)local_398._0_8_;
        if (((int)local_398._8_4_ < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_450 = local_398._8_4_;
        if (local_398._8_4_ == local_398._16_4_) {
          ppFVar15 = local_2d8;
          local_2d8[0] = local_458;
        }
        else {
          ppFVar15 = &local_448;
          local_448 = (FScriptContainerElement *)0x0;
          local_440 = 0;
        }
        local_398._24_8_ = *ppFVar15;
        local_398._32_8_ = ppFVar15[1];
        local_36c = local_558._4_4_ - (float)local_558;
        local_370 = (float)local_558;
        FPBDFlatWeightMap::operator=
                  (&(this->AxialConstraints).StiffnessWarp,(FPBDFlatWeightMap *)local_398);
        if ((FScriptContainerElement *)local_398._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_398._0_8_);
        }
      }
    }
  }
  pTVar18 = &param_1->FlagsArray;
  iVar2 = (this->XPBDAnisoSpringStiffnessWeftIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar18), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringStiffnessWeftIndex).Index,pTVar18),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoSpringStiffnessWeftIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x20e,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->XPBDAnisoSpringStiffnessWeftIndex).Index;
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->HighValueArray);
    fVar20 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->LowValueArray);
    if (((this->XPBDAnisoSpringStiffnessWeftIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x20e,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoSpringStiffnessWeftIndex).Index,pTVar18);
    if ((EVar8 & StringDirty) == None) {
      if (fVar6 <= fVar19) {
        fVar19 = fVar6;
      }
      if (fVar6 <= fVar20) {
        fVar20 = fVar6;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      *(float *)&(this->EdgeConstraints).StiffnessWeft.MapView.OffsetRange = fVar20;
      *(float *)&(this->EdgeConstraints).StiffnessWeft.MapView.OffsetRange.field_0x4 =
           fVar19 - fVar20;
      *(float *)&(this->AxialConstraints).StiffnessWeft.MapView.OffsetRange = fVar20;
      *(float *)&(this->AxialConstraints).StiffnessWeft.MapView.OffsetRange.field_0x4 =
           fVar19 - fVar20;
    }
    else {
      if (((this->XPBDAnisoSpringStiffnessWeftIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringStiffnessWeftIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x20e,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoSpringStiffnessWeftIndex).Index,
                           &param_1->StringValueArray);
      local_438.DataPtr = (TVector<int,2> *)(this->EdgeConstraints)._padding_;
      iVar2 = (int)(this->EdgeConstraints)._padding_;
      iVar3 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
      lVar5 = (this->EdgeConstraints)._padding_;
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_438.ArrayNum = iVar2;
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4f8._8_8_ = (ulonglong)(uint)local_4f8._12_4_ << 0x20;
        local_4f8.DataPtr = (float *)0x0;
      }
      else {
        local_4f8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4f8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      if (fVar6 <= fVar20) {
        fVar20 = fVar6;
      }
      if (fVar6 <= fVar19) {
        fVar19 = fVar6;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_368,&local_4f8,&local_438,
                 (int)lVar5,iVar3);
      local_428 = (FScriptContainerElement *)local_368._0_8_;
      if (((int)local_368._8_4_ < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_420 = local_368._8_4_;
      local_368._16_4_ = iVar2;
      if (local_368._8_4_ == iVar2) {
        ppFVar15 = local_2c8;
        local_2c8[0] = local_428;
      }
      else {
        local_418 = (FScriptContainerElement *)0x0;
        local_410 = 0;
        ppFVar15 = &local_418;
      }
      local_368._24_8_ = *ppFVar15;
      local_368._32_8_ = ppFVar15[1];
      local_340 = fVar20;
      local_33c = fVar19 - fVar20;
      FPBDFlatWeightMap::operator=
                (&(this->EdgeConstraints).StiffnessWeft,(FPBDFlatWeightMap *)local_368);
      if ((FScriptContainerElement *)local_368._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_368._0_8_);
      }
      local_408.DataPtr = (TVector<int,3> *)(this->AxialConstraints)._padding_;
      iVar2 = (int)(this->AxialConstraints)._padding_;
      iVar3 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
      lVar5 = (this->AxialConstraints)._padding_;
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_408.ArrayNum = iVar2;
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4e8.DataPtr = (float *)0x0;
        local_4e8._8_8_ = (ulonglong)(uint)local_4e8._12_4_ << 0x20;
      }
      else {
        local_4e8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4e8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      FPBDFlatWeightMap::CalculateMapValues<3>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_338,&local_4e8,&local_408,
                 (int)lVar5,iVar3);
      local_3f8 = (FScriptContainerElement *)local_338._0_8_;
      if (((int)local_338._8_4_ < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_3f0 = local_338._8_4_;
      local_338._16_4_ = iVar2;
      if (local_338._8_4_ == iVar2) {
        ppFVar15 = local_2b8;
        local_2b8[0] = local_3f8;
      }
      else {
        local_3e8 = (FScriptContainerElement *)0x0;
        ppFVar15 = &local_3e8;
        local_3e0 = 0;
      }
      local_338._24_8_ = *ppFVar15;
      local_338._32_8_ = ppFVar15[1];
      local_310 = fVar20;
      local_30c = fVar19 - fVar20;
      FPBDFlatWeightMap::operator=
                (&(this->AxialConstraints).StiffnessWeft,(FPBDFlatWeightMap *)local_338);
      if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_338._0_8_);
      }
    }
  }
  iVar2 = (this->XPBDAnisoSpringStiffnessBiasIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar18), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringStiffnessBiasIndex).Index,pTVar18),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoSpringStiffnessBiasIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x20f,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->XPBDAnisoSpringStiffnessBiasIndex).Index;
    local_558._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->HighValueArray);
    local_558._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    if (((this->XPBDAnisoSpringStiffnessBiasIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x20f,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoSpringStiffnessBiasIndex).Index,pTVar18);
    if ((EVar8 & StringDirty) == None) {
      if (fVar6 <= local_558._4_4_) {
        local_558._4_4_ = fVar6;
      }
      if (fVar6 <= (float)local_558) {
        local_558._0_4_ = fVar6;
      }
      if (local_558._4_4_ <= 0.0) {
        local_558._4_4_ = 0.0;
      }
      if ((float)local_558 <= 0.0) {
        local_558._0_4_ = 0.0;
      }
      *(float *)&(this->EdgeConstraints).StiffnessBias.MapView.OffsetRange = (float)local_558;
      *(float *)&(this->EdgeConstraints).StiffnessBias.MapView.OffsetRange.field_0x4 =
           local_558._4_4_ - (float)local_558;
      *(float *)&(this->AxialConstraints).StiffnessBias.MapView.OffsetRange = (float)local_558;
      *(float *)&(this->AxialConstraints).StiffnessBias.MapView.OffsetRange.field_0x4 =
           local_558._4_4_ - (float)local_558;
    }
    else {
      if (((this->XPBDAnisoSpringStiffnessBiasIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringStiffnessBiasIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x20f,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoSpringStiffnessBiasIndex).Index,
                           &param_1->StringValueArray);
      local_3d8.DataPtr = (TVector<int,2> *)(this->EdgeConstraints)._padding_;
      iVar2 = (int)(this->EdgeConstraints)._padding_;
      iVar3 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
      lVar5 = (this->EdgeConstraints)._padding_;
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_3d8.ArrayNum = iVar2;
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4d8._8_8_ = (ulonglong)(uint)local_4d8._12_4_ << 0x20;
        local_4d8.DataPtr = (float *)0x0;
      }
      else {
        local_4d8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4d8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      if (fVar6 <= local_558._4_4_) {
        local_558._4_4_ = fVar6;
      }
      if (fVar6 <= (float)local_558) {
        local_558._0_4_ = fVar6;
      }
      if (local_558._4_4_ <= 0.0) {
        local_558._4_4_ = 0.0;
      }
      if ((float)local_558 <= 0.0) {
        local_558._0_4_ = 0.0;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_308,&local_4d8,&local_3d8,
                 (int)lVar5,iVar3);
      local_3c8 = (FScriptContainerElement *)local_308._0_8_;
      if (((int)local_308._8_4_ < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_3c0 = local_308._8_4_;
      local_308._16_4_ = iVar2;
      if (local_308._8_4_ == iVar2) {
        ppFVar15 = local_2a8;
        local_2a8[0] = local_3c8;
      }
      else {
        local_3b8 = (FScriptContainerElement *)0x0;
        local_3b0 = 0;
        ppFVar15 = &local_3b8;
      }
      local_308._24_8_ = *ppFVar15;
      local_308._32_8_ = ppFVar15[1];
      local_2dc = local_558._4_4_ - (float)local_558;
      local_2e0 = (float)local_558;
      FPBDFlatWeightMap::operator=
                (&(this->EdgeConstraints).StiffnessBias,(FPBDFlatWeightMap *)local_308);
      if ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_308._0_8_);
      }
      local_3a8.DataPtr = (TVector<int,3> *)(this->AxialConstraints)._padding_;
      iVar2 = (int)(this->AxialConstraints)._padding_;
      iVar3 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
      lVar5 = (this->AxialConstraints)._padding_;
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_3a8.ArrayNum = iVar2;
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4c8._8_8_ = (ulonglong)(uint)local_4c8._12_4_ << 0x20;
        local_4c8.DataPtr = (float *)0x0;
      }
      else {
        local_4c8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4c8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      local_520 = local_558;
      pFVar13 = FPBDFlatWeightMap::FPBDFlatWeightMap<3>
                          (&local_138,&local_520,&local_4c8,&local_3a8,(int)lVar5,iVar3,(void *)0x0)
      ;
      FPBDFlatWeightMap::operator=(&(this->AxialConstraints).StiffnessBias,pFVar13);
      if (local_138.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar2 = (this->XPBDAnisoSpringDampingIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar18), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringDampingIndex).Index,pTVar18),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoSpringDampingIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x210,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->XPBDAnisoSpringDampingIndex).Index;
    local_558._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->HighValueArray);
    local_558._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    local_548 = local_558;
    if (__real_447a0000 <= (float)local_558) {
      local_558._0_4_ = __real_447a0000;
    }
    if ((float)local_558 <= 0.0) {
      local_558._0_4_ = 0.0;
    }
    if (__real_447a0000 <= local_558._4_4_) {
      local_558._4_4_ = __real_447a0000;
    }
    if (local_558._4_4_ <= 0.0) {
      local_558._4_4_ = 0.0;
    }
    local_550 = local_558;
    if (((this->XPBDAnisoSpringDampingIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x210,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoSpringDampingIndex).Index,pTVar18);
    if ((EVar8 & StringDirty) == None) {
      *(float *)&(this->EdgeConstraints).DampingRatio.MapView.OffsetRange = (float)local_550;
      *(float *)&(this->EdgeConstraints).DampingRatio.MapView.OffsetRange.field_0x4 =
           local_550._4_4_ - (float)local_550;
      *(float *)&(this->AxialConstraints).DampingRatio.MapView.OffsetRange = (float)local_550;
      *(float *)&(this->AxialConstraints).DampingRatio.MapView.OffsetRange.field_0x4 =
           local_550._4_4_ - (float)local_550;
    }
    else {
      if (((this->XPBDAnisoSpringDampingIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x210,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoSpringDampingIndex).Index,
                           &param_1->StringValueArray);
      iVar2 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
      lVar5 = (this->AxialConstraints)._padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::
                TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                          (&local_278,
                           (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
                           &(this->AxialConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4b8._8_8_ = (ulonglong)(uint)local_4b8._12_4_ << 0x20;
        local_4b8.DataPtr = (float *)0x0;
      }
      else {
        local_4b8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4b8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar13 = FPBDFlatWeightMap::FPBDFlatWeightMap<3>
                          (&local_108,(TVector<float,2> *)&local_550,&local_4b8,pTVar14,(int)lVar5,
                           iVar2,(void *)0x0);
      FPBDFlatWeightMap::operator=(&(this->AxialConstraints).DampingRatio,pFVar13);
      if (local_108.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.MapValues.AllocatorInstance.Data);
      }
      iVar2 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
      lVar5 = (this->EdgeConstraints)._padding_;
      pTVar11 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_268,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &(this->EdgeConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_4a8._8_8_ = (ulonglong)(uint)local_4a8._12_4_ << 0x20;
        local_4a8.DataPtr = (float *)0x0;
      }
      else {
        local_4a8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_4a8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar13 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                          (&local_d8,(TVector<float,2> *)&local_550,&local_4a8,pTVar11,(int)lVar5,
                           iVar2,(void *)0x0);
      FPBDFlatWeightMap::operator=(&(this->AxialConstraints).DampingRatio,pFVar13);
      if (local_d8.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.MapValues.AllocatorInstance.Data);
      }
    }
  }
  fVar6 = __real_4b189680;
  iVar2 = (this->XPBDAnisoSpringWarpScaleIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar18), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringWarpScaleIndex).Index,pTVar18),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoSpringWarpScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringWarpScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x211,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->XPBDAnisoSpringWarpScaleIndex).Index;
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    local_res8._4_4_ = fVar19;
    local_540 = local_res8;
    if (fVar6 <= (float)local_res8) {
      local_res8._0_4_ = fVar6;
    }
    if (fVar6 <= fVar19) {
      fVar19 = fVar6;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    local_res8._4_4_ = fVar19;
    TVar7 = local_res8;
    if (((this->XPBDAnisoSpringWarpScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringWarpScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x211,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoSpringWarpScaleIndex).Index,pTVar18);
    if ((EVar8 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&(this->EdgeConstraints).WarpScale.WeightedValue) &&
         (local_res8._4_4_ == *(float *)&(this->EdgeConstraints).WarpScale.WeightedValue.field_0x4))
      {
        bVar17 = 0;
      }
      else {
        bVar17 = 1;
      }
      pbVar1 = &(this->EdgeConstraints).WarpScale.bIsDirty;
      *pbVar1 = (bool)(*pbVar1 | bVar17);
      (this->EdgeConstraints).WarpScale.WeightedValue = TVar7;
      if (((float)local_res8 == *(float *)&(this->AxialConstraints).WarpScale.WeightedValue) &&
         (local_res8._4_4_ == *(float *)&(this->AxialConstraints).WarpScale.WeightedValue.field_0x4)
         ) {
        bVar17 = 0;
      }
      else {
        bVar17 = 1;
      }
      pbVar1 = &(this->AxialConstraints).WarpScale.bIsDirty;
      *pbVar1 = (bool)(*pbVar1 | bVar17);
      (this->AxialConstraints).WarpScale.WeightedValue = TVar7;
    }
    else {
      if (((this->XPBDAnisoSpringWarpScaleIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x211,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoSpringWarpScaleIndex).Index,
                           &param_1->StringValueArray);
      iVar2 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
      lVar5 = (this->EdgeConstraints)._padding_;
      pTVar11 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_258,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &(this->EdgeConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_498._8_8_ = (ulonglong)(uint)local_498._12_4_ << 0x20;
        local_498.DataPtr = (float *)0x0;
      }
      else {
        local_498.DataPtr = *(float **)&pTVar12->field_0x10;
        local_498._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar16 = FPBDWeightMap::FPBDWeightMap<2>
                          (&local_1e0,(TVector<float,2> *)&local_res8,&local_498,pTVar11,(int)lVar5,
                           iVar2,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&(this->EdgeConstraints).WarpScale,pFVar16);
      if (local_1e0.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Table.AllocatorInstance.Data);
      }
      if (local_1e0.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Indices.AllocatorInstance.Data);
      }
      iVar2 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
      lVar5 = (this->AxialConstraints)._padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::
                TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                          (&local_248,
                           (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
                           &(this->AxialConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_488._8_8_ = (ulonglong)(uint)local_488._12_4_ << 0x20;
        local_488.DataPtr = (float *)0x0;
      }
      else {
        local_488.DataPtr = *(float **)&pTVar12->field_0x10;
        local_488._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar16 = FPBDWeightMap::FPBDWeightMap<3>
                          (&local_1a8,(TVector<float,2> *)&local_res8,&local_488,pTVar14,(int)lVar5,
                           iVar2,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&(this->AxialConstraints).WarpScale,pFVar16);
      if (local_1a8.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Table.AllocatorInstance.Data);
      }
      if (local_1a8.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar2 = (this->XPBDAnisoSpringWeftScaleIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar18), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoSpringWeftScaleIndex).Index,pTVar18),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoSpringWeftScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringWeftScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x212,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->XPBDAnisoSpringWeftScaleIndex).Index;
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->HighValueArray);
    local_538 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar2,&param_1->LowValueArray);
    local_530 = CONCAT44(fVar19,local_538);
    local_res20._0_4_ = local_538;
    if (fVar6 <= local_538) {
      local_res20._0_4_ = fVar6;
    }
    local_res20._4_4_ = fVar19;
    if (fVar6 <= fVar19) {
      local_res20._4_4_ = fVar6;
    }
    if ((float)local_res20 <= 0.0) {
      local_res20._0_4_ = 0.0;
    }
    if (local_res20._4_4_ <= 0.0) {
      local_res20._4_4_ = 0.0;
    }
    TVar7 = local_res20;
    fStack_534 = fVar19;
    if (((this->XPBDAnisoSpringWeftScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoSpringWeftScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                           ,0x212,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoSpringWeftScaleIndex).Index,pTVar18);
    if ((EVar8 & StringDirty) == None) {
      if (((float)local_res20 == *(float *)&(this->EdgeConstraints).WeftScale.WeightedValue) &&
         (local_res20._4_4_ == *(float *)&(this->EdgeConstraints).WeftScale.WeightedValue.field_0x4)
         ) {
        bVar17 = 0;
      }
      else {
        bVar17 = 1;
      }
      pbVar1 = &(this->EdgeConstraints).WeftScale.bIsDirty;
      *pbVar1 = (bool)(*pbVar1 | bVar17);
      (this->EdgeConstraints).WeftScale.WeightedValue = TVar7;
      if (((float)local_res20 == *(float *)&(this->AxialConstraints).WeftScale.WeightedValue) &&
         (local_res20._4_4_ == *(float *)&(this->AxialConstraints).WeftScale.WeightedValue.field_0x4
         )) {
        bVar17 = 0;
      }
      else {
        bVar17 = 1;
      }
      pbVar1 = &(this->AxialConstraints).WeftScale.bIsDirty;
      *pbVar1 = (bool)(*pbVar1 | bVar17);
      (this->AxialConstraints).WeftScale.WeightedValue = TVar7;
    }
    else {
      if (((this->XPBDAnisoSpringWeftScaleIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoSpringWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicSpringConstraints.h"
                             ,0x212,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoSpringWeftScaleIndex).Index,
                           &param_1->StringValueArray);
      iVar2 = *(int *)((longlong)&(this->EdgeConstraints)._padding_ + 4);
      lVar5 = (this->EdgeConstraints)._padding_;
      pTVar11 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_238,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &(this->EdgeConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_478.DataPtr = (float *)0x0;
        local_478._8_8_ = (ulonglong)(uint)local_478._12_4_ << 0x20;
      }
      else {
        local_478.DataPtr = *(float **)&pTVar12->field_0x10;
        local_478._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar16 = FPBDWeightMap::FPBDWeightMap<2>
                          (&local_170,(TVector<float,2> *)&local_res20,&local_478,pTVar11,(int)lVar5
                           ,iVar2,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&(this->EdgeConstraints).WeftScale,pFVar16);
      if (local_170.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Table.AllocatorInstance.Data);
      }
      if (local_170.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Indices.AllocatorInstance.Data);
      }
      iVar2 = *(int *)((longlong)&(this->AxialConstraints)._padding_ + 4);
      lVar5 = (this->AxialConstraints)._padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::
                TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                          (&local_228,
                           (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
                           &(this->AxialConstraints)._padding_);
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_468.DataPtr = (float *)0x0;
        local_468._8_8_ = (ulonglong)(uint)local_468._12_4_ << 0x20;
      }
      else {
        local_468.DataPtr = *(float **)&pTVar12->field_0x10;
        local_468._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar16 = FPBDWeightMap::FPBDWeightMap<3>
                          (&local_218,(TVector<float,2> *)&local_res20,&local_468,pTVar14,(int)lVar5
                           ,iVar2,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&(this->AxialConstraints).WeftScale,pFVar16);
      if (local_218.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Table.AllocatorInstance.Data);
      }
      if (local_218.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Indices.AllocatorInstance.Data);
      }
    }
  }
  return;
}

