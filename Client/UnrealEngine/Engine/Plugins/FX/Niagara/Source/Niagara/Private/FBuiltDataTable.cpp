// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// BuildRowStructColumns @ 148eab610

void __thiscall
NDIDataTableLocal::FBuiltDataTable::BuildRowStructColumns
          (FBuiltDataTable *this,UScriptStruct *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_> FVar6;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar7;
  FName FVar8;
  int iVar9;
  undefined8 *puVar10;
  UScriptStruct *pUVar11;
  code *pcVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_> FVar15;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar16;
  bool bVar17;
  FNiagaraTypeDefinitionHandle local_180;
  FName local_17c;
  FNiagaraTypeDefinitionHandle local_174;
  FName local_170;
  FNiagaraTypeDefinitionHandle local_168;
  FName local_164;
  FNiagaraTypeDefinitionHandle local_15c;
  FName local_158;
  FNiagaraTypeDefinitionHandle local_150;
  FName local_14c;
  FNiagaraTypeDefinitionHandle local_144;
  FName local_140;
  FNiagaraTypeDefinitionHandle local_138;
  FName local_134;
  FNiagaraTypeDefinitionHandle local_12c;
  undefined4 local_128;
  uint uStack_124;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 local_118;
  uint uStack_114;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 local_108;
  uint uStack_104;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  void *local_c0 [2];
  void *local_b0 [2];
  void *local_a0 [2];
  void *local_90 [2];
  void *local_80 [2];
  void *local_70 [2];
  void *local_60 [2];
  void *local_50 [3];
  
  lVar4 = param_1->_padding_;
  do {
    if (lVar4 == 0) {
      return;
    }
    uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18);
    if ((char)uVar5 < '\0') {
      puVar10 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x328))(param_1,local_c0,lVar4);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar10;
      }
      ::FName::FName(&local_100,pwVar14);
      if (local_c0[0] != (void *)0x0) {
        FMemory::Free(local_c0[0]);
      }
      FVar8 = local_100;
      local_180.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_180,&FNiagaraTypeDefinition::IntDef);
      piVar1 = &(this->Columns).ArrayMax;
      iVar9 = (this->Columns).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                          (0x410,&(this->Columns).AllocatorInstance,piVar1);
      }
      (this->Columns).ArrayNum = iVar9 + 1;
      FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
      if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
        FVar15 = FVar6;
      }
      lVar13 = (longlong)iVar9;
      *(FName *)((longlong)FVar15 + lVar13 * 0x10) = FVar8;
      *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) = local_180.RegisteredTypeIndex;
      *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
      uVar2 = *(undefined4 *)(lVar4 + 0x44);
      piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
      uVar3 = this->RowStride;
      iVar9 = (this->RowStructConversionFuncs).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                          (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,piVar1);
      }
      (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
      FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
               &this->RowStructConversionFuncs;
      if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                   0x0) {
        FVar16 = FVar7;
      }
      puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
      *puVar10 = 0;
      puVar10[5] = 0;
      puVar10[2] = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_HH_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      puVar10[3] = CONCAT44(uVar3,uVar2);
      if (puVar10 + 3 != (undefined8 *)0x0) {
        *puVar10 = UE::Core::Private::Function::
                   TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<int,int>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                   ::Call;
      }
      this->RowStride = this->RowStride + 4;
    }
    else if ((uVar5 >> 8 & 1) == 0) {
      if ((uVar5 & 0x100000000) == 0) {
        if ((uVar5 >> 0x14 & 1) != 0) {
          pUVar11 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
          if (*(UScriptStruct **)(lVar4 + 0x70) == (UScriptStruct *)0x0) {
            bVar17 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar17 = *(UScriptStruct **)(lVar4 + 0x70) == pUVar11;
          }
          if (bVar17) {
            puVar10 = (undefined8 *)
                      (**(code **)(param_1->_padding_ + 0x328))(param_1,local_90,lVar4);
            if (*(int *)(puVar10 + 1) == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)*puVar10;
            }
            ::FName::FName(&local_e8,pwVar14);
            if (local_90[0] != (void *)0x0) {
              FMemory::Free(local_90[0]);
            }
            local_164 = local_e8;
            local_15c.RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(&local_15c,&FNiagaraTypeDefinition::Vec2Def)
            ;
            piVar1 = &(this->Columns).ArrayMax;
            iVar9 = (this->Columns).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                                (0x410,&(this->Columns).AllocatorInstance,piVar1);
            }
            (this->Columns).ArrayNum = iVar9 + 1;
            FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
            if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
              FVar15 = FVar6;
            }
            lVar13 = (longlong)iVar9;
            *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_164;
            *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) =
                 local_15c.RegisteredTypeIndex;
            *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
            local_128 = *(undefined4 *)(lVar4 + 0x44);
            piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
            uStack_124 = this->RowStride;
            iVar9 = (this->RowStructConversionFuncs).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                                (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,piVar1);
            }
            (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
            FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                      )&this->RowStructConversionFuncs;
            if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                          )0x0) {
              FVar16 = FVar7;
            }
            puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
            *puVar10 = 0;
            puVar10[5] = 0;
            puVar10[2] = &
                         ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector2_N_Math_UE__U__TVector2_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
            ;
            puVar10[3] = CONCAT44(uStack_124,local_128);
            if (puVar10 + 3 != (undefined8 *)0x0) {
              *puVar10 = UE::Core::Private::Function::
                         TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                         ::Call;
            }
            this->RowStride = this->RowStride + 8;
          }
          else {
            pUVar11 = TBaseStructure<UE::Math::TVector<double>_>::Get();
            if (*(UScriptStruct **)(lVar4 + 0x70) == (UScriptStruct *)0x0) {
              bVar17 = pUVar11 == (UScriptStruct *)0x0;
            }
            else {
              bVar17 = *(UScriptStruct **)(lVar4 + 0x70) == pUVar11;
            }
            if (bVar17) {
              puVar10 = (undefined8 *)
                        (**(code **)(param_1->_padding_ + 0x328))(param_1,local_80,lVar4);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)*puVar10;
              }
              ::FName::FName(&local_e0,pwVar14);
              if (local_80[0] != (void *)0x0) {
                FMemory::Free(local_80[0]);
              }
              local_158 = local_e0;
              local_150.RegisteredTypeIndex =
                   FNiagaraTypeDefinitionHandle::Register
                             (&local_150,&FNiagaraTypeDefinition::Vec3Def);
              piVar1 = &(this->Columns).ArrayMax;
              iVar9 = (this->Columns).ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                                  (0x410,&(this->Columns).AllocatorInstance,piVar1);
              }
              (this->Columns).ArrayNum = iVar9 + 1;
              FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
              FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
              if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
                FVar15 = FVar6;
              }
              lVar13 = (longlong)iVar9;
              *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_158;
              *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) =
                   local_150.RegisteredTypeIndex;
              *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
              local_120 = *(undefined4 *)(lVar4 + 0x44);
              piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
              uStack_11c = this->RowStride;
              iVar9 = (this->RowStructConversionFuncs).ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                                  (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,piVar1
                                  );
              }
              (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
              FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
              FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                        )&this->RowStructConversionFuncs;
              if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                            )0x0) {
                FVar16 = FVar7;
              }
              puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
              *puVar10 = 0;
              puVar10[5] = 0;
              puVar10[2] = &
                           ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector_N_Math_UE__U__TVector_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
              ;
              puVar10[3] = CONCAT44(uStack_11c,local_120);
              if (puVar10 + 3 != (undefined8 *)0x0) {
                *puVar10 = UE::Core::Private::Function::
                           TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector<double>,UE::Math::TVector<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                           ::Call;
              }
              this->RowStride = this->RowStride + 0xc;
            }
            else {
              pUVar11 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
              if (*(UScriptStruct **)(lVar4 + 0x70) == (UScriptStruct *)0x0) {
                bVar17 = pUVar11 == (UScriptStruct *)0x0;
              }
              else {
                bVar17 = *(UScriptStruct **)(lVar4 + 0x70) == pUVar11;
              }
              if (bVar17) {
                puVar10 = (undefined8 *)
                          (**(code **)(param_1->_padding_ + 0x328))(param_1,local_70,lVar4);
                if (*(int *)(puVar10 + 1) == 0) {
                  pwVar14 = L"";
                }
                else {
                  pwVar14 = (wchar_t *)*puVar10;
                }
                ::FName::FName(&local_d8,pwVar14);
                if (local_70[0] != (void *)0x0) {
                  FMemory::Free(local_70[0]);
                }
                local_14c = local_d8;
                local_144.RegisteredTypeIndex =
                     FNiagaraTypeDefinitionHandle::Register
                               (&local_144,&FNiagaraTypeDefinition::Vec4Def);
                piVar1 = &(this->Columns).ArrayMax;
                iVar9 = (this->Columns).ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                                    (0x410,&(this->Columns).AllocatorInstance,piVar1);
                }
                (this->Columns).ArrayNum = iVar9 + 1;
                FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
                FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
                if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
                  FVar15 = FVar6;
                }
                lVar13 = (longlong)iVar9;
                *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_14c;
                *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) =
                     local_144.RegisteredTypeIndex;
                *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
                local_118 = *(undefined4 *)(lVar4 + 0x44);
                piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
                uStack_114 = this->RowStride;
                iVar9 = (this->RowStructConversionFuncs).ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                                    (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,
                                     piVar1);
                }
                (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
                FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
                FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                          )&this->RowStructConversionFuncs;
                if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                              )0x0) {
                  FVar16 = FVar7;
                }
                puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
                *puVar10 = 0;
                puVar10[5] = 0;
                puVar10[2] = &
                             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector4_N_Math_UE__U__TVector4_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
                ;
                puVar10[3] = CONCAT44(uStack_114,local_118);
                if (puVar10 + 3 != (undefined8 *)0x0) {
                  pcVar12 = UE::Core::Private::Function::
                            TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                            ::Call;
LAB_148eac176:
                  *puVar10 = pcVar12;
                }
              }
              else {
                pUVar11 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
                if (*(UScriptStruct **)(lVar4 + 0x70) == (UScriptStruct *)0x0) {
                  bVar17 = pUVar11 == (UScriptStruct *)0x0;
                }
                else {
                  bVar17 = *(UScriptStruct **)(lVar4 + 0x70) == pUVar11;
                }
                if (bVar17) {
                  puVar10 = (undefined8 *)
                            (**(code **)(param_1->_padding_ + 0x328))(param_1,local_60,lVar4);
                  if (*(int *)(puVar10 + 1) == 0) {
                    pwVar14 = L"";
                  }
                  else {
                    pwVar14 = (wchar_t *)*puVar10;
                  }
                  ::FName::FName(&local_d0,pwVar14);
                  if (local_60[0] != (void *)0x0) {
                    FMemory::Free(local_60[0]);
                  }
                  local_140 = local_d0;
                  local_138.RegisteredTypeIndex =
                       FNiagaraTypeDefinitionHandle::Register
                                 (&local_138,&FNiagaraTypeDefinition::QuatDef);
                  piVar1 = &(this->Columns).ArrayMax;
                  iVar9 = (this->Columns).ArrayNum;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                                      (0x410,&(this->Columns).AllocatorInstance,piVar1);
                  }
                  (this->Columns).ArrayNum = iVar9 + 1;
                  FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
                  FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)
                           &this->Columns;
                  if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
                    FVar15 = FVar6;
                  }
                  lVar13 = (longlong)iVar9;
                  *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_140;
                  *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) =
                       local_138.RegisteredTypeIndex;
                  *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
                  local_110 = *(undefined4 *)(lVar4 + 0x44);
                  piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
                  uStack_10c = this->RowStride;
                  iVar9 = (this->RowStructConversionFuncs).ArrayNum;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                                      (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,
                                       piVar1);
                  }
                  (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
                  FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
                  FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                            )&this->RowStructConversionFuncs;
                  if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                                )0x0) {
                    FVar16 = FVar7;
                  }
                  puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
                  *puVar10 = 0;
                  puVar10[5] = 0;
                  puVar10[2] = &
                               ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TQuat_N_Math_UE__U__TQuat_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
                  ;
                  puVar10[3] = CONCAT44(uStack_10c,local_110);
                  if (puVar10 + 3 != (undefined8 *)0x0) {
                    pcVar12 = UE::Core::Private::Function::
                              TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                              ::Call;
                    goto LAB_148eac176;
                  }
                }
                else {
                  pUVar11 = TBaseStructure<FLinearColor>::Get();
                  if (*(UScriptStruct **)(lVar4 + 0x70) == (UScriptStruct *)0x0) {
                    bVar17 = pUVar11 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar17 = *(UScriptStruct **)(lVar4 + 0x70) == pUVar11;
                  }
                  if (!bVar17) goto LAB_148eac18a;
                  puVar10 = (undefined8 *)
                            (**(code **)(param_1->_padding_ + 0x328))(param_1,local_50,lVar4);
                  if (*(int *)(puVar10 + 1) == 0) {
                    pwVar14 = L"";
                  }
                  else {
                    pwVar14 = (wchar_t *)*puVar10;
                  }
                  ::FName::FName(&local_c8,pwVar14);
                  if (local_50[0] != (void *)0x0) {
                    FMemory::Free(local_50[0]);
                  }
                  local_134 = local_c8;
                  local_12c.RegisteredTypeIndex =
                       FNiagaraTypeDefinitionHandle::Register
                                 (&local_12c,&FNiagaraTypeDefinition::ColorDef);
                  piVar1 = &(this->Columns).ArrayMax;
                  iVar9 = (this->Columns).ArrayNum;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                                      (0x410,&(this->Columns).AllocatorInstance,piVar1);
                  }
                  (this->Columns).ArrayNum = iVar9 + 1;
                  FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
                  FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)
                           &this->Columns;
                  if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
                    FVar15 = FVar6;
                  }
                  lVar13 = (longlong)iVar9;
                  *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_134;
                  *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) =
                       local_12c.RegisteredTypeIndex;
                  *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
                  local_108 = *(undefined4 *)(lVar4 + 0x44);
                  piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
                  uStack_104 = this->RowStride;
                  iVar9 = (this->RowStructConversionFuncs).ArrayNum;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                                      (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,
                                       piVar1);
                  }
                  (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
                  FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
                  FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                            )&this->RowStructConversionFuncs;
                  if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                                )0x0) {
                    FVar16 = FVar7;
                  }
                  puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
                  *puVar10 = 0;
                  puVar10[5] = 0;
                  puVar10[2] = &
                               ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_UFLinearColor__U1__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
                  ;
                  puVar10[3] = CONCAT44(uStack_104,local_108);
                  if (puVar10 + 3 != (undefined8 *)0x0) {
                    pcVar12 = UE::Core::Private::Function::
                              TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<FLinearColor,FLinearColor>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                              ::Call;
                    goto LAB_148eac176;
                  }
                }
              }
              this->RowStride = this->RowStride + 0x10;
            }
          }
        }
      }
      else {
        puVar10 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x328))(param_1,local_a0,lVar4);
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)*puVar10;
        }
        ::FName::FName(&local_f0,pwVar14);
        if (local_a0[0] != (void *)0x0) {
          FMemory::Free(local_a0[0]);
        }
        local_170 = local_f0;
        local_168.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(&local_168,&FNiagaraTypeDefinition::FloatDef);
        piVar1 = &(this->Columns).ArrayMax;
        iVar9 = (this->Columns).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                            (0x410,&(this->Columns).AllocatorInstance,piVar1);
        }
        (this->Columns).ArrayNum = iVar9 + 1;
        FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
        if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
          FVar15 = FVar6;
        }
        lVar13 = (longlong)iVar9;
        *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_170;
        *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) = local_168.RegisteredTypeIndex;
        *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
        uVar2 = *(undefined4 *)(lVar4 + 0x44);
        piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
        uVar3 = this->RowStride;
        iVar9 = (this->RowStructConversionFuncs).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                            (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,piVar1);
        }
        (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
        FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                 &this->RowStructConversionFuncs;
        if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
        *puVar10 = 0;
        puVar10[5] = 0;
        puVar10[2] = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_NM_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        puVar10[3] = CONCAT44(uVar3,uVar2);
        if (puVar10 + 3 != (undefined8 *)0x0) {
          *puVar10 = UE::Core::Private::Function::
                     TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<double,float>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                     ::Call;
        }
        this->RowStride = this->RowStride + 4;
      }
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x328))(param_1,local_b0,lVar4);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar10;
      }
      ::FName::FName(&local_f8,pwVar14);
      if (local_b0[0] != (void *)0x0) {
        FMemory::Free(local_b0[0]);
      }
      local_17c = local_f8;
      local_174.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_174,&FNiagaraTypeDefinition::FloatDef);
      piVar1 = &(this->Columns).ArrayMax;
      iVar9 = (this->Columns).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>_>
                          (0x410,&(this->Columns).AllocatorInstance,piVar1);
      }
      (this->Columns).ArrayNum = iVar9 + 1;
      FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&this->Columns;
      if (FVar6 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
        FVar15 = FVar6;
      }
      lVar13 = (longlong)iVar9;
      *(FName *)((longlong)FVar15 + lVar13 * 0x10) = local_17c;
      *(int *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) = local_174.RegisteredTypeIndex;
      *(uint *)((uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10) = this->RowStride;
      uVar2 = *(undefined4 *)(lVar4 + 0x44);
      piVar1 = &(this->RowStructConversionFuncs).ArrayMax;
      uVar3 = this->RowStride;
      iVar9 = (this->RowStructConversionFuncs).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>_>
                          (0x1030,&(this->RowStructConversionFuncs).AllocatorInstance,piVar1);
      }
      (this->RowStructConversionFuncs).ArrayNum = iVar9 + 1;
      FVar7 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
               &this->RowStructConversionFuncs;
      if (FVar7 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                   0x0) {
        FVar16 = FVar7;
      }
      puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + (longlong)FVar16);
      *puVar10 = 0;
      puVar10[5] = 0;
      puVar10[2] = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_MM_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      puVar10[3] = CONCAT44(uVar3,uVar2);
      if (puVar10 + 3 != (undefined8 *)0x0) {
        *puVar10 = UE::Core::Private::Function::
                   TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<float,float>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
                   ::Call;
      }
      this->RowStride = this->RowStride + 4;
    }
LAB_148eac18a:
    lVar4 = *(longlong *)(lVar4 + 0x48);
  } while( true );
}

// BuildRows @ 148eac1d0

void __thiscall
NDIDataTableLocal::FBuiltDataTable::BuildRows(FBuiltDataTable *this,UDataTable *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  uchar *puVar11;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar15;
  int *piVar16;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar17;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 local_res20;
  undefined8 local_c8;
  FScriptContainerElement *local_c0;
  undefined8 local_b8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_b0;
  int *local_a8;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  
  plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  pTVar15 = &this->RowNames;
  uVar13 = (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34);
  local_b0 = pTVar15;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar16 = &(this->RowNames).ArrayMax;
  if ((this->RowNames).ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&pTVar15->AllocatorInstance,(this->RowNames).ArrayNum,piVar16);
  }
  uVar13 = (((int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34)) + 1) * this->RowStride;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->TableRowData).ArrayMax;
  iVar7 = *piVar1;
  if (uVar13 - iVar7 != 0 && iVar7 <= (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar13,&(this->TableRowData).AllocatorInstance,(this->TableRowData).ArrayNum,
               piVar1);
  }
  iVar7 = (int)plVar8[5];
  local_90 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar8 + 2);
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar7 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar8[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar8[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = local_90;
    }
    uVar13 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_148eac31e;
      uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_res18;
    if (iVar7 < iStack_84) {
      iStack_84 = iVar7;
    }
  }
LAB_148eac31e:
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  if (iStack_84 < iVar7) {
    local_a8 = &(this->TableRowData).ArrayNum;
    local_a0 = plVar8;
    iStack_7c = iStack_84;
    local_70 = plVar8;
    TStack_68.Array = local_90;
    TStack_68.CurrentBitIndex = iStack_84;
    do {
      piVar1 = local_a8;
      local_res20 = *(undefined8 *)(*local_70 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
      local_c8 = *(undefined8 *)(*local_70 + (longlong)TStack_68.CurrentBitIndex * 0x18);
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)*piVar16 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = pTVar15->ArrayNum;
      if (iVar7 == *piVar16) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar15->AllocatorInstance,piVar16);
      }
      pTVar15->ArrayNum = iVar7 + 1;
      *(undefined8 *)((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_c8;
      uVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,this->RowStride,&(this->TableRowData).AllocatorInstance,piVar1,
                          &(this->TableRowData).ArrayMax);
      uVar5 = local_res20;
      FVar17 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
      pFVar3 = (this->TableRowData).AllocatorInstance.Data;
      iVar7 = (this->RowStructConversionFuncs).ArrayNum;
      FVar12 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
               &this->RowStructConversionFuncs;
      if (FVar17 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                    )0x0) {
        FVar12 = FVar17;
      }
      FVar17 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
               ((longlong)iVar7 * 0x30 + (longlong)FVar12);
      while( true ) {
        if ((this->RowStructConversionFuncs).ArrayNum != iVar7) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar12 == FVar17) break;
        local_b8 = uVar5;
        local_c0 = pFVar3 + uVar13;
        UE::Core::Private::Function::CheckCallable(*(void **)FVar12);
        puVar11 = *(uchar **)((longlong)FVar12 + 0x28);
        pcVar4 = *(code **)FVar12;
        if (puVar11 == (uchar *)0x0) {
          puVar11 = (uchar *)((longlong)FVar12 + 0x10);
        }
        uVar9 = (**(code **)(*(longlong *)puVar11 + 8))();
        (*pcVar4)(uVar9,&local_b8,&local_c0);
        FVar12 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                 ((longlong)FVar12 + 0x30);
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      this->NumRows = this->NumRows + 1;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      piVar16 = &local_b0->ArrayMax;
      pTVar15 = local_b0;
    } while (TStack_68.CurrentBitIndex < (TStack_68.Array)->NumBits);
  }
  return;
}

// BuildRows @ 148eac580

void __thiscall
NDIDataTableLocal::FBuiltDataTable::BuildRows
          (FBuiltDataTable *this,UDataTable *param_1,TArrayView<FName_const_,int> *param_2)

{
  int *piVar1;
  FName FVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar9;
  undefined8 uVar10;
  uchar *puVar11;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar12;
  int *piVar13;
  FName *pFVar14;
  uint uVar15;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar16;
  FName *pFVar17;
  ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_> FVar18;
  undefined1 local_res8 [8];
  UDataTable *local_res10;
  FScriptContainerElement *local_res18;
  uchar *local_res20;
  FName local_68;
  int *local_60;
  FName *local_58;
  
  uVar8 = param_2->ArrayNum;
  local_res10 = param_1;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar13 = &(this->RowNames).ArrayMax;
  local_60 = piVar13;
  if (*piVar13 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar8,&(this->RowNames).AllocatorInstance,(this->RowNames).ArrayNum,piVar13);
  }
  uVar15 = (uVar8 + 1) * this->RowStride;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->TableRowData).ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&(this->TableRowData).AllocatorInstance,(this->TableRowData).ArrayNum,
               piVar1);
  }
  pFVar17 = param_2->DataPtr;
  pFVar14 = pFVar17 + (int)uVar8;
  local_58 = pFVar14;
  if (pFVar17 != pFVar14) {
    do {
      pTVar16 = &this->RowNames;
      FVar2 = *pFVar17;
      if ((param_1->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
        this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                   *)(**(code **)(param_1->_padding_ + 0x2d0))(param_1);
        ppuVar9 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                  ::Find(this_00,FVar2);
        if ((ppuVar9 != (uchar **)0x0) &&
           (puVar3 = *ppuVar9, param_1 = local_res10, puVar3 != (uchar *)0x0)) {
          pFVar14 = (FName *)(pTVar16->AllocatorInstance).Data;
          local_68 = FVar2;
          if ((pFVar14 <= &local_68) &&
             ((&local_68 < pFVar14 + *piVar13 &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = (this->RowNames).ArrayNum;
          if (iVar7 == *piVar13) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar16->AllocatorInstance,piVar13);
          }
          (this->RowNames).ArrayNum = iVar7 + 1;
          *(FName *)((pTVar16->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_68;
          uVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,this->RowStride,&(this->TableRowData).AllocatorInstance,
                             &(this->TableRowData).ArrayNum,&(this->TableRowData).ArrayMax);
          FVar12 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                   &this->RowStructConversionFuncs;
          pFVar4 = (this->TableRowData).AllocatorInstance.Data;
          FVar18 = (this->RowStructConversionFuncs).AllocatorInstance.SecondaryData;
          iVar7 = (this->RowStructConversionFuncs).ArrayNum;
          if (FVar18 != (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                         )0x0) {
            FVar12 = FVar18;
          }
          FVar18 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>)
                   ((longlong)iVar7 * 0x30 + (longlong)FVar12);
          while( true ) {
            if ((this->RowStructConversionFuncs).ArrayNum != iVar7) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (FVar12 == FVar18) break;
            local_res18 = pFVar4 + uVar8;
            local_res20 = puVar3;
            UE::Core::Private::Function::CheckCallable(*(void **)FVar12);
            puVar11 = *(uchar **)((longlong)FVar12 + 0x28);
            pcVar5 = *(code **)FVar12;
            if (puVar11 == (uchar *)0x0) {
              puVar11 = (uchar *)((longlong)FVar12 + 0x10);
            }
            uVar10 = (**(code **)(*(longlong *)puVar11 + 8))();
            (*pcVar5)(uVar10,&local_res20,&local_res18);
            FVar12 = (ForElementType<TFunction<void___cdecl(unsigned_char_const_*,unsigned_char_*)>_>
                      )((longlong)FVar12 + 0x30);
          }
          this->NumRows = this->NumRows + 1;
          piVar13 = local_60;
          pFVar14 = local_58;
          param_1 = local_res10;
        }
      }
      pFVar17 = pFVar17 + 1;
    } while (pFVar17 != pFVar14);
  }
  return;
}

// GetGpuRowDataSrv @ 148ebdae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIShaderResourceView * __thiscall
NDIDataTableLocal::FBuiltDataTable::GetGpuRowDataSrv(FBuiltDataTable *this,FRDGBuilder *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FByteAddressBuffer *pFVar2;
  uint uVar3;
  FRHICommandListBase *this_00;
  FRHIBuffer *this_01;
  code *pcVar4;
  bool bVar5;
  FRHIShaderResourceView *pFVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  void *_Dst;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  
  if ((this->GpuTableRowData).NumBytes != 0) {
    return (this->GpuTableRowData).SRV.Reference;
  }
  pFVar2 = &this->GpuTableRowData;
  this_00 = (FRHICommandListBase *)param_1->_padding_;
  uVar3 = (this->TableRowData).ArrayNum;
  (this->GpuTableRowData).NumBytes = uVar3;
  if ((uVar3 & 3) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x1f9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRHIShaderResourceView *)(*pcVar4)();
      return pFVar6;
    }
  }
  TVar7 = FRHICommandListBase::CreateBuffer(this_00,(FRHIBufferCreateDesc *)&local_res8);
  if ((FRHIBuffer *)pFVar2 != TVar7.Reference) {
    this_01 = (pFVar2->Buffer).Reference;
    (pFVar2->Buffer).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    (this_00,(FRHIBuffer *)&local_res18,(FInitializer *)(pFVar2->Buffer).Reference);
  pTVar1 = &(this->GpuTableRowData).SRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar6 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1->_padding_,(pFVar2->Buffer).Reference,0,
                    (this->TableRowData).ArrayNum,RLM_WriteOnly);
  memcpy(_Dst,(this->TableRowData).AllocatorInstance.Data,(longlong)(this->TableRowData).ArrayNum);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1->_padding_,(pFVar2->Buffer).Reference);
  return (this->GpuTableRowData).SRV.Reference;
}

