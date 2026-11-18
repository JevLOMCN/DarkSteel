// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 14940dd60

UScriptStruct * __cdecl FNiagaraTypeLayoutInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo,(UObject *)pUVar1,
                         L"NiagaraTypeLayoutInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.OuterSingleton;
}

// GenerateLayoutInfo @ 149447800

void __thiscall
FNiagaraTypeLayoutInfo::GenerateLayoutInfo(FNiagaraTypeLayoutInfo *this,UScriptStruct *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  GenerateLayoutInfoInternal
            (this,param_1,(int *)local_res20,(int *)local_res18,(int *)local_res8,true,0);
  uVar4 = (ushort)local_res20[0];
  if ((local_res20[0] != (local_res20[0] & 0xffff)) || ((int)local_res20[0] < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NumFloatComponents = uVar4;
  uVar4 = (ushort)local_res18[0];
  if ((local_res18[0] != (local_res18[0] & 0xffff)) || ((int)local_res18[0] < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = (ushort)local_res8[0];
  this->NumInt32Components = uVar4;
  uVar7 = local_res8[0] & 0xffff;
  if ((local_res8[0] != uVar7) || ((int)local_res8[0] < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &(this->ComponentsOffsets).ArrayNum;
  iVar6 = (uint)this->NumInt32Components + this->NumFloatComponents + uVar7;
  this->NumHalfComponents = uVar5;
  iVar8 = *piVar1;
  uVar7 = iVar6 * 2;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  if (iVar8 < (int)uVar7) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar7 - iVar8,&(this->ComponentsOffsets).AllocatorInstance,piVar1,
                       &(this->ComponentsOffsets).ArrayMax);
    memset((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
           (longlong)(int)(uVar7 - iVar8) << 2);
  }
  else if ((int)uVar7 < iVar8) {
    iVar8 = iVar8 + iVar6 * -2;
    if (iVar8 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_149447a09;
    _Dst = (this->ComponentsOffsets).AllocatorInstance.Data + (ulonglong)uVar7 * 4;
    iVar6 = (*piVar1 - iVar8) + iVar6 * -2;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar8 * 4,(longlong)iVar6 << 2);
    }
    *piVar1 = *piVar1 - iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->ComponentsOffsets).AllocatorInstance,*piVar1,
               &(this->ComponentsOffsets).ArrayMax);
  }
LAB_149447a09:
  GenerateLayoutInfoInternal
            (this,param_1,(int *)local_res20,(int *)local_res18,(int *)local_res8,false,0);
  return;
}

// GenerateLayoutInfoInternal @ 149447a50

void __thiscall
FNiagaraTypeLayoutInfo::GenerateLayoutInfoInternal
          (FNiagaraTypeLayoutInfo *this,UScriptStruct *param_1,int *param_2,int *param_3,
          int *param_4,bool param_5,int param_6)

{
  FFieldClass *pFVar1;
  FName this_00;
  code *pcVar2;
  FName FVar3;
  FField *pFVar4;
  bool bVar5;
  uint uVar6;
  FFieldClass *pFVar7;
  FName FVar8;
  UScriptStruct *pUVar9;
  uint uVar10;
  int iVar11;
  FString local_68;
  FString local_58;
  TFieldIterator<FProperty> local_48;
  
  if (param_1 == (UScriptStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (FField *)param_1->_padding_;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  local_48.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_48);
  pFVar4 = local_48.Field;
  do {
    if (pFVar4 == (FField *)0x0) {
      return;
    }
    iVar11 = param_6 + *(int *)((longlong)&pFVar4[1].Owner.Container + 4);
    local_48.Field = pFVar4;
    pFVar7 = FFloatProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = pFVar4->ClassPrivate;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar7) {
          bVar5 = true;
          goto LAB_149447b64;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
LAB_149447b64:
    if (bVar5) {
      if (!param_5) {
        uVar6 = *param_2;
        uVar10 = 0;
        if ((int)uVar6 < (this->ComponentsOffsets).ArrayNum) {
          uVar10 = ~uVar6 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
             iVar11;
        iVar11 = *param_2;
        uVar10 = (uint)this->NumFloatComponents + iVar11;
        uVar6 = 0;
        if ((int)uVar10 < (this->ComponentsOffsets).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
             iVar11;
      }
      *param_2 = *param_2 + 1;
    }
    else {
      pFVar7 = FUInt16Property::StaticClass();
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = pFVar4->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
          if (pFVar1 == pFVar7) {
            bVar5 = true;
            goto LAB_149447c94;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
LAB_149447c94:
      if (bVar5) {
        if (!param_5) {
          uVar6 = *param_4 + ((uint)this->NumFloatComponents + (uint)this->NumInt32Components) * 2;
          uVar10 = 0;
          if ((int)uVar6 < (this->ComponentsOffsets).ArrayNum) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
               iVar11;
          iVar11 = *param_4;
          uVar6 = (uint)this->NumHalfComponents + iVar11 +
                  ((uint)this->NumInt32Components + (uint)this->NumFloatComponents) * 2;
          uVar10 = 0;
          if ((int)uVar6 < (this->ComponentsOffsets).ArrayNum) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
               iVar11;
        }
        *param_4 = *param_4 + 1;
      }
      else {
        pFVar7 = FIntProperty::StaticClass();
        if ((pFVar7 == (FFieldClass *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = pFVar4->ClassPrivate;
        if (pFVar7->Id == CASTCLASS_None) {
          for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
            if (pFVar1 == pFVar7) {
              bVar5 = true;
              goto LAB_149447de0;
            }
          }
          bVar5 = false;
        }
        else {
          bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
        }
LAB_149447de0:
        if (!bVar5) {
          FVar8 = (FName)FBoolProperty::StaticClass();
          if ((FVar8 == (FName)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x2dd,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = (FName)pFVar4->ClassPrivate;
          FVar3 = this_00;
          if (*(ulonglong *)((longlong)FVar8 + 0x10) == 0) {
            for (; FVar3 != (FName)0x0; FVar3 = *(FName *)((longlong)FVar3 + 0x20)) {
              if (FVar3 == FVar8) {
                bVar5 = true;
                goto LAB_149447e50;
              }
            }
            bVar5 = false;
          }
          else {
            bVar5 = ((ulonglong)*(FName *)((longlong)this_00 + 0x18) &
                    *(ulonglong *)((longlong)FVar8 + 0x10)) != 0;
          }
LAB_149447e50:
          if (!bVar5) {
            if ((((((FName *)((longlong)this_00 + 0x18))->ComparisonIndex).Value >> 0x14 & 1) == 0)
               || (pFVar4 == (FField *)0x0)) {
              ::FName::ToString((FName *)this_00,&local_58);
              bVar5 = IsThisNotNull(pFVar4,"FField::GetName");
              if (bVar5) {
                ::FName::ToString(&pFVar4->NamePrivate,&local_68);
              }
              else {
                ::FString::FString(&local_68,L"None");
              }
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                                 ,0x38b,L"Property(%s) Class(%s) is not a supported type");
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              pUVar9 = FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct
                                 ((UScriptStruct *)pFVar4[2].Owner.Container.Field,Simulation);
              GenerateLayoutInfoInternal(this,pUVar9,param_2,param_3,param_4,param_5,iVar11);
            }
            goto LAB_149448024;
          }
        }
        if (!param_5) {
          uVar6 = *param_3 + (uint)this->NumFloatComponents * 2;
          uVar10 = 0;
          if ((int)uVar6 < (this->ComponentsOffsets).ArrayNum) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
               iVar11;
          iVar11 = *param_3;
          uVar6 = (uint)this->NumInt32Components + iVar11 + (uint)this->NumFloatComponents * 2;
          uVar10 = 0;
          if ((int)uVar6 < (this->ComponentsOffsets).ArrayNum) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)((this->ComponentsOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
               iVar11;
        }
        *param_3 = *param_3 + 1;
      }
    }
LAB_149448024:
    local_48.Field = (local_48.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar4 = local_48.Field;
  } while( true );
}

