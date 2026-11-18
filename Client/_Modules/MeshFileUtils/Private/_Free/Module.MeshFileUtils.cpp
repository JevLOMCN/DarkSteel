// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshFileUtils
// Functions: 5

// `dynamic_initializer_for_'ModuleRegistrantMeshFileUtils'' @ 1413ae790

void __cdecl _dynamic_initializer_for__ModuleRegistrantMeshFileUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MeshFileUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MeshFileUtils",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMeshFileUtilsModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14c939eb0

void * __thiscall
FMeshFileUtilsModule::_scalar_deleting_destructor_(FMeshFileUtilsModule *this,uint param_1)

{
  *this = (FMeshFileUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// getline<char,std::char_traits<char>,std::allocator<char>_> @ 14c93a070

basic_istream<char,std::char_traits<char>_> * __cdecl
std::getline<char,std::char_traits<char>,std::allocator<char>_>
          (basic_istream<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  uint uVar5;
  
  bVar1 = false;
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 8))();
  }
  bVar2 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  uVar3 = 0;
  if (bVar2) {
    (param_2->_Mypair)._Myval2._Mysize = 0;
    pbVar4 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (pbVar4->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    bVar1 = false;
    while (uVar3 != 0xffffffff) {
      if (uVar3 == (byte)param_3) {
        bVar1 = true;
        std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,std::char_traits<char>_> **)
                    (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
        uVar3 = 0;
        goto LAB_14c93a141;
      }
      if (0x7ffffffffffffffe < (param_2->_Mypair)._Myval2._Mysize) {
        uVar3 = 2;
        goto LAB_14c93a141;
      }
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
                (param_2,(char)uVar3);
      bVar1 = true;
      uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    }
    uVar3 = 1;
  }
LAB_14c93a141:
  uVar5 = uVar3 | 2;
  if (bVar1) {
    uVar5 = uVar3;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),uVar5,false);
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 0x10))
              ();
  }
  return param_1;
}

// getline<char,std::char_traits<char>,std::allocator<char>_> @ 14c93a1c0

basic_istream<char,std::char_traits<char>_> * __cdecl
std::getline<char,std::char_traits<char>,std::allocator<char>_>
          (basic_istream<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  
  bVar2 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  bVar1 = false;
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 8))();
  }
  bVar3 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  uVar4 = 0;
  if (bVar3) {
    (param_2->_Mypair)._Myval2._Mysize = 0;
    pbVar5 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (pbVar5->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    bVar1 = false;
    while (uVar4 != 0xffffffff) {
      if (uVar4 == bVar2) {
        bVar1 = true;
        std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,std::char_traits<char>_> **)
                    (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
        uVar4 = 0;
        goto LAB_14c93a2a1;
      }
      if (0x7ffffffffffffffe < (param_2->_Mypair)._Myval2._Mysize) {
        uVar4 = 2;
        goto LAB_14c93a2a1;
      }
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
                (param_2,(char)uVar4);
      bVar1 = true;
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    }
    uVar4 = 1;
  }
LAB_14c93a2a1:
  uVar6 = uVar4 | 2;
  if (bVar1) {
    uVar6 = uVar4;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),uVar6,false);
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 0x10))
              ();
  }
  return param_1;
}

// IMPLEMENT_MODULE_MeshFileUtils @ 14c93c4b0

void __cdecl IMPLEMENT_MODULE_MeshFileUtils(void)

{
  return;
}

