// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 20

// FSlateFontMeasure @ 142476990

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateFontMeasure * __thiscall
FSlateFontMeasure::FSlateFontMeasure(FSlateFontMeasure *this,TSharedRef<FSlateFontCache,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined8 *)&this->FontToMeasureCache = 0;
  *(undefined8 *)&(this->FontToMeasureCache).field_0x8 = 0;
  *(undefined8 *)&(this->FontToMeasureCache).field_0x20 = 0;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x28 = 0;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x34 = 0;
  *(undefined8 *)&(this->FontToMeasureCache).field_0x40 = 0;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x48 = 0;
  (this->FontCache).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FontCache).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// Create @ 142483190

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontMeasure,1> * __cdecl
FSlateFontMeasure::Create
          (TSharedRef<FSlateFontMeasure,1> *__return_storage_ptr__,
          TSharedRef<FSlateFontCache,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TRawPtrProxy<FSlateFontMeasure> local_res8;
  
  local_res8.Object = ::operator_new(0x60);
  if (local_res8.Object != (FSlateFontMeasure *)0x0) {
    *(undefined8 *)&(local_res8.Object)->FontToMeasureCache = 0;
    *(undefined8 *)&((local_res8.Object)->FontToMeasureCache).field_0x8 = 0;
    *(undefined8 *)&((local_res8.Object)->FontToMeasureCache).field_0x20 = 0;
    *(undefined4 *)&((local_res8.Object)->FontToMeasureCache).field_0x28 = 0;
    *(undefined4 *)&((local_res8.Object)->FontToMeasureCache).field_0x2c = 0x80;
    *(undefined4 *)&((local_res8.Object)->FontToMeasureCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_res8.Object)->FontToMeasureCache).field_0x34 = 0;
    *(undefined8 *)&((local_res8.Object)->FontToMeasureCache).field_0x40 = 0;
    *(undefined4 *)&((local_res8.Object)->FontToMeasureCache).field_0x48 = 0;
    ((local_res8.Object)->FontCache).Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    ((local_res8.Object)->FontCache).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  TSharedRef<FSlateFontMeasure,1>::TSharedRef<FSlateFontMeasure,1><FSlateFontMeasure>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// FindCharacterIndexAtOffset @ 142487100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindCharacterIndexAtOffset
          (FSlateFontMeasure *this,FText *param_1,FSlateFontInfo *param_2,int param_3,float param_4)

{
  int iVar1;
  FString *pFVar2;
  undefined4 in_stack_ffffffffffffff8c;
  uint in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffffb4;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  pFVar2 = FText::ToString(param_1);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  uStack_10 = CONCAT44(local_28._12_4_,local_28.Size);
  local_18 = (FScriptContainerElement *)local_28.DataPtr;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff8c,local_28.Size),SUB81(param_2,0),
             (float)(in_stack_ffffffffffffff98 & 0xffffff00),(int)param_4,param_3,
             (int *)CONCAT44(in_stack_ffffffffffffffb4,1));
  return 0;
}

// FindCharacterIndexAtOffset @ 1424871c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindCharacterIndexAtOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,FSlateFontInfo *param_2,int param_3
          ,float param_4)

{
  undefined4 in_stack_ffffffffffffff9c;
  uint in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffc4;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff9c,param_1->Size),SUB81(param_2,0),
             (float)(in_stack_ffffffffffffffa8 & 0xffffff00),(int)param_4,param_3,
             (int *)CONCAT44(in_stack_ffffffffffffffc4,1));
  return 0;
}

// FindCharacterIndexAtOffset @ 142487240

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindCharacterIndexAtOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,int param_2,int param_3,
          FSlateFontInfo *param_4,int param_5,bool param_6,float param_7)

{
  undefined4 in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffc4;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,param_2,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff9c,param_3),SUB81(param_4,0),
             (float)CONCAT31((int3)((uint)in_stack_ffffffffffffffa8 >> 8),param_6),(int)param_7,
             param_5,(int *)CONCAT44(in_stack_ffffffffffffffc4,1));
  return 0;
}

// FindFirstWholeCharacterIndexAfterOffset @ 1424875c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindFirstWholeCharacterIndexAfterOffset
          (FSlateFontMeasure *this,FText *param_1,FSlateFontInfo *param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FString *pFVar5;
  TVector2<float> TVar6;
  int iVar7;
  undefined4 in_stack_ffffffffffffff5c;
  bool bVar8;
  uint in_stack_ffffffffffffff68;
  float fVar9;
  undefined4 in_stack_ffffffffffffff84;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48 [8];
  
  pFVar5 = FText::ToString(param_1);
  pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
  iVar2 = (pFVar5->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  local_58.Size = iVar7;
  uVar4 = local_58._8_8_;
  fVar9 = (float)(in_stack_ffffffffffffff68 & 0xffffff00);
  bVar8 = SUB81(param_2,0);
  local_58.DataPtr = (wchar_t *)pFVar3;
  MeasureStringInternal
            (this,&local_68,(int)&local_58,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,iVar7),bVar8,fVar9,(int)param_4,
             param_3,(int *)CONCAT44(in_stack_ffffffffffffff84,1));
  local_48[1] = (FScriptContainerElement *)uVar4;
  fVar9 = (float)((uint)fVar9 & 0xffffff00);
  local_48[0] = pFVar3;
  TVar6 = MeasureStringInternal
                    (this,&local_58,(int)local_48,0,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,iVar7),bVar8,fVar9,
                     (int)param_4,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffff84,2));
  fVar1 = *(float *)TVar6.field0_0x0;
  local_48[1] = (FScriptContainerElement *)uVar4;
  local_48[0] = pFVar3;
  TVar6 = MeasureStringInternal
                    (this,&local_58,(int)local_48,0,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,iVar7),bVar8,
                     (float)((uint)fVar9 & 0xffffff00),(int)param_4,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffff84,2));
  return (uint)(fVar1 - (float)param_3 < *(float *)TVar6.field0_0x0);
}

// FindFirstWholeCharacterIndexAfterOffset @ 142487760

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindFirstWholeCharacterIndexAfterOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,FSlateFontInfo *param_2,int param_3
          ,float param_4)

{
  float fVar1;
  int iVar2;
  TVector2<float> TVar3;
  undefined4 in_stack_ffffffffffffff6c;
  bool bVar4;
  uint in_stack_ffffffffffffff78;
  float fVar5;
  undefined4 in_stack_ffffffffffffff94;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar2 = param_1->Size;
  fVar5 = (float)(in_stack_ffffffffffffff78 & 0xffffff00);
  bVar4 = SUB81(param_2,0);
  MeasureStringInternal
            (this,(TStringView<wchar_t> *)&stack0x00000010,(int)&local_58,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff6c,iVar2),bVar4,fVar5,(int)param_4,
             param_3,(int *)CONCAT44(in_stack_ffffffffffffff94,1));
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  fVar5 = (float)((uint)fVar5 & 0xffffff00);
  TVar3 = MeasureStringInternal
                    (this,&local_58,(int)&local_48,0,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff6c,iVar2),bVar4,fVar5,
                     (int)param_4,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffff94,2));
  fVar1 = *(float *)TVar3.field0_0x0;
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  TVar3 = MeasureStringInternal
                    (this,&local_58,(int)&local_48,0,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff6c,iVar2),bVar4,
                     (float)((uint)fVar5 & 0xffffff00),(int)param_4,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffff94,2));
  return (uint)(fVar1 - (float)param_3 < *(float *)TVar3.field0_0x0);
}

// FindFirstWholeCharacterIndexAfterOffset @ 1424878d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindFirstWholeCharacterIndexAfterOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,int param_2,int param_3,
          FSlateFontInfo *param_4,int param_5,bool param_6,float param_7)

{
  int iVar1;
  int iVar2;
  TVector2<float> TVar3;
  int local_res10;
  undefined4 in_stack_ffffffffffffff5c;
  bool bVar4;
  undefined4 in_stack_ffffffffffffff68;
  float fVar5;
  float fVar6;
  undefined4 in_stack_ffffffffffffff84;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  local_res10 = 0;
  fVar5 = (float)CONCAT31((int3)((uint)in_stack_ffffffffffffff68 >> 8),param_6);
  bVar4 = SUB81(param_4,0);
  MeasureStringInternal
            (this,&local_68,(int)&local_58,param_2,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,param_3),bVar4,fVar5,(int)param_7,
             param_5,(int *)CONCAT44(in_stack_ffffffffffffff84,1));
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  fVar6 = (float)CONCAT31((int3)((uint)fVar5 >> 8),param_6);
  TVar3 = MeasureStringInternal
                    (this,&local_68,(int)&local_58,param_2,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,param_3),bVar4,fVar6,
                     (int)param_7,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffff84,2));
  iVar1 = local_res10;
  fVar5 = *(float *)TVar3.field0_0x0;
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  TVar3 = MeasureStringInternal
                    (this,(TStringView<wchar_t> *)&local_res10,(int)&local_58,local_res10,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff5c,param_3),bVar4,
                     (float)CONCAT31((int3)((uint)fVar6 >> 8),param_6),(int)param_7,
                     ~LastWholeCharacterBeforeOffset,(int *)CONCAT44(in_stack_ffffffffffffff84,2));
  iVar2 = iVar1 + 1;
  if (*(float *)TVar3.field0_0x0 <= fVar5 - (float)param_5) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// FindLastWholeCharacterIndexBeforeOffset @ 142487a60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindLastWholeCharacterIndexBeforeOffset
          (FSlateFontMeasure *this,FText *param_1,FSlateFontInfo *param_2,int param_3,float param_4)

{
  int iVar1;
  FString *pFVar2;
  undefined4 in_stack_ffffffffffffff8c;
  uint in_stack_ffffffffffffff98;
  uint in_stack_ffffffffffffffb4;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  pFVar2 = FText::ToString(param_1);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  uStack_10 = CONCAT44(local_28._12_4_,local_28.Size);
  local_18 = (FScriptContainerElement *)local_28.DataPtr;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff8c,local_28.Size),SUB81(param_2,0),
             (float)(in_stack_ffffffffffffff98 & 0xffffff00),(int)param_4,param_3,
             (int *)((ulonglong)in_stack_ffffffffffffffb4 << 0x20));
  return -1;
}

// FindLastWholeCharacterIndexBeforeOffset @ 142487b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindLastWholeCharacterIndexBeforeOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,FSlateFontInfo *param_2,int param_3
          ,float param_4)

{
  undefined4 in_stack_ffffffffffffff9c;
  uint in_stack_ffffffffffffffa8;
  uint in_stack_ffffffffffffffc4;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,0,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff9c,param_1->Size),SUB81(param_2,0),
             (float)(in_stack_ffffffffffffffa8 & 0xffffff00),(int)param_4,param_3,
             (int *)((ulonglong)in_stack_ffffffffffffffc4 << 0x20));
  return -1;
}

// FindLastWholeCharacterIndexBeforeOffset @ 142487ba0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateFontMeasure::FindLastWholeCharacterIndexBeforeOffset
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,int param_2,int param_3,
          FSlateFontInfo *param_4,int param_5,bool param_6,float param_7)

{
  undefined4 in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa8;
  uint in_stack_ffffffffffffffc4;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  MeasureStringInternal
            (this,&local_28,(int)&local_18,param_2,
             (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff9c,param_3),SUB81(param_4,0),
             (float)CONCAT31((int3)((uint)in_stack_ffffffffffffffa8 >> 8),param_6),(int)param_7,
             param_5,(int *)((ulonglong)in_stack_ffffffffffffffc4 << 0x20));
  return -1;
}

// FindOrAddMeasureCache @ 142487d60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FLRUStringCache * __thiscall
FSlateFontMeasure::FindOrAddMeasureCache
          (FSlateFontMeasure *this,FSlateFontInfo *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FSlateFontMeasureCache *pFVar4;
  FLRUStringCache *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  TRawPtrProxy<FSlateFontMeasureCache> local_res20;
  TSharedPtr<FSlateFontMeasureCache,1> local_e8;
  TObjectPtr<UObject_const_>_u_0 *local_d8;
  TSharedPtr<FSlateFontMeasureCache,1> *local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8 [2];
  int iStack_b8;
  undefined2 uStack_b4;
  longlong local_98;
  TReferenceControllerBase<1> *local_90;
  longlong local_88;
  float local_80;
  int iStack_68;
  undefined2 uStack_64;
  float local_48;
  uint local_44;
  
  FSlateFontKey::FSlateFontKey
            ((FSlateFontKey *)&local_c8[0].ObjectPtr,param_1,&FFontOutlineSettings::NoOutline,
             param_2);
  FSlateFontInfo::GetCompositeFont(param_1);
  if (*(int *)&(this->FontToMeasureCache).field_0x8 !=
      *(int *)&(this->FontToMeasureCache).field_0x34) {
    puVar6 = *(undefined1 **)&(this->FontToMeasureCache).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->FontToMeasureCache).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->FontToMeasureCache).field_0x48 - 1U & local_44) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar7 * 0xa0 + *(longlong *)&this->FontToMeasureCache);
        if ((((((UObject *)*plVar3 == local_c8[0].DebugPtr) && ((int)plVar3[2] == iStack_b8)) &&
             (*(char *)((longlong)plVar3 + 0x14) == (char)uStack_b4)) &&
            ((*(char *)((longlong)plVar3 + 0x15) == (char)((ushort)uStack_b4 >> 8) &&
             (plVar3[6] == local_98)))) && (plVar3[8] == local_88)) {
          fVar9 = *(float *)(plVar3 + 9);
          if (__real_477fff00 <= *(float *)(plVar3 + 9)) {
            fVar9 = __real_477fff00;
          }
          fVar8 = local_80;
          if (__real_477fff00 <= local_80) {
            fVar8 = __real_477fff00;
          }
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          if (((fVar9 == fVar8) && ((int)plVar3[0xc] == iStack_68)) &&
             ((*(char *)((longlong)plVar3 + 100) == (char)uStack_64 &&
              ((*(char *)((longlong)plVar3 + 0x65) == (char)((ushort)uStack_64 >> 8) &&
               (local_48 == *(float *)(plVar3 + 0x10))))))) {
            if ((iVar7 != -1) && (plVar3 != (longlong *)0x0)) {
              local_e8.Object = (FSlateFontMeasureCache *)plVar3[0x11];
              local_e8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)plVar3[0x12];
              if (local_e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              goto LAB_142487eb5;
            }
            break;
          }
        }
        iVar7 = (int)plVar3[0x13];
      } while (iVar7 != -1);
    }
  }
  local_e8.Object = (FSlateFontMeasureCache *)0x0;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142487eb5:
  if (&(local_e8.Object)->MeasureCache == (FLRUStringCache *)0x0) {
    pFVar4 = ::operator_new(0x68);
    local_res20.Object = (FSlateFontMeasureCache *)0x0;
    if (pFVar4 != (FSlateFontMeasureCache *)0x0) {
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x10 = 0;
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x18 = 0;
      (pFVar4->MeasureCache).LookupSet.Hash.InlineData[0] = '\0';
      (pFVar4->MeasureCache).LookupSet.Hash.InlineData[1] = '\0';
      (pFVar4->MeasureCache).LookupSet.Hash.InlineData[2] = '\0';
      (pFVar4->MeasureCache).LookupSet.Hash.InlineData[3] = '\0';
      (pFVar4->MeasureCache).LookupSet.Hash._padding_ = 0;
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.HashSize = 0;
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.Elements = 0;
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar4->MeasureCache).LookupSet.Elements.field_0x34 = 0;
      (pFVar4->MeasureCache).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (pFVar4->MeasureCache).MostRecent = (FCacheEntry *)0x0;
      (pFVar4->MeasureCache).LeastRecent = (FCacheEntry *)0x0;
      (pFVar4->MeasureCache).MaxNumElements = 500;
      local_res20.Object = pFVar4;
    }
    TSharedPtr<FSlateFontMeasureCache,1>::operator=<FSlateFontMeasureCache>(&local_e8,&local_res20);
    local_d8 = local_c8;
    local_d0 = &local_e8;
    TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSlateFontKey_const_&,TSharedPtr<FSlateFontMeasureCache,1>_const_&>_>
              ((TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FSlateFontKey_const_&,TSharedPtr<FSlateFontMeasureCache,1>_const_&>
                        *)&stack0x00000008,(bool *)&local_d8);
    if ((&(local_e8.Object)->MeasureCache == (FLRUStringCache *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) goto code_r0x00014248801a;
  }
  else if ((&(local_e8.Object)->MeasureCache == (FLRUStringCache *)0x0) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar2)) {
code_r0x00014248801a:
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLRUStringCache *)(*pcVar1)();
    return pFVar5;
  }
  pFVar4 = local_e8.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  return &pFVar4->MeasureCache;
}

// FlushCache @ 142489b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontMeasure::FlushCache(FSlateFontMeasure *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->FontToMeasureCache).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->FontToMeasureCache).field_0x8);
  puVar1 = &(this->FontToMeasureCache).field_0xc;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FontToMeasureCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->FontToMeasureCache).field_0x2c;
  *(undefined4 *)&(this->FontToMeasureCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FontToMeasureCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FontToMeasureCache).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->FontToMeasureCache).field_0x48 = 1;
    TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,1>_>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// GetBaseline @ 14248b7d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall
FSlateFontMeasure::GetBaseline(FSlateFontMeasure *this,FSlateFontInfo *param_1,float param_2)

{
  short sVar1;
  FCharacterList *pFVar2;
  
  pFVar2 = FSlateFontCache::GetCharacterList
                     ((this->FontCache).Object,param_1,param_2,&FFontOutlineSettings::NoOutline);
  sVar1 = pFVar2->Baseline;
  if (sVar1 == 0) {
    sVar1 = FSlateFontRenderer::GetBaseline
                      ((pFVar2->FontCache->FontRenderer).Ptr,&(pFVar2->FontKey).FontInfo,
                       (pFVar2->FontKey).Scale);
    pFVar2->Baseline = sVar1;
  }
  return sVar1;
}

// GetKerning @ 1424916a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateFontMeasure::GetKerning
          (FSlateFontMeasure *this,FSlateFontInfo *param_1,float param_2,wchar_t param_3,
          wchar_t param_4)

{
  EFontFallback EVar1;
  schar sVar2;
  FCharacterList *this_00;
  FCharacterEntry *pFVar3;
  FCharacterEntry *pFVar4;
  
  this_00 = FSlateFontCache::GetCharacterList
                      ((this->FontCache).Object,param_1,param_2,&FFontOutlineSettings::NoOutline);
  EVar1 = param_1->FontFallback;
  pFVar3 = FCharacterList::GetCharacter(this_00,param_3,EVar1);
  pFVar4 = FCharacterList::GetCharacter(this_00,param_4,EVar1);
  sVar2 = FCharacterList::GetKerning(this_00,pFVar3,pFVar4);
  return sVar2;
}

// GetMaxCharacterHeight @ 1424923f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ushort __thiscall
FSlateFontMeasure::GetMaxCharacterHeight
          (FSlateFontMeasure *this,FSlateFontInfo *param_1,float param_2)

{
  ushort uVar1;
  FCharacterList *pFVar2;
  
  pFVar2 = FSlateFontCache::GetCharacterList
                     ((this->FontCache).Object,param_1,param_2,&FFontOutlineSettings::NoOutline);
  uVar1 = pFVar2->MaxHeight;
  if (uVar1 == 0) {
    uVar1 = FSlateFontRenderer::GetMaxHeight
                      ((pFVar2->FontCache->FontRenderer).Ptr,&(pFVar2->FontKey).FontInfo,
                       (pFVar2->FontKey).Scale);
    pFVar2->MaxHeight = uVar1;
  }
  return uVar1;
}

// Measure @ 14249cae0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateFontMeasure::Measure
          (FSlateFontMeasure *this,FText *param_1,FSlateFontInfo *param_2,float param_3)

{
  int iVar1;
  FString *pFVar2;
  TVector2<float> TVar3;
  bool in_R9B;
  int in_stack_00000028;
  undefined4 in_stack_ffffffffffffff9c;
  uint in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffc4;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  pFVar2 = FText::ToString((FText *)param_2);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  uStack_10 = CONCAT44(local_28._12_4_,local_28.Size);
  local_18 = (FScriptContainerElement *)local_28.DataPtr;
  TVar3 = MeasureStringInternal
                    (this,&local_28,(int)&local_18,0,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffff9c,local_28.Size),in_R9B,
                     (float)(in_stack_ffffffffffffffa8 & 0xffffff00),in_stack_00000028,
                     ~LastWholeCharacterBeforeOffset,(int *)CONCAT44(in_stack_ffffffffffffffc4,2));
  (param_1->TextData).Reference = *(ITextData **)TVar3.field0_0x0;
  return (FDeprecateSlateVector2D)param_1;
}

// Measure @ 14249cba0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateFontMeasure::Measure
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,FSlateFontInfo *param_2,
          float param_3)

{
  TVector2<float> TVar1;
  bool in_R9B;
  TStringView<wchar_t> local_res18;
  int in_stack_00000028;
  undefined4 in_stack_ffffffffffffffac;
  uint in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffd4;
  TObjectPtr<UObject_const_>_u_0 local_18;
  TObjectPtr<UObject>_u_0 TStack_10;
  
  local_18 = (param_2->FontObject).field0_0x0;
  TStack_10 = (param_2->FontMaterial).field0_0x0;
  TVar1 = MeasureStringInternal
                    (this,&local_res18,(int)&local_18,0,
                     (FSlateFontInfo *)
                     CONCAT44(in_stack_ffffffffffffffac,
                              *(undefined4 *)&(param_2->FontMaterial).field0_0x0),in_R9B,
                     (float)(in_stack_ffffffffffffffb8 & 0xffffff00),in_stack_00000028,
                     ~LastWholeCharacterBeforeOffset,(int *)CONCAT44(in_stack_ffffffffffffffd4,2));
  param_1->DataPtr = *(wchar_t **)TVar1.field0_0x0;
  return (FDeprecateSlateVector2D)param_1;
}

// Measure @ 14249cc20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateFontMeasure::Measure
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,int param_2,int param_3,
          FSlateFontInfo *param_4,bool param_5,float param_6)

{
  TVector2<float> TVar1;
  undefined4 in_register_00000084;
  TStringView<wchar_t> local_res18;
  int in_stack_00000040;
  undefined4 in_stack_ffffffffffffffac;
  undefined4 in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffd4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)CONCAT44(in_register_00000084,param_2);
  uStack_10 = ((undefined8 *)CONCAT44(in_register_00000084,param_2))[1];
  TVar1 = MeasureStringInternal
                    (this,&local_res18,(int)&local_18,param_3,
                     (FSlateFontInfo *)CONCAT44(in_stack_ffffffffffffffac,param_4._0_4_),param_5,
                     (float)CONCAT31((int3)((uint)in_stack_ffffffffffffffb8 >> 8),param_6._0_1_),
                     in_stack_00000040,~LastWholeCharacterBeforeOffset,
                     (int *)CONCAT44(in_stack_ffffffffffffffd4,2));
  param_1->DataPtr = *(wchar_t **)TVar1.field0_0x0;
  return (FDeprecateSlateVector2D)param_1;
}

// MeasureStringInternal @ 14249cca0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<float> __thiscall
FSlateFontMeasure::MeasureStringInternal
          (FSlateFontMeasure *this,TStringView<wchar_t> *param_1,int param_2,int param_3,
          FSlateFontInfo *param_4,bool param_5,float param_6,int param_7,
          ELastCharacterIndexFormat param_8,int *param_9)

{
  int *piVar1;
  short sVar2;
  FCacheEntry *pFVar3;
  FCacheEntry *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_struct_UE::Math::TVector2<float>___cdecl_FSlateFontMeasure::MeasureStringInternal(TStringView<wchar_t>,int,int,FSlateFontInfo_const_&,bool,float,int,FSlateFontMeasure::ELastCharacterIndexFormat,int_&)const_::_2_::FStat_STAT_Slate_MeasureStringInternal>
  FVar14;
  FCharacterList *pFVar15;
  FLRUStringCache *this_00;
  FCacheEntry **ppFVar16;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar17;
  wchar_t *pwVar18;
  TVector2<float> TVar19;
  FCharacterEntry *pFVar20;
  FFreeTypeKerningCache *this_02;
  int iVar21;
  FStatMessage *pFVar22;
  FNameEntryId FVar23;
  FName FVar25;
  int iVar26;
  wchar_t wVar27;
  int iVar28;
  undefined4 in_register_00000084;
  TStringView<wchar_t> *this_03;
  int iVar29;
  int iVar30;
  undefined7 in_stack_00000031;
  int *in_stack_00000058;
  uint local_138;
  undefined8 local_130;
  wchar_t local_128;
  short local_126;
  uint local_124;
  FColor_u_0 local_120;
  uint local_11c;
  longlong local_118;
  FLRUStringCache *local_110;
  FName local_108;
  FCharacterList *local_100;
  FName local_f8;
  LARGE_INTEGER local_e8;
  FFontData *local_e0;
  FT_Vector_ local_d8;
  TReferenceControllerBase<1> *local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  uint uVar24;
  
  this_03 = (TStringView<wchar_t> *)CONCAT44(in_register_00000084,param_2);
  pFVar22 = &local_98;
  bVar8 = false;
  bVar6 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Slate_MeasureStringInternal ==
        (FThreadSafeStaticStat<_private:_struct_UE::Math::TVector2<float>___cdecl_FSlateFontMeasure::MeasureStringInternal(TStringView<wchar_t>,int,int,FSlateFontInfo_const_&,bool,float,int,FSlateFontMeasure::ELastCharacterIndexFormat,int_&)const_::_2_::FStat_STAT_Slate_MeasureStringInternal>
         )0x0) {
      pFVar13 = ::FName::FName(&local_88,"STAT_Slate_MeasureStringInternal");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_MeasureStringInternal,*pFVar13,
                 L"STAT_Slate_MeasureStringInternal","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_Slate_MeasureStringInternal;
  if (StatPtr_STAT_Slate_MeasureStringInternal ==
      (FThreadSafeStaticStat<_private:_struct_UE::Math::TVector2<float>___cdecl_FSlateFontMeasure::MeasureStringInternal(TStringView<wchar_t>,int,int,FSlateFontInfo_const_&,bool,float,int,FSlateFontMeasure::ELastCharacterIndexFormat,int_&)const_::_2_::FStat_STAT_Slate_MeasureStringInternal>
       )0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_Slate_MeasureStringInternal");
    FVar14 = (FThreadSafeStaticStat<_private:_struct_UE::Math::TVector2<float>___cdecl_FSlateFontMeasure::MeasureStringInternal(TStringView<wchar_t>,int,int,FSlateFontInfo_const_&,bool,float,int,FSlateFontMeasure::ELastCharacterIndexFormat,int_&)const_::_2_::FStat_STAT_Slate_MeasureStringInternal>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_MeasureStringInternal,
                          *pFVar13,L"STAT_Slate_MeasureStringInternal","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar14;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_14249ce18:
    bVar7 = false;
    FVar25 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_108.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontMeasure.cpp"
                   ,0x8e);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14249ce18;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar8 = false;
    bVar7 = true;
  }
  pFVar15 = FSlateFontCache::GetCharacterList
                      ((this->FontCache).Object,
                       (FSlateFontInfo *)CONCAT71(in_stack_00000031,param_5),(float)param_7,
                       &FFontOutlineSettings::NoOutline);
  uVar11 = pFVar15->MaxHeight;
  local_100 = pFVar15;
  if (uVar11 == 0) {
    uVar11 = FSlateFontRenderer::GetMaxHeight
                       ((pFVar15->FontCache->FontRenderer).Ptr,&(pFVar15->FontKey).FontInfo,
                        (pFVar15->FontKey).Scale);
    pFVar15->MaxHeight = uVar11;
  }
  FVar23 = FVar25.ComparisonIndex.Value;
  uVar24 = FVar25.Number;
  if ((((this_03->Size == 0) || ((int)param_4 - param_3 < 1)) || ((int)param_4 < 1)) ||
     ((param_3 < 0 || ((int)param_4 <= param_3)))) {
    *(undefined4 *)&param_1->DataPtr = 0;
    *(float *)((longlong)&param_1->DataPtr + 4) = (float)uVar11;
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar7) {
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    if (FVar25 == (FName)0x0) {
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    local_98.NameAndInfo.Number = uVar24 & 0xffff6fff | 0x6000;
    local_98.NameAndInfo.Index.Value = FVar23.Value;
    QueryPerformanceCounter(&local_c0);
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_98.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
    local_98.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
    local_98.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
    local_98.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
    goto LAB_14249d511;
  }
  local_110 = (FLRUStringCache *)0x0;
  if (((param_3 == 0) && ((int)param_4 == this_03->Size)) &&
     ((param_6._0_1_ == '\0' &&
      (((5 < (int)param_4 - param_3 && (param_8 == ~LastWholeCharacterBeforeOffset)) &&
       (this_00 = FindOrAddMeasureCache
                            (this,(FSlateFontInfo *)CONCAT71(in_stack_00000031,param_5),
                             (float)param_7), local_110 = this_00, this_00 != (FLRUStringCache *)0x0
       )))))) {
    local_78.DataPtr = this_03->DataPtr;
    local_78.Size = this_03->Size;
    local_78._12_4_ = *(undefined4 *)&this_03->field_0xc;
    local_58 = local_78.DataPtr;
    uStack_50 = local_78._8_8_;
    uVar12 = CityHash32((char *)local_78.DataPtr,(int)*(undefined8 *)&this_03->Size * 2);
    ppFVar16 = TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
               ::FindByHash<TStringView<wchar_t>_>(&this_00->LookupSet,uVar12,&local_78);
    if (ppFVar16 != (FCacheEntry **)0x0) {
      pFVar3 = *ppFVar16;
      if ((pFVar3 == this_00->LeastRecent) &&
         (pFVar4 = this_00->LeastRecent->Prev, pFVar4 != (FCacheEntry *)0x0)) {
        this_00->LeastRecent = pFVar4;
      }
      if (pFVar3 != this_00->MostRecent) {
        if (pFVar3->Prev != (FCacheEntry *)0x0) {
          pFVar3->Prev->Next = pFVar3->Next;
        }
        if (pFVar3->Next != (FCacheEntry *)0x0) {
          pFVar3->Next->Prev = pFVar3->Prev;
        }
        pFVar3->Next = (FCacheEntry *)0x0;
        pFVar3->Prev = (FCacheEntry *)0x0;
        pFVar4 = this_00->MostRecent;
        pFVar3->Next = pFVar4;
        if (pFVar4 != (FCacheEntry *)0x0) {
          pFVar4->Prev = pFVar3;
        }
        this_00->MostRecent = pFVar3;
      }
      if (&(*ppFVar16)->Value != (TVector2<float> *)0x0) {
        param_1->DataPtr = (wchar_t *)((*ppFVar16)->Value).field0_0x0;
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar7) {
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        if (FVar25 == (FName)0x0) {
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        local_b8.NameAndInfo.Number = uVar24 & 0xffff6fff | 0x6000;
        local_b8.NameAndInfo.Index.Value = FVar23.Value;
        QueryPerformanceCounter(&local_e8);
        local_b8.StatData.Pad[4] = '\0';
        local_b8.StatData.Pad[5] = '\0';
        local_b8.StatData.Pad[6] = '\0';
        local_b8.StatData.Pad[7] = '\0';
        local_b8.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
        local_b8.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
        local_b8.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
        local_b8.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
        pFVar22 = &local_b8;
        goto LAB_14249d511;
      }
      goto LAB_14249d099;
    }
    local_124 = (uint)uVar11;
    local_130 = (TVector2<float>_u_0)0x0;
    wVar27 = L'\0';
  }
  else {
LAB_14249d099:
    wVar27 = L'\0';
    local_124 = (uint)uVar11;
    local_130 = (TVector2<float>_u_0)0x0;
    if ((param_3 != 0) && (param_6._0_1_ != '\0')) {
      pwVar18 = TStringView<wchar_t>::operator[](this_03,param_3 + -1);
      wVar27 = *pwVar18;
    }
  }
  iVar28 = 0;
  iVar29 = 0;
  local_138 = (uint)uVar11;
  local_118 = (longlong)param_3 * 2;
  iVar26 = param_3;
  do {
    if (((iVar26 < 0) || (this_03->Size <= iVar26)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar19.field0_0x0 = (TVector2<float>_u_0)(*pcVar5)();
      return (TVector2<float>)TVar19.field0_0x0;
    }
    local_128 = *(wchar_t *)(local_118 + (longlong)this_03->DataPtr);
    if (local_128 == L'\n') {
      local_138 = local_138 + local_124;
      iVar30 = 0;
      if (iVar29 < iVar28) {
        iVar29 = iVar28;
      }
    }
    else {
      pFVar20 = FCharacterList::GetCharacter
                          (local_100,local_128,
                           *(EFontFallback *)(CONCAT71(in_stack_00000031,param_5) + 0x54));
      local_11c = pFVar20->GlyphIndex;
      local_d0 = (pFVar20->KerningCache).SharedReferenceCount.ReferenceController;
      local_e0 = pFVar20->FontData;
      if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_126 = pFVar20->XAdvance;
      sVar2 = pFVar20->HorizontalOffset;
      bVar9 = pFVar20->Valid;
      iVar21 = 0;
      if (wVar27 != L'\0') {
        pFVar20 = FCharacterList::GetCharacter
                            (local_100,wVar27,
                             *(EFontFallback *)(CONCAT71(in_stack_00000031,param_5) + 0x54));
        if ((((pFVar20->Valid == false) || (bVar9 == false)) ||
            ((pFVar20->FontData == (FFontData *)0x0 ||
             ((pFVar20->HasKerning == false ||
              (bVar9 = FFontData::operator==(pFVar20->FontData,local_e0), !bVar9)))))) ||
           ((pFVar20->KerningCache).Object == (FFreeTypeKerningCache *)0x0)) {
LAB_14249d23e:
          cVar10 = '\0';
        }
        else {
          this_02 = TSharedPtr<FFreeTypeKerningCache,1>::operator->(&pFVar20->KerningCache);
          bVar9 = FFreeTypeKerningCache::FindOrCache
                            (this_02,pFVar20->GlyphIndex,local_11c,&local_d8);
          if (!bVar9) goto LAB_14249d23e;
          cVar10 = (char)(local_d8.x + 0x20 >> 6);
        }
        iVar21 = (int)cVar10;
      }
      wVar27 = local_128;
      iVar30 = iVar28 + local_126 + iVar21;
      if (param_8 != ~LastWholeCharacterBeforeOffset) {
        if ((int)param_9 == 1) {
          if ((int)param_8 < iVar30 - ((int)sVar2 + (int)local_126 + iVar21) / 2) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0);
            if (iVar29 < iVar30) {
              iVar29 = iVar30;
            }
            *in_stack_00000058 = iVar26;
            local_130._4_4_ = (float)(int)local_138;
            local_130._0_4_ = (float)iVar29;
            goto LAB_14249d367;
          }
        }
        else if (((int)param_9 == 0) && ((int)param_8 < iVar30)) {
          iVar28 = iVar26 + -1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0);
          if (iVar29 < iVar30) {
            iVar29 = iVar30;
          }
          iVar26 = -1;
          if (param_3 <= iVar28) {
            iVar26 = iVar28;
          }
          local_130._4_4_ = (float)(int)local_138;
          local_130._0_4_ = (float)iVar29;
          goto LAB_14249d32a;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
    iVar28 = iVar30;
    local_118 = local_118 + 2;
    iVar26 = iVar26 + 1;
  } while (iVar26 < (int)param_4);
  if (iVar29 < iVar28) {
    iVar29 = iVar28;
  }
  local_130._4_4_ = (float)(int)local_138;
  local_130._0_4_ = (float)iVar29;
  if ((int)param_9 == 0) {
LAB_14249d32a:
    if ((int)param_4 <= iVar26) {
      iVar26 = (int)param_4 + -1;
    }
  }
  *in_stack_00000058 = iVar26;
  if ((param_8 == ~LastWholeCharacterBeforeOffset) && (local_110 != (FLRUStringCache *)0x0)) {
    local_68.DataPtr = this_03->DataPtr;
    local_68.Size = this_03->Size;
    local_68._12_4_ = *(undefined4 *)&this_03->field_0xc;
    FLRUStringCache::Add(local_110,&local_68,(TVector2<float> *)&local_130);
  }
LAB_14249d367:
  param_1->DataPtr = (wchar_t *)local_130;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar7) {
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  if (FVar25 == (FName)0x0) {
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  this_01 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_01 == (FThreadStats *)0x0) {
    pFVar17 = FThreadStatsPool::Get();
    this_01 = FThreadStatsPool::GetFromPool(pFVar17);
  }
  if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  local_a8.NameAndInfo.Number = uVar24 & 0xffff6fff | 0x6000;
  local_a8.NameAndInfo.Index.Value = FVar23.Value;
  QueryPerformanceCounter(&local_c8);
  local_a8.StatData.Pad[4] = '\0';
  local_a8.StatData.Pad[5] = '\0';
  local_a8.StatData.Pad[6] = '\0';
  local_a8.StatData.Pad[7] = '\0';
  local_a8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
  local_a8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
  local_a8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
  local_a8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
  pFVar22 = &local_a8;
LAB_14249d511:
  FThreadStats::AddStatMessage(this_01,pFVar22);
  piVar1 = &this_01->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

