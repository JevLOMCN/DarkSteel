// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshFileUtils
// Functions: 9

// ObjWriteElement<2,UE::Math::TVector2<float>_> @ 14c939ef0

void __cdecl
UE::Private::MeshFileUtilsLocals::ObjWriteElement<2,UE::Math::TVector2<float>_>
          (basic_ofstream<char,std::char_traits<char>_> *param_1,char *param_2,
          TVector2<float> *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  longlong lVar2;
  
  pbVar1 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  std::operator<<<std::char_traits<char>_>(pbVar1,' ');
  lVar2 = 0;
  do {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)param_1,
               (param_3->field0_0x0).XY[lVar2]);
    if (lVar2 == 0) {
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)param_1,' ');
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < 2);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)param_1,'\n');
  return;
}

// ObjWriteElement<3,UE::Math::TVector<float>_> @ 14c939f70

void __cdecl
UE::Private::MeshFileUtilsLocals::ObjWriteElement<3,UE::Math::TVector<float>_>
          (basic_ofstream<char,std::char_traits<char>_> *param_1,char *param_2,
          TVector<float> *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  std::operator<<<std::char_traits<char>_>(pbVar1,' ');
  uVar2 = 0;
  do {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)param_1,
               (param_3->field0_0x0).XYZ[uVar2]);
    if (uVar2 < 2) {
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)param_1,' ');
    }
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 3);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)param_1,'\n');
  return;
}

// ObjWriteElement<3,UE::Math::TVector<double>_> @ 14c939ff0

void __cdecl
UE::Private::MeshFileUtilsLocals::ObjWriteElement<3,UE::Math::TVector<double>_>
          (basic_ofstream<char,std::char_traits<char>_> *param_1,char *param_2,
          TVector<double> *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  std::operator<<<std::char_traits<char>_>(pbVar1,' ');
  uVar2 = 0;
  do {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)param_1,
               (param_3->field0_0x0).XYZ[uVar2]);
    if (uVar2 < 2) {
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)param_1,' ');
    }
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 3);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)param_1,'\n');
  return;
}

// operator() @ 14c93a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UE::MeshFileUtils::ReadOBJ'::__l2::<lambda_1>::operator()
          (void *this,basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *param_1
          ,bool param_2,int *param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  basic_istream<char,std::char_traits<char>_> *pbVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong64 uVar9;
  bool bVar10;
  char *pcVar11;
  _Bxty *p_Var12;
  char *pcVar13;
  undefined1 auStackY_78 [32];
  _Bxty local_48;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  uStack_30 = _UNK_15076add8;
  local_38 = ___xmm_000000000000000f0000000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  *param_3 = -1;
  *param_4 = -1;
  local_48._8_8_ = 0;
  local_48._Ptr = (char *)0x0;
  *param_5 = -1;
  pbVar5 = std::operator>><char,std::char_traits<char>,std::allocator<char>_>
                     ((basic_istream<char,std::char_traits<char>_> *)param_1,
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  if (((&pbVar5->field_0x10)[*(int *)(*(longlong *)pbVar5 + 4)] & 6) != 0) {
    bVar10 = false;
    goto LAB_14c93a4a5;
  }
  uVar8 = &local_48;
  if (0xf < uStack_30) {
    uVar8 = local_48._Ptr;
  }
  iVar4 = atoi((char *)uVar8);
  *param_3 = iVar4;
  cVar2 = *(char *)uVar8;
  p_Var12 = (_Bxty *)uVar8;
  while (cVar2 != '\0') {
    puVar7 = &s__;
    cVar3 = '/';
    do {
      if (cVar2 == cVar3) goto LAB_14c93a40b;
      cVar3 = puVar7[1];
      puVar7 = puVar7 + 1;
    } while (cVar3 != '\0');
    pcVar11 = p_Var12->_Buf + 1;
    p_Var12 = (_Bxty *)((longlong)p_Var12 + 1);
    cVar2 = *pcVar11;
  }
LAB_14c93a40b:
  lVar6 = (longlong)((int)p_Var12 - (int)uVar8);
  if ((*(char *)(uVar8 + lVar6) == '/') && (param_2)) {
    pcVar11 = (char *)(uVar8 + lVar6 + 1);
    if (*pcVar11 == '/') {
      pcVar11 = (char *)(uVar8 + lVar6 + 2);
    }
    else {
      iVar4 = atoi(pcVar11);
      *param_4 = iVar4;
      cVar2 = *pcVar11;
      pcVar13 = pcVar11;
      while (cVar2 != '\0') {
        puVar7 = &s__;
        cVar3 = '/';
        do {
          if (cVar2 == cVar3) goto LAB_14c93a47b;
          cVar3 = puVar7[1];
          puVar7 = puVar7 + 1;
        } while (cVar3 != '\0');
        pcVar1 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
        cVar2 = *pcVar1;
      }
LAB_14c93a47b:
      lVar6 = (longlong)((int)pcVar13 - (int)pcVar11);
      if (pcVar11[lVar6] != '/') goto LAB_14c93a497;
      pcVar11 = pcVar11 + lVar6 + 1;
    }
    iVar4 = atoi(pcVar11);
    *param_5 = iVar4;
  }
LAB_14c93a497:
  bVar10 = true;
LAB_14c93a4a5:
  if (0xf < uStack_30) {
    uVar9 = uStack_30 + 1;
    uVar8 = local_48._Ptr;
    if (0xfff < uVar9) {
      uVar8 = *(undefined8 *)(local_48._Ptr + -8);
      uVar9 = uStack_30 + 0x28;
      if ((char *)0x1f < local_48._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar8,uVar9);
  }
  return bVar10;
}

// LoadOBJ @ 14c93a560

ELoadOBJStatus __cdecl
UE::MeshFileUtils::LoadOBJ(char *param_1,FDynamicMesh3 *param_2,FLoadOBJSettings *param_3)

{
  bool bVar1;
  ELoadOBJStatus EVar2;
  int iVar3;
  basic_filebuf<char,std::char_traits<char>_> *pbVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [24];
  char **local_100;
  char **local_e0;
  int *local_c8;
  codecvt<char,char,_Mbstatet> *local_b0;
  char local_a8;
  bool local_a7;
  _Mbstatet local_a4;
  bool local_9c;
  FILE *local_98;
  char *local_90;
  int local_88;
  basic_ios<char,std::char_traits<char>_> local_78;
  
  local_128._0_8_ = &std::basic_ifstream<char,std::char_traits<char>_>::_vbtable_;
  EVar2 = InvalidPath;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_78);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_118,false);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0xb0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_118);
  local_9c = false;
  local_118._0_8_ = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_a7 = false;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)local_118);
  local_a4 = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
             ::__l2::_Stinit;
  local_98 = (FILE *)0x0;
  local_b0 = (codecvt<char,char,_Mbstatet> *)0x0;
  pbVar4 = std::basic_filebuf<char,std::char_traits<char>_>::open
                     ((basic_filebuf<char,std::char_traits<char>_> *)local_118,param_1,1,0x40);
  if (pbVar4 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_128 + *(int *)(local_128._0_8_ + 4)),2,false);
  }
  if ((local_118[*(int *)(local_128._0_8_ + 4)] & 6) == 0) {
    EVar2 = ReadOBJ((basic_istream<char,std::char_traits<char>_> *)local_128,param_2,param_3);
    if (local_98 == (FILE *)0x0) {
      local_9c = false;
      local_a7 = false;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                ((basic_streambuf<char,std::char_traits<char>_> *)local_118);
    }
    else {
      if (*local_100 == &local_a8) {
        *local_100 = local_90;
        *local_e0 = local_90;
        *local_c8 = local_88 - (int)local_90;
      }
      bVar1 = std::basic_filebuf<char,std::char_traits<char>_>::_Endwrite
                        ((basic_filebuf<char,std::char_traits<char>_> *)local_118);
      puVar5 = local_118;
      if (!bVar1) {
        puVar5 = (undefined1 *)0x0;
      }
      iVar3 = fclose(local_98);
      local_9c = false;
      local_a7 = false;
      puVar6 = (undefined1 *)0x0;
      if (iVar3 == 0) {
        puVar6 = puVar5;
      }
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                ((basic_streambuf<char,std::char_traits<char>_> *)local_118);
      local_a4 = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
                 ::__l2::_Stinit;
      local_98 = (FILE *)0x0;
      local_b0 = (codecvt<char,char,_Mbstatet> *)0x0;
      if (puVar6 != (undefined1 *)0x0) goto LAB_14c93a757;
    }
    local_98 = (FILE *)0x0;
    local_b0 = (codecvt<char,char,_Mbstatet> *)0x0;
    local_a4 = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
               ::__l2::_Stinit;
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_128 + *(int *)(local_128._0_8_ + 4)),2,false);
  }
LAB_14c93a757:
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0xb0;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)local_118);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(local_118 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_78);
  return EVar2;
}

// LoadOBJChecked @ 14c93a7c0

FDynamicMesh3 * __cdecl
UE::MeshFileUtils::LoadOBJChecked
          (FDynamicMesh3 *__return_storage_ptr__,char *param_1,FLoadOBJSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  ELoadOBJStatus EVar3;
  FDynamicMesh3 *pFVar4;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(__return_storage_ptr__);
  EVar3 = LoadOBJ(param_1,__return_storage_ptr__,param_2);
  if (EVar3 != Success) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status == ELoadOBJStatus::Success",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                       ,0x11c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDynamicMesh3 *)(*pcVar1)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// ObjWriteString @ 14c93a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Private::MeshFileUtilsLocals::ObjWriteString
          (basic_ofstream<char,std::char_traits<char>_> *param_1,FString *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  wchar_t *_Str;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar7 = (FScriptContainerElement *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
      goto LAB_14c93a962;
    }
  }
  sVar4 = wcslen(_Str);
  local_38 = (int)sVar4;
  uVar8 = local_38 + 1;
  FVar9.Data = pFVar7;
  if (0x80 < uVar8) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,1);
    FVar9.Data = local_48.Data;
  }
  lVar10 = (longlong)(int)uVar8;
  pFVar6 = local_c8;
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    pFVar6 = FVar9.Data;
  }
  bVar3 = false;
  pFVar5 = pFVar7;
  local_40 = pFVar6;
  if (0 < lVar10) {
    do {
      uVar1 = *(ushort *)((longlong)_Str + (longlong)pFVar5 * 2);
      pFVar6[(longlong)pFVar5] = SUB21(uVar1,0);
      pFVar5 = pFVar5 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < uVar1);
    } while ((longlong)pFVar5 < lVar10);
    if (bVar3) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + (longlong)pFVar7 * 2)) {
          pFVar7[(longlong)pFVar6] = (FScriptContainerElement)0x3f;
        }
        pFVar7 = pFVar7 + 1;
      } while ((longlong)pFVar7 < lVar10);
    }
  }
  if ((pFVar6 + lVar10 == (FScriptContainerElement *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14c93a962:
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// ReadOBJ @ 14c93a9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ELoadOBJStatus __cdecl
UE::MeshFileUtils::ReadOBJ
          (basic_istream<char,std::char_traits<char>_> *param_1,FDynamicMesh3 *param_2,
          FLoadOBJSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  FDynamicMeshAttributeSet *pFVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ELoadOBJStatus extraout_EAX;
  undefined8 uVar14;
  char *_Dst;
  basic_istream<char,std::char_traits<char>_> *pbVar15;
  undefined8 uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  _Bxty *p_Var21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ulonglong uVar24;
  FDynamicMesh3 *pFVar25;
  longlong lVar26;
  TDynamicMeshOverlay<float,2> *this;
  TDynamicMeshOverlay<float,3> *this_00;
  int iVar27;
  FScriptContainerElement *pFVar28;
  float fVar29;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  bool local_2d7;
  char local_2d6;
  float local_2d0;
  undefined8 local_2cc;
  undefined1 local_2c0 [4];
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  bool *local_2a8;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  uint local_290;
  int local_28c;
  int local_288;
  int local_284;
  FDynamicMesh3 *local_280;
  TVector<double>_u_0 local_278;
  undefined8 local_260;
  float local_258;
  undefined8 local_254;
  float local_24c;
  TVector2<float>_u_0 local_248;
  undefined2 local_240;
  undefined1 local_23e;
  int local_238;
  int local_234;
  int local_230 [2];
  undefined8 local_228;
  FLoadOBJSettings *local_220;
  FIndex3i_u_0 local_218;
  int iStack_20c;
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  char **local_1d8;
  char **local_1d0;
  char **local_1b8;
  char **local_1b0;
  int *local_1a0;
  int *local_198;
  char *local_188;
  int local_180;
  basic_ios<char,std::char_traits<char>_> local_170;
  basic_istream<char,std::char_traits<char>_> *local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  TVector<double>_u_0 local_e8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  TVector2<float>_u_0 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  _Bxty local_a8;
  longlong local_98;
  ulonglong local_90;
  _Bxty local_88;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_290 = 0;
  local_280 = param_2;
  local_220 = param_3;
  local_108 = param_1;
  UE::Geometry::FDynamicMesh3::Clear(param_2);
  local_2a8 = &param_3->bLoadUVs;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298 = 0;
  if ((param_3->bLoadNormals == false) && (*local_2a8 == false)) {
    local_2d7 = false;
  }
  else {
    local_2d7 = true;
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_2);
  }
  fVar5 = __real_3f800000;
  if (param_3->bLoadNormals == false) {
    this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    pFVar3 = (param_2->AttributeSet).Ptr;
    pFVar17 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar17 = pFVar3;
    }
    if ((pFVar17->NormalLayers).Array.ArrayNum < 1) {
      local_2a8 = &param_3->bLoadUVs;
      this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    else {
      local_2a8 = &param_3->bLoadUVs;
      this_00 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar17->NormalLayers).Array.AllocatorInstance.Data;
    }
  }
  if (*local_2a8 == false) {
    this = (TDynamicMeshOverlay<float,2> *)0x0;
  }
  else {
    pFVar3 = (param_2->AttributeSet).Ptr;
    pFVar17 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar17 = pFVar3;
    }
    if ((pFVar17->UVLayers).Array.ArrayNum < 1) {
      local_2a8 = &param_3->bLoadUVs;
      this = (TDynamicMeshOverlay<float,2> *)0x0;
    }
    else {
      this = *(TDynamicMeshOverlay<float,2> **)(pFVar17->UVLayers).Array.AllocatorInstance.Data;
      local_2a8 = &param_3->bLoadUVs;
    }
  }
  local_2bc = 1;
  uVar18 = 0;
  local_2d6 = '\0';
  local_88._8_8_ = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88._Ptr = (char *)0x0;
  do {
    do {
      bVar8 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),'\n');
      uVar11 = 0;
      bVar4 = false;
      if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 8)
        )();
      }
      bVar9 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
      if (bVar9) {
        local_78 = 0;
        uVar14 = &local_88;
        if (0xf < local_70) {
          uVar14 = local_88._Ptr;
        }
        *(char *)uVar14 = '\0';
        uVar10 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                           (*(basic_streambuf<char,std::char_traits<char>_> **)
                             (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
        while (uVar18 = local_78, uVar10 != 0xffffffff) {
          if (uVar10 == bVar8) {
            bVar4 = true;
            std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
            uVar18 = local_78;
            goto LAB_14c93ac17;
          }
          if (0x7ffffffffffffffe < local_78) {
            uVar11 = 2;
            goto LAB_14c93ac17;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                     (char)uVar10);
          bVar4 = true;
          uVar10 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                             (*(basic_streambuf<char,std::char_traits<char>_> **)
                               (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
        }
        uVar11 = 1;
      }
LAB_14c93ac17:
      uVar10 = uVar11 | 2;
      if (bVar4) {
        uVar10 = uVar11;
      }
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),uVar10,false);
      if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) +
                    0x10))();
      }
      pFVar25 = local_280;
      if (((&param_1->field_0x10)[*(int *)(*(longlong *)param_1 + 4)] & 6) != 0) {
        if (local_2d6 != '\0') {
          UE::Geometry::FDynamicMesh3::EnableTriangleGroups(local_280,0);
        }
        iVar6 = (int)local_298;
        uVar18 = (ulonglong)(int)local_298;
        pFVar22 = local_2a0.Data + 0x28;
        pFVar28 = local_2a0.Data + uVar18 * 0x2c;
        while( true ) {
          if ((int)uVar18 != iVar6) {
            `TCheckedPointerIterator<`UE::MeshFileUtils::ReadOBJ'::__l2::FTriToAdd,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_2c0);
          }
          pFVar1 = pFVar22 + -0x28;
          if (pFVar1 == pFVar28) break;
          iVar13 = UE::Geometry::FDynamicMesh3::AppendTriangle
                             (pFVar25,(FIndex3i *)pFVar1,*(int *)pFVar22);
          pFVar25 = local_280;
          if ((local_220->bAddSeparatedTriForNonManifold != false) && (iVar13 == -2)) {
            uVar18 = (ulonglong)(*(uint *)pFVar1 & 0x1ff);
            local_240 = 0;
            local_23e = 0;
            lVar26 = *(longlong *)
                      ((local_280->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(*(uint *)pFVar1 >> 9) * 8);
            pdVar2 = (double *)(lVar26 + uVar18 * 0x18);
            local_278._s_0.X = *pdVar2;
            local_278._s_0.Y = pdVar2[1];
            local_278._s_0.Z = *(double *)(lVar26 + 0x10 + uVar18 * 0x18);
            local_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_24c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_260 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_248 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_218._s_0.A =
                 UE::Geometry::FDynamicMesh3::AppendVertex(local_280,(FVertexInfo *)&local_278._s_0)
            ;
            uVar18 = (ulonglong)(*(uint *)(pFVar22 + -0x24) & 0x1ff);
            local_240 = 0;
            local_23e = 0;
            lVar26 = *(longlong *)
                      ((pFVar25->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(*(uint *)(pFVar22 + -0x24) >> 9) * 8);
            pdVar2 = (double *)(lVar26 + uVar18 * 0x18);
            local_278._s_0.X = *pdVar2;
            local_278._s_0.Y = pdVar2[1];
            local_278._s_0.Z = *(double *)(lVar26 + 0x10 + uVar18 * 0x18);
            local_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_24c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_260 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_248 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_218._s_0.B =
                 UE::Geometry::FDynamicMesh3::AppendVertex(pFVar25,(FVertexInfo *)&local_278._s_0);
            uVar18 = (ulonglong)(*(uint *)(pFVar22 + -0x20) & 0x1ff);
            local_240 = 0;
            local_23e = 0;
            lVar26 = *(longlong *)
                      ((pFVar25->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(*(uint *)(pFVar22 + -0x20) >> 9) * 8);
            pdVar2 = (double *)(lVar26 + uVar18 * 0x18);
            local_278._s_0.X = *pdVar2;
            local_278._s_0.Y = pdVar2[1];
            local_278._s_0.Z = *(double *)(lVar26 + 0x10 + uVar18 * 0x18);
            local_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_24c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_260 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_248 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_218._s_0.C =
                 UE::Geometry::FDynamicMesh3::AppendVertex(pFVar25,(FVertexInfo *)&local_278._s_0);
            iVar13 = UE::Geometry::FDynamicMesh3::AppendTriangle
                               (pFVar25,(FIndex3i *)&local_218._s_0,*(int *)pFVar22);
          }
          if (-1 < iVar13) {
            if ((this_00 != (TDynamicMeshOverlay<float,3> *)0x0) &&
               (pFVar22[-3] != (FScriptContainerElement)0x0)) {
              UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                        (this_00,iVar13,(FIndex3i *)(pFVar22 + -0x10),true);
            }
            if ((this != (TDynamicMeshOverlay<float,2> *)0x0) &&
               (pFVar22[-4] != (FScriptContainerElement)0x0)) {
              UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                        (this,iVar13,(FIndex3i *)(pFVar22 + -0x1c),true);
            }
          }
          uVar18 = local_298 & 0xffffffff;
          pFVar22 = pFVar22 + 0x2c;
          pFVar25 = local_280;
        }
        if (local_220->bReverseOrientation != false) {
          UE::Geometry::FDynamicMesh3::ReverseOrientation(pFVar25,true);
        }
        if (0xf < local_70) {
          uVar20 = local_70 + 1;
          uVar14 = local_88._Ptr;
          if (0xfff < uVar20) {
            uVar14 = *(undefined8 *)(local_88._Ptr + -8);
            uVar20 = local_70 + 0x28;
            if ((char *)0x1f < local_88._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar14,uVar20);
        }
        if (local_2a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data);
        }
        return Success;
      }
    } while (uVar18 == 0);
    local_208._0_8_ =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
    local_208._16_8_ =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
              (&local_170);
    local_290 = local_290 | 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_208,
               (basic_streambuf<char,std::char_traits<char>_> *)local_1f0);
    *(undefined ***)
     (&((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_208)->
       field_0x0 + *(int *)(local_208._0_8_ + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_20c + (longlong)*(int *)(local_208._0_8_ + 4)) =
         *(int *)(local_208._0_8_ + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_1f0);
    uVar14 = &local_88;
    if (0xf < local_70) {
      uVar14 = local_88._Ptr;
    }
    local_1f0._0_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if (0x7fffffff < uVar18) {
      std::_Xbad_alloc();
      return extraout_EAX;
    }
    _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar18);
    memcpy(_Dst,(void *)uVar14,uVar18);
    local_188 = _Dst + uVar18;
    local_98 = 0;
    local_90 = 0xf;
    *local_1d8 = _Dst;
    local_a8._8_8_ = 0;
    local_a8._Ptr = (char *)0x0;
    *local_1b8 = _Dst;
    *local_1a0 = (int)local_188 - (int)_Dst;
    *local_1d0 = _Dst;
    *local_1b0 = _Dst;
    *local_198 = (int)local_188 - (int)_Dst;
    local_180 = 1;
    pbVar15 = std::operator>><char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_istream<char,std::char_traits<char>_> *)local_208,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_a8);
    uVar24 = local_90;
    uVar14 = local_a8._Ptr;
    bVar4 = local_2d7;
    if ((((&pbVar15->field_0x10)[*(int *)(*(longlong *)pbVar15 + 4)] & 6) == 0) && (local_98 != 0))
    {
      uVar16 = &local_a8;
      if (0xf < local_90) {
        uVar16 = local_a8._Ptr;
      }
      if (*(byte *)uVar16 == 0x23) goto LAB_14c93b328;
      uVar16 = &local_a8;
      if (0xf < local_90) {
        uVar16 = local_a8._Ptr;
      }
      if (local_98 == 1) {
        if (*(byte *)uVar16 == 0x67) {
          uVar11 = 0;
        }
        else {
          uVar11 = -(uint)(*(byte *)uVar16 < 0x67) | 1;
        }
        if (uVar11 != 0) goto LAB_14c93ae2e;
LAB_14c93ae55:
        local_2bc = local_2bc + 1;
        local_2d6 = '\x01';
        goto LAB_14c93b328;
      }
LAB_14c93ae2e:
      uVar16 = &local_a8;
      if (0xf < local_90) {
        uVar16 = local_a8._Ptr;
      }
      if (local_98 == 1) {
        if (*(byte *)uVar16 == 0x6f) {
          uVar11 = 0;
        }
        else {
          uVar11 = -(uint)(*(byte *)uVar16 < 0x6f) | 1;
        }
        if (uVar11 == 0) goto LAB_14c93ae55;
      }
      uVar16 = &local_a8;
      if (0xf < local_90) {
        uVar16 = local_a8._Ptr;
      }
      if (local_98 == 1) {
        if (*(byte *)uVar16 == 0x76) {
          uVar11 = 0;
        }
        else {
          uVar11 = -(uint)(*(byte *)uVar16 < 0x76) | 1;
        }
        if (uVar11 == 0) {
          pbVar15 = (basic_istream<char,std::char_traits<char>_> *)
                    std::basic_istream<char,std::char_traits<char>_>::operator>>
                              ((basic_istream<char,std::char_traits<char>_> *)local_208,&local_100);
          pbVar15 = (basic_istream<char,std::char_traits<char>_> *)
                    std::basic_istream<char,std::char_traits<char>_>::operator>>(pbVar15,&dStack_f8)
          ;
          std::basic_istream<char,std::char_traits<char>_>::operator>>(pbVar15,&local_f0);
          local_e8._s_0.X = local_100;
          local_e8._s_0.Y = dStack_f8;
          local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_e8._s_0.Z = local_f0;
          local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_b0 = 0;
          local_ae = 0;
          UE::Geometry::FDynamicMesh3::AppendVertex(local_280,(FVertexInfo *)&local_e8._s_0);
          goto LAB_14c93b328;
        }
      }
      if (local_220->bLoadNormals != false) {
        uVar16 = &local_a8;
        if (0xf < local_90) {
          uVar16 = local_a8._Ptr;
        }
        if (local_98 == 2) {
          bVar9 = *(byte *)uVar16 < 0x76;
          if ((*(byte *)uVar16 == 0x76) &&
             (bVar9 = *(byte *)(uVar16 + 1) < 0x6e, *(byte *)(uVar16 + 1) == 0x6e)) {
            uVar11 = 0;
          }
          else {
            uVar11 = -(uint)bVar9 | 1;
          }
          if (uVar11 == 0) {
            pbVar15 = (basic_istream<char,std::char_traits<char>_> *)
                      std::basic_istream<char,std::char_traits<char>_>::operator>>
                                ((basic_istream<char,std::char_traits<char>_> *)local_208,&local_2d0
                                );
            pbVar15 = (basic_istream<char,std::char_traits<char>_> *)
                      std::basic_istream<char,std::char_traits<char>_>::operator>>
                                (pbVar15,(float *)&local_2cc);
            std::basic_istream<char,std::char_traits<char>_>::operator>>
                      (pbVar15,(float *)((longlong)&local_2cc + 4));
            fVar29 = SQRT(local_2d0 * local_2d0 + (float)local_2cc * (float)local_2cc +
                          local_2cc._4_4_ * local_2cc._4_4_);
            if (fVar29 <= 0.0) {
              local_2cc = 0;
              local_2d0 = 0.0;
              UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(this_00,&local_2d0);
            }
            else {
              fVar29 = fVar5 / fVar29;
              local_2d0 = local_2d0 * fVar29;
              local_2cc = CONCAT44(local_2cc._4_4_ * fVar29,(float)local_2cc * fVar29);
              UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(this_00,&local_2d0);
            }
            goto LAB_14c93b328;
          }
        }
      }
      if (*local_2a8 != false) {
        uVar16 = &local_a8;
        if (0xf < local_90) {
          uVar16 = local_a8._Ptr;
        }
        if (local_98 == 2) {
          bVar9 = *(byte *)uVar16 < 0x76;
          if ((*(byte *)uVar16 == 0x76) &&
             (bVar9 = *(byte *)(uVar16 + 1) < 0x74, *(byte *)(uVar16 + 1) == 0x74)) {
            uVar11 = 0;
          }
          else {
            uVar11 = -(uint)bVar9 | 1;
          }
          if (uVar11 == 0) {
            local_228 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            pbVar15 = (basic_istream<char,std::char_traits<char>_> *)
                      std::basic_istream<char,std::char_traits<char>_>::operator>>
                                ((basic_istream<char,std::char_traits<char>_> *)local_208,
                                 (float *)&local_228);
            std::basic_istream<char,std::char_traits<char>_>::operator>>
                      (pbVar15,(float *)((longlong)&local_228 + 4));
            UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this,(float *)&local_228);
            goto LAB_14c93b328;
          }
        }
      }
      uVar16 = &local_a8;
      if (0xf < local_90) {
        uVar16 = local_a8._Ptr;
      }
      if (local_98 != 1) goto LAB_14c93b328;
      if (*(byte *)uVar16 == 0x66) {
        uVar11 = 0;
      }
      else {
        uVar11 = -(uint)(*(byte *)uVar16 < 0x66) | 1;
      }
      if (uVar11 != 0) goto LAB_14c93b328;
      bVar9 = `UE::MeshFileUtils::ReadOBJ'::__l2::<lambda_1>::operator()
                        (&local_2d8,
                         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_208,local_2d7,&local_238,local_230,&local_234);
      if ((bVar9) &&
         (bVar9 = `UE::MeshFileUtils::ReadOBJ'::__l2::<lambda_1>::operator()
                            (&local_2d8,
                             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                              *)local_208,bVar4,&local_28c,&local_288,&local_284), bVar9)) {
        bVar9 = `UE::MeshFileUtils::ReadOBJ'::__l2::<lambda_1>::operator()
                          (&local_2d8,
                           (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                           local_208,bVar4,local_2b0,&local_2b4,&local_2b8);
        iVar6 = local_2bc;
        iVar13 = local_28c;
        if (bVar9) {
          do {
            iVar23 = local_238 + -1;
            iVar27 = local_2b0[0] + -1;
            iVar12 = (int)local_298;
            if ((int)local_298 == local_298._4_4_) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x42c,&local_2a0,(int *)((longlong)&local_298 + 4));
            }
            iVar7 = local_2b0[0];
            local_298 = CONCAT44(local_298._4_4_,iVar12 + 1);
            lVar26 = (longlong)iVar12 * 0x2c;
            *(int *)(local_2a0.Data + lVar26) = iVar23;
            *(int *)(local_2a0.Data + lVar26 + 4) = iVar13 + -1;
            *(int *)(local_2a0.Data + lVar26 + 8) = iVar27;
            *(undefined8 *)(local_2a0.Data + lVar26 + 0xc) = 0xffffffffffffffff;
            *(undefined8 *)(local_2a0.Data + lVar26 + 0x14) = 0xffffffffffffffff;
            *(undefined8 *)(local_2a0.Data + lVar26 + 0x1c) = 0xffffffffffffffff;
            *(undefined2 *)(local_2a0.Data + lVar26 + 0x24) = 0;
            *(int *)(local_2a0.Data + lVar26 + 0x28) = iVar6;
            if (this_00 != (TDynamicMeshOverlay<float,3> *)0x0) {
              *(int *)(local_2a0.Data + lVar26 + 0x18) = local_234 + -1;
              *(int *)(local_2a0.Data + lVar26 + 0x1c) = local_284 + -1;
              *(int *)(local_2a0.Data + lVar26 + 0x20) = local_2b8 + -1;
              local_2a0.Data[lVar26 + 0x25] = (FScriptContainerElement)0x1;
            }
            if (this != (TDynamicMeshOverlay<float,2> *)0x0) {
              *(int *)(local_2a0.Data + lVar26 + 0xc) = local_230[0] + -1;
              *(int *)(local_2a0.Data + lVar26 + 0x10) = local_288 + -1;
              *(int *)(local_2a0.Data + lVar26 + 0x14) = local_2b4 + -1;
              local_2a0.Data[lVar26 + 0x24] = (FScriptContainerElement)0x1;
            }
            local_288 = local_2b4;
            local_284 = local_2b8;
            local_28c = local_2b0[0];
            bVar9 = `UE::MeshFileUtils::ReadOBJ'::__l2::<lambda_1>::operator()
                              (&local_2d8,
                               (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                                *)local_208,bVar4,local_2b0,&local_2b4,&local_2b8);
            uVar14 = local_a8._Ptr;
            param_1 = local_108;
            uVar24 = local_90;
            uVar18 = local_78;
            iVar13 = iVar7;
          } while (bVar9);
        }
        goto LAB_14c93b328;
      }
      if (0xf < uVar24) {
        uVar19 = uVar24 + 1;
        uVar16 = uVar14;
        if (0xfff < uVar19) {
          uVar16 = *(undefined8 *)(uVar14 + -8);
          uVar19 = uVar24 + 0x28;
          if ((byte *)0x1f < (byte *)(uVar14 + (-8 - uVar16))) goto LAB_14c93b3b4;
        }
        ::operator_delete((void *)uVar16,uVar19);
      }
      *(undefined ***)
       (&((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_208)->
         field_0x0 + *(int *)(local_208._0_8_ + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)&iStack_20c + (longlong)*(int *)(local_208._0_8_ + 4)) =
           *(int *)(local_208._0_8_ + 4) + -0x98;
    }
    else {
LAB_14c93b328:
      if (0xf < uVar24) {
        uVar19 = uVar24 + 1;
        p_Var21 = (_Bxty *)uVar14;
        if (0xfff < uVar19) {
          p_Var21 = *(_Bxty **)(uVar14 + -8);
          uVar19 = uVar24 + 0x28;
          if ((byte *)0x1f < (byte *)(uVar14 + (-8 - (longlong)p_Var21))) {
LAB_14c93b3b4:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(p_Var21,uVar19);
      }
      *(undefined ***)
       (&((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_208)->
         field_0x0 + *(int *)(local_208._0_8_ + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)&iStack_20c + (longlong)*(int *)(local_208._0_8_ + 4)) =
           *(int *)(local_208._0_8_ + 4) + -0x98;
    }
    local_1f0._0_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_1f0);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_1f0);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)(local_1f0 + 8));
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (&local_170);
  } while( true );
}

// WriteOBJ @ 14c93b6c0

bool __cdecl
UE::MeshFileUtils::WriteOBJ(char *param_1,FDynamicMesh3 *param_2,FWriteOBJSettings *param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  float fVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  basic_filebuf<char,std::char_traits<char>_> *pbVar14;
  basic_ostream<char,std::char_traits<char>_> *pbVar15;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  TVar16;
  ForAnyElementType FVar17;
  FDynamicMeshAttributeSet *pFVar18;
  FDynamicMeshAttributeSet *pFVar19;
  FDynamicMeshAttributeSet *pFVar20;
  uint uVar21;
  FDynamicMeshAttributeSet *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 local_480;
  float local_478;
  TVector2<float>_u_0 local_470;
  float local_468 [7];
  int iStack_44c;
  undefined1 local_448 [8];
  undefined1 local_440 [24];
  undefined8 auStack_428 [10];
  codecvt<char,char,_Mbstatet> *local_3d8;
  bool local_3cf;
  _Mbstatet local_3cc;
  bool local_3c4;
  _iobuf *local_3c0;
  basic_ios<char,std::char_traits<char>_> local_3a0;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  undefined8 local_2b8;
  float local_2b0;
  double local_2a8 [4];
  FDynamicMesh3 local_288;
  
  pFVar22 = (FDynamicMeshAttributeSet *)0x0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_288);
  UE::Geometry::FDynamicMesh3::CompactCopy
            (&local_288,param_2,true,true,true,true,(FCompactMaps *)0x0);
  if (param_3->bReverseOrientation != false) {
    UE::Geometry::FDynamicMesh3::ReverseOrientation(&local_288,true);
  }
  local_448 = (undefined1  [8])&std::basic_ofstream<char,std::char_traits<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_3a0);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_448,
             (basic_streambuf<char,std::char_traits<char>_> *)local_440,false);
  *(undefined ***)(local_448 + *(int *)((longlong)local_448 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_44c + (longlong)*(int *)((longlong)local_448 + 4)) =
       *(int *)((longlong)local_448 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_440);
  local_3c4 = false;
  local_440._0_8_ = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_3cf = false;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)local_440);
  local_3cc = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
              ::__l2::_Stinit;
  local_3c0 = (_iobuf *)0x0;
  local_3d8 = (codecvt<char,char,_Mbstatet> *)0x0;
  *(undefined8 *)((longlong)auStack_428 + (longlong)*(int *)((longlong)local_448 + 4)) = 0xf;
  pbVar14 = std::basic_filebuf<char,std::char_traits<char>_>::open
                      ((basic_filebuf<char,std::char_traits<char>_> *)local_440,param_1,0x12,0x40);
  if (pbVar14 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_448 + *(int *)((longlong)local_448 + 4)),2,false);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_448 + *(int *)((longlong)local_448 + 4)),0,false);
  }
  if ((local_440[(longlong)*(int *)((longlong)local_448 + 4) + 8] & 6) != 0) {
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5782455122193809711>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                        ,0x12f,"FileStream");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
    bVar11 = false;
    goto LAB_14c93c439;
  }
  if ((param_3->bWritePerVertexValues == false) || (local_288.VertexNormals.bIsSet == false)) {
    bVar11 = false;
    bVar10 = false;
    if (param_3->bWritePerVertexValues != false) goto LAB_14c93b891;
LAB_14c93b89f:
    bVar9 = false;
  }
  else {
    bVar11 = true;
    bVar10 = true;
LAB_14c93b891:
    bVar9 = true;
    if (local_288.VertexUVs.bIsSet == false) goto LAB_14c93b89f;
  }
  pFVar18 = pFVar22;
  if (0 < local_288.VertexRefCounts.UsedCount) {
    do {
      uVar21 = (uint)pFVar18;
      if (((((int)uVar21 < 0) ||
           ((int)(local_288.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_288.VertexRefCounts.RefCounts.CurBlockUsed) <= (int)uVar21)) ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (local_288.VertexRefCounts.RefCounts.Blocks.
                                          AllocatorInstance.Data + ((ulonglong)pFVar18 >> 9) * 8) +
                                       (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mesh.IsVertex(VID)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                              ,0x139,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      uVar24 = (ulonglong)(uVar21 & 0x1ff);
      uVar23 = (ulonglong)pFVar18 >> 9;
      pdVar1 = (double *)
               (*(longlong *)(local_288.Vertices.Blocks.AllocatorInstance.Data + uVar23 * 8) +
               uVar24 * 0x18);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      local_2a8[2] = *(double *)
                      (*(longlong *)(local_288.Vertices.Blocks.AllocatorInstance.Data + uVar23 * 8)
                       + 0x10 + uVar24 * 0x18);
      local_2a8[0] = dVar7;
      local_2a8[1] = dVar8;
      if ((param_3->bWritePerVertexColors == false) || (local_288.VertexColors.bIsSet == false)) {
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"v");
        std::operator<<<std::char_traits<char>_>(pbVar15,' ');
        pFVar18 = pFVar22;
        do {
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_448,
                     local_2a8[(longlong)pFVar18]);
          if (pFVar18 < (FDynamicMeshAttributeSet *)&DAT_00000002) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_448,' ');
          }
          pFVar18 = (FDynamicMeshAttributeSet *)((longlong)&pFVar18->_padding_ + 1);
        } while ((longlong)pFVar18 < 3);
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_448,'\n');
      }
      else {
        fVar3 = *(float *)(*(longlong *)
                            (local_288.VertexColors.TypedValue.Blocks.AllocatorInstance.Data +
                            uVar23 * 8) + 8 + uVar24 * 0xc);
        uVar2 = *(undefined8 *)
                 (*(longlong *)
                   (local_288.VertexColors.TypedValue.Blocks.AllocatorInstance.Data + uVar23 * 8) +
                 uVar24 * 0xc);
        local_2b0 = fVar3;
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"v ");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,dVar7);
        pbVar15 = std::operator<<<std::char_traits<char>_>(pbVar15," ");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,dVar8);
        pbVar15 = std::operator<<<std::char_traits<char>_>(pbVar15," ");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,local_2a8[2])
        ;
        pbVar15 = std::operator<<<std::char_traits<char>_>(pbVar15," ");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,(float)uVar2)
        ;
        pbVar15 = std::operator<<<std::char_traits<char>_>(pbVar15," ");
        local_2b8 = uVar2;
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar15,(float)((ulonglong)uVar2 >> 0x20));
        pbVar15 = std::operator<<<std::char_traits<char>_>(pbVar15," ");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,fVar3);
        std::operator<<<std::char_traits<char>_>(pbVar15,"\n");
      }
      if (bVar11) {
        local_480 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_478 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        if (local_288.VertexNormals.bIsSet != false) {
          local_480 = *(undefined8 *)
                       (*(longlong *)
                         (local_288.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data +
                         uVar23 * 8) + uVar24 * 0xc);
          local_478 = *(float *)(*(longlong *)
                                  (local_288.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data
                                  + uVar23 * 8) + 8 + uVar24 * 0xc);
        }
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"vn");
        std::operator<<<std::char_traits<char>_>(pbVar15,' ');
        pFVar18 = pFVar22;
        do {
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_448,
                     *(float *)((longlong)&local_480 + (longlong)pFVar18 * 4));
          if (pFVar18 < (FDynamicMeshAttributeSet *)&DAT_00000002) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_448,' ');
          }
          pFVar18 = (FDynamicMeshAttributeSet *)((longlong)&pFVar18->_padding_ + 1);
        } while ((longlong)pFVar18 < 3);
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_448,'\n');
      }
      if (bVar9) {
        local_470 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if (local_288.VertexUVs.bIsSet != false) {
          local_470 = *(TVector2<float>_u_0 *)
                       (*(longlong *)
                         (local_288.VertexUVs.TypedValue.Blocks.AllocatorInstance.Data + uVar23 * 8)
                       + uVar24 * 8);
        }
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"vt");
        std::operator<<<std::char_traits<char>_>(pbVar15,' ');
        pFVar18 = pFVar22;
        do {
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_448,
                     *(float *)((longlong)&local_470 + (longlong)pFVar18 * 4));
          if (pFVar18 == (FDynamicMeshAttributeSet *)0x0) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_448,' ');
          }
          pFVar18 = (FDynamicMeshAttributeSet *)((longlong)&pFVar18->_padding_ + 1);
        } while ((longlong)pFVar18 < 2);
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_448,'\n');
      }
      pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < local_288.VertexRefCounts.UsedCount);
  }
  pFVar19 = pFVar22;
  pFVar18 = pFVar22;
  if ((param_3->bWritePerVertexValues == false) &&
     (local_288.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0)) {
    TVar16.Ptr = pFVar22;
    if (local_288.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
      TVar16.Ptr = local_288.AttributeSet.Ptr;
    }
    if (((0 < ((TVar16.Ptr)->UVLayers).Array.ArrayNum) &&
        (pFVar18 = *(FDynamicMeshAttributeSet **)
                    ((TVar16.Ptr)->UVLayers).Array.AllocatorInstance.Data,
        pFVar18 != (FDynamicMeshAttributeSet *)0x0)) && (0 < (pFVar18->NormalLayers).Array.ArrayNum)
       ) {
      do {
        uVar21 = (uint)pFVar19;
        if (((((int)uVar21 < 0) ||
             ((int)pFVar18->_padding_ * 0x200 + *(int *)((longlong)&pFVar18->_padding_ + 4) <=
              (int)uVar21)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (pFVar18->_padding_ + ((ulonglong)pFVar19 >> 9) * 8) +
                                         (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("UVs->IsElement(UI)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                                ,0x15d,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        pTVar4 = (pFVar18->MaterialIDAttrib).Ptr;
        local_468[0] = *(float *)(*(longlong *)
                                   (&pTVar4->field_0x0 + (ulonglong)((uVar21 & 0x7fffffff) >> 8) * 8
                                   ) + (ulonglong)(uVar21 * 2 & 0x1ff) * 4);
        local_468[1] = *(float *)(*(longlong *)
                                   (&pTVar4->field_0x0 + (ulonglong)((uVar21 & 0x7fffffff) >> 8) * 8
                                   ) + (ulonglong)(uVar21 * 2 + 1 & 0x1ff) * 4);
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"vt");
        std::operator<<<std::char_traits<char>_>(pbVar15,' ');
        pFVar19 = pFVar22;
        do {
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_448,
                     local_468[(longlong)pFVar19]);
          if (pFVar19 == (FDynamicMeshAttributeSet *)0x0) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_448,' ');
          }
          pFVar19 = (FDynamicMeshAttributeSet *)((longlong)&pFVar19->_padding_ + 1);
        } while ((longlong)pFVar19 < 2);
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_448,'\n');
        pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar21 + 1);
      } while ((int)(uVar21 + 1) < (pFVar18->NormalLayers).Array.ArrayNum);
    }
    pFVar19 = (FDynamicMeshAttributeSet *)0x0;
    if (((0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) &&
        (pFVar19 = *(FDynamicMeshAttributeSet **)
                    ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data,
        pFVar19 != (FDynamicMeshAttributeSet *)0x0)) &&
       (pFVar20 = pFVar22, 0 < (pFVar19->NormalLayers).Array.ArrayNum)) {
      do {
        uVar21 = (uint)pFVar20;
        if (((((int)uVar21 < 0) ||
             ((int)pFVar19->_padding_ * 0x200 + *(int *)((longlong)&pFVar19->_padding_ + 4) <=
              (int)uVar21)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (pFVar19->_padding_ + ((ulonglong)pFVar20 >> 9) * 8) +
                                         (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Normals->IsElement(NI)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                                ,0x168,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        pTVar4 = (pFVar19->MaterialIDAttrib).Ptr;
        uVar6 = uVar21 * 3;
        local_468[2] = *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar6 >> 9) * 8) +
                                 (ulonglong)(uVar6 & 0x1ff) * 4);
        local_468[3] = *(float *)(*(longlong *)
                                   (&pTVar4->field_0x0 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
        local_468[4] = *(float *)(*(longlong *)
                                   (&pTVar4->field_0x0 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
        pbVar15 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_448,"vn");
        std::operator<<<std::char_traits<char>_>(pbVar15,' ');
        pFVar20 = pFVar22;
        do {
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_448,
                     local_468[(longlong)((longlong)&pFVar20->_padding_ + 2)]);
          if (pFVar20 < (FDynamicMeshAttributeSet *)&DAT_00000002) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_448,' ');
          }
          pFVar20 = (FDynamicMeshAttributeSet *)((longlong)&pFVar20->_padding_ + 1);
        } while ((longlong)pFVar20 < 3);
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_448,'\n');
        pFVar20 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar21 + 1);
      } while ((int)(uVar21 + 1) < (pFVar19->NormalLayers).Array.ArrayNum);
    }
  }
  if (0 < local_288.TriangleRefCounts.UsedCount) {
    do {
      uVar21 = (uint)pFVar22;
      if (((((int)uVar21 < 0) ||
           ((int)(local_288.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                 local_288.TriangleRefCounts.RefCounts.CurBlockUsed) <= (int)uVar21)) ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (local_288.TriangleRefCounts.RefCounts.Blocks.
                                          AllocatorInstance.Data + ((ulonglong)pFVar22 >> 9) * 8) +
                                       (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mesh.IsTriangle(TID)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\MeshFileUtils\\Private\\OBJMeshUtil.cpp"
                              ,0x171,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      if (param_3->bWritePerVertexValues == false) {
        if ((pFVar18 == (FDynamicMeshAttributeSet *)0x0) ||
           (*(int *)(*(longlong *)
                      (*(longlong *)&(pFVar18->SkinWeightAttributes).field_0x8 +
                      (ulonglong)(uVar21 * 3 >> 9) * 8) + (ulonglong)(uVar21 * 3 & 0x1ff) * 4) < 0))
        {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((pFVar19 == (FDynamicMeshAttributeSet *)0x0) ||
           (*(int *)(*(longlong *)
                      (*(longlong *)&(pFVar19->SkinWeightAttributes).field_0x8 +
                      (ulonglong)(uVar21 * 3 >> 9) * 8) + (ulonglong)(uVar21 * 3 & 0x1ff) * 4) < 0))
        {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar11) {
          if (bVar13) {
            ::FString::PrintfImpl(&local_2f8,L"f %d/%d/%d %d/%d/%d %d/%d/%d\n");
            UE::Private::MeshFileUtilsLocals::ObjWriteString
                      ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_2f8);
            FVar17.Data = local_2f8.Data.AllocatorInstance.Data;
          }
          else {
            ::FString::PrintfImpl(&local_2e8,L"f %d/%d %d/%d %d/%d\n");
            UE::Private::MeshFileUtilsLocals::ObjWriteString
                      ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_2e8);
            FVar17.Data = local_2e8.Data.AllocatorInstance.Data;
          }
        }
        else if (bVar13) {
          ::FString::PrintfImpl(&local_2d8,L"f %d//%d %d//%d %d//%d\n");
          UE::Private::MeshFileUtilsLocals::ObjWriteString
                    ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_2d8);
          FVar17.Data = local_2d8.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl(&local_2c8,L"f %d %d %d\n");
          UE::Private::MeshFileUtilsLocals::ObjWriteString
                    ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_2c8);
          FVar17.Data = local_2c8.Data.AllocatorInstance.Data;
        }
        bVar11 = bVar10;
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
      }
      else if (bVar11) {
        if (bVar9) {
          ::FString::PrintfImpl(&local_308,L"f %d/%d/%d %d/%d/%d %d/%d/%d\n");
          UE::Private::MeshFileUtilsLocals::ObjWriteString
                    ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_308);
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
        }
        else {
          ::FString::PrintfImpl(&local_318,L"f %d//%d %d//%d %d//%d\n");
          UE::Private::MeshFileUtilsLocals::ObjWriteString
                    ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_318);
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (bVar9) {
        ::FString::PrintfImpl(&local_328,L"f %d/%d %d/%d %d/%d\n");
        UE::Private::MeshFileUtilsLocals::ObjWriteString
                  ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_328);
        bVar10 = bVar11;
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::PrintfImpl(&local_338,L"f %d %d %d\n");
        UE::Private::MeshFileUtilsLocals::ObjWriteString
                  ((basic_ofstream<char,std::char_traits<char>_> *)local_448,&local_338);
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
      }
      pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < local_288.TriangleRefCounts.UsedCount);
  }
  pbVar14 = std::basic_filebuf<char,std::char_traits<char>_>::close
                      ((basic_filebuf<char,std::char_traits<char>_> *)local_440);
  if (pbVar14 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_448 + *(int *)((longlong)local_448 + 4)),2,false);
  }
  bVar11 = true;
LAB_14c93c439:
  *(undefined ***)(local_448 + *(int *)((longlong)local_448 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_44c + (longlong)*(int *)((longlong)local_448 + 4)) =
       *(int *)((longlong)local_448 + 4) + -0xa8;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)local_440);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_440 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_3a0)
  ;
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_288);
  return bVar11;
}

