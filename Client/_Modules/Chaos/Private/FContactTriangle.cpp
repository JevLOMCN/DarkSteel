// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetEdgeVerticesAtPosition @ 1439d3080

bool __thiscall
Chaos::FContactTriangle::GetEdgeVerticesAtPosition
          (FContactTriangle *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,int *param_4,int *param_5,double param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double local_98;
  double local_90;
  double local_88;
  TVector<double,3> local_78;
  TVector<double,3> local_58;
  TVector<double,3> local_38;
  
  iVar5 = -1;
  *param_4 = -1;
  *param_5 = -1;
  local_78._0_8_ = *(undefined8 *)(this->Vertices + 2);
  local_78._8_8_ = *(undefined8 *)&this->Vertices[2].field_0x8;
  local_78._16_8_ = *(undefined8 *)&this->Vertices[2].field_0x10;
  local_58._0_8_ = *(undefined8 *)(this->Vertices + 1);
  local_58._8_8_ = *(undefined8 *)&this->Vertices[1].field_0x8;
  local_58._16_8_ = *(undefined8 *)&this->Vertices[1].field_0x10;
  local_38._0_8_ = *(undefined8 *)this->Vertices;
  local_38._8_8_ = *(undefined8 *)&this->Vertices[0].field_0x8;
  local_38._16_8_ = *(undefined8 *)&this->Vertices[0].field_0x10;
  ToBarycentric<double>((TVector<double,3> *)&local_98,param_1,&local_38,&local_58,&local_78);
  uVar6 = SUB84(local_98 - __real_3ff0000000000000,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
  ;
  uVar7 = (uint)((ulonglong)(local_98 - __real_3ff0000000000000) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (param_6 <= (double)CONCAT44(uVar7,uVar6) && (double)CONCAT44(uVar7,uVar6) != param_6) {
    uVar6 = SUB84(local_90 - __real_3ff0000000000000,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)(local_90 - __real_3ff0000000000000) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar7,uVar6) < param_6 || (double)CONCAT44(uVar7,uVar6) == param_6) {
      lVar4 = 0x18;
      lVar3 = 100;
      goto LAB_1439d31d6;
    }
    uVar6 = SUB84(local_88 - __real_3ff0000000000000,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)(local_88 - __real_3ff0000000000000) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar7,uVar6) < param_6 || (double)CONCAT44(uVar7,uVar6) == param_6) {
      lVar4 = 0x30;
      lVar3 = 0x68;
      goto LAB_1439d31d6;
    }
    if ((double)CONCAT44((uint)((ulonglong)local_98 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_98,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        param_6) {
      iVar5 = 2;
      lVar4 = 0x18;
      lVar3 = 100;
      goto LAB_1439d31d6;
    }
    if ((double)CONCAT44((uint)((ulonglong)local_90 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_90,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        param_6) {
      lVar3 = 0x68;
      iVar5 = 0;
      lVar4 = 0x30;
      goto LAB_1439d31d6;
    }
    if (param_6 < (double)CONCAT44((uint)((ulonglong)local_88 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_88,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
       ) {
      return false;
    }
    iVar5 = 1;
  }
  lVar3 = 0x60;
  lVar4 = 0;
LAB_1439d31d6:
  *param_4 = *(int *)(&this->Vertices[0].field_0x0 + lVar3);
  puVar1 = (undefined8 *)(&this->Vertices[0].field_0x0 + lVar4);
  uVar2 = puVar1[1];
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)&param_2->field_0x8 = uVar2;
  *(undefined8 *)&param_2->field_0x10 = *(undefined8 *)(&this->Vertices[0].field_0x10 + lVar4);
  if (iVar5 != -1) {
    *param_5 = this->VertexIndices[iVar5];
    uVar2 = *(undefined8 *)&this->Vertices[iVar5].field_0x8;
    *(undefined8 *)param_3 = *(undefined8 *)(this->Vertices + iVar5);
    *(undefined8 *)&param_3->field_0x8 = uVar2;
    *(undefined8 *)&param_3->field_0x10 = *(undefined8 *)&this->Vertices[iVar5].field_0x10;
  }
  return true;
}

