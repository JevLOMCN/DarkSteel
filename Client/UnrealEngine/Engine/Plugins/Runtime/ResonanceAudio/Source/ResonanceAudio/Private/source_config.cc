// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// BinauralHighQualityConfig @ 14f071cc0

SourceGraphConfig * __cdecl
vraudio::BinauralHighQualityConfig(SourceGraphConfig *__return_storage_ptr__)

{
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&__return_storage_ptr__->configuration_name,"Binaural High Quality",0x15);
  __return_storage_ptr__->ambisonic_order = 3;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  return __return_storage_ptr__;
}

// BinauralLowQualityConfig @ 14f071d20

SourceGraphConfig * __cdecl
vraudio::BinauralLowQualityConfig(SourceGraphConfig *__return_storage_ptr__)

{
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&__return_storage_ptr__->configuration_name,"Binaural Low Quality",0x14);
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  return __return_storage_ptr__;
}

// BinauralMediumQualityConfig @ 14f071d80

SourceGraphConfig * __cdecl
vraudio::BinauralMediumQualityConfig(SourceGraphConfig *__return_storage_ptr__)

{
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&__return_storage_ptr__->configuration_name,"Binaural Medium Quality",0x17);
  __return_storage_ptr__->ambisonic_order = 2;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  return __return_storage_ptr__;
}

// RoomEffectsOnlyConfig @ 14f071de0

SourceGraphConfig * __cdecl
vraudio::RoomEffectsOnlyConfig(SourceGraphConfig *__return_storage_ptr__)

{
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&__return_storage_ptr__->configuration_name,"Room Effects Only",0x11);
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = false;
  __return_storage_ptr__->enable_direct_rendering = false;
  return __return_storage_ptr__;
}

// StereoPanningConfig @ 14f071e40

SourceGraphConfig * __cdecl vraudio::StereoPanningConfig(SourceGraphConfig *__return_storage_ptr__)

{
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = true;
  __return_storage_ptr__->enable_direct_rendering = true;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0xe;
  memmove(__return_storage_ptr__,"Stereo Panning",0xe);
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0xe] = '\0';
  __return_storage_ptr__->ambisonic_order = 1;
  __return_storage_ptr__->enable_hrtf = false;
  __return_storage_ptr__->enable_direct_rendering = true;
  return __return_storage_ptr__;
}

